/* 
 * File:   adc.c
 * Author: richard
 *
 * Created on March 13, 2013, 6:14 PM
 */

#if defined(__dsPIC33E__)
#include "p33Exxxx.h"
#elif defined(__PIC24E__)
#include "p24exxxx.h"
#endif

#include "r_adc.h"

// User Defines
//#define FCY		40000000  			// User must calculate and enter FCY here
#define FCY		115200  			// User must calculate and enter FCY here
#define Dly_Time (20E-6 * FCY)      // ADC Off-to-On delay


//int BufferA[ADC_SAMPLES] __attribute__((space(dma)));
//int BufferB[ADC_SAMPLES] __attribute__((space(dma)));
#ifdef _HAS_DMA_
__eds__ int BufferA[ADC_SAMPLES] __attribute__((eds,space(dma)));
__eds__ int BufferB[ADC_SAMPLES] __attribute__((eds,space(dma)));
#else
int BufferA[ADC_SAMPLES] __attribute__((space(xmemory)));
int BufferB[ADC_SAMPLES] __attribute__((space(xmemory)));
#endif

extern void ProcessADCSamples(__eds__ int * AdcBuffer);

void __attribute__((__interrupt__)) _DMA0Interrupt(void);
void initAdc1(void);
void initDma0(void);

void initADCDMA (void)
{

// Configure Oscillator to operate the device at 40Mhz
// Fosc= Fin*M/(N1*N2), Fcy=Fosc/2
// Fosc= 8M*40/(2*2)=80Mhz for 8M input clock
	PLLFBD=38;					// M=40
	CLKDIVbits.PLLPOST=0;		// N1=2
	CLKDIVbits.PLLPRE=0;		// N2=2
	OSCTUN=0;					// Tune FRC oscillator, if FRC is used

// Disable Watch Dog Timer
	RCONbits.SWDTEN=0;

// clock switching to incorporate PLL
	__builtin_write_OSCCONH(0x03);		     // Initiate Clock Switch to Primary Oscillator with PLL (NOSC=0b011)
	__builtin_write_OSCCONL(OSCCON || 0x01); // Start clock switching
	while (OSCCONbits.COSC != 0x03);	     // Wait for Clock switch to occur
	while(OSCCONbits.LOCK!=1) {};			 // Wait for PLL to lock


// Peripheral Initialisation
	initDma0();					// Initialise the DMA controller to buffer ADC data in conversion order
   	initAdc1();             	// Initialize the A/D converter to convert Channel 5              //Loop Endlessly - Execution is interrupt driven
                                //from this point on.
}

//Functions:
//initAdc1() is used to configure A/D to convert AIN0 using CH0 and CH1 sample/hold in sequencial mode
//at 1.1MHz throughput rate. ADC clock is configured at 13.3Mhz or Tad=75ns
void initAdc1(void)
{
        AD1CSSH=0x1000; //select AN28 for analog input

        //Sampling and Conversion
        AD1CON1bits.FORM   = 3;		// Data Output Format: Signed Fraction (Q15 format) on range [-1, +0.999]
        AD1CON1bits.SSRC   = 7;		// Internal Counter (SAMC) ends sampling and starts convertion
        AD1CON1bits.SSRCG  = 0;         // i.e. starts to convert after internal counter reaches value
        
        AD1CON1bits.ASAM   = 0;		// Disable automatic sampling while configuring ADC
        AD1CON1bits.AD12B  = 0;		// 10-bit ADC operation

        // Channel + Voltage
        //AD1CON2bits.CHPS  = 1;        // Use CH0 and CH1
        AD1CON2bits.CHPS  = 0;		// Only use CH0 (mono)
        AD1CON2bits.VCFG = 0;           // Use internal voltage reference values


        // Clock and Conversion Counter
        AD1CON3bits.ADRC=0;		// ADC Clock is derived from Systems Clock
        AD1CON3bits.SAMC=2; 		// Auto Sample Time = 0*Tad
        //AD1CON3bits.SAMC=0; 		// Auto Sample Time = 0*Tad
        AD1CON3bits.ADCS=2;             // ADC Conversion Clock Tad=Tcy*(ADCS+1)= (1/40M)*3 = 75ns (13.3Mhz)
                                        // ADC Conversion Time for 10-bit Tc=12*Tab =  900ns (1.1MHz)
        // A/D DMA Setup
        AD1CON4bits.ADDMAEN  = 1;	// The ADC DMA enable bit (Converts in ADC1BUF0)
        AD1CON1bits.ADDMABM = 1; 	// DMA buffers are built in conversion order mode
        AD1CON2bits.SMPI    = 0;	// SMPI must be 0 - This determines how often the DMA pointer is incremented.
                                        //                  0 means every sample, increment DMA ptr.
                                        //                  We could increase this to optimize if necessary..
        
        //AD1CHS0/AD1CHS123: A/D Input Select Register

        // Input Pin Selection
        AD1CHS0bits.CH0SA=0;		// MUXA +ve input selection (AIN0) for CH0
        AD1CHS0bits.CH0NA=0;		// MUXA -ve input selection (Vref-) for CH0

        //AD1CHS123bits.CH123SA=0;	// MUXA +ve input selection (AIN0) for CH1
        //AD1CHS123bits.CH123NA=0;	// MUXA -ve input selection (Vref-) for CH1

        IFS0bits.AD1IF = 0;		// Clear the A/D interrupt flag bit
        IEC0bits.AD1IE = 0;		// Do Not Enable A/D interrupt

        AD1CON1bits.ADON = 1;		// Turn on the A/D converter

        Dly_Time;			// Delay for 20uS to allow ADC to settle (25nS * 0x320 = 20uS)

        AD1CON1bits.ASAM = 1;		// Sampling begins immediately after last conversion. SAMP bit is auto-set

}

// DMA0 configuration
// Direction: Read from peripheral address 0-x300 (ADC1BUF0) and write to DMA RAM
// AMODE: Register indirect with post increment
// MODE: Continuous, Ping-Pong Mode
// IRQ: ADC Interrupt
// ADC stores results stored alternatively between DMA_BASE[0]/DMA_BASE[16] on every 16th DMA request

void initDma0(void)
{
	DMA0CONbits.AMODE = 0;			// Configure DMA for Register indirect with post increment
	DMA0CONbits.MODE  = 2;			// Configure DMA for Continuous Ping-Pong mode

	DMA0PAD=(int)&ADC1BUF0;
	DMA0CNT=(ADC_SAMPLES-1);

	DMA0REQ=13;
	#ifdef _HAS_DMA_
	DMA0STAL = __builtin_dmaoffset(&BufferA);
	DMA0STAH = __builtin_dmapage(&BufferA);

	DMA0STBL = __builtin_dmaoffset(&BufferB);
	DMA0STBH = __builtin_dmapage(&BufferB);
	#else
	DMA0STAL = (unsigned int)&BufferA;
	DMA0STAH = (unsigned int)&BufferA;

	DMA0STBL = (unsigned int)&BufferB;
	DMA0STBH = (unsigned int)&BufferB;
	#endif

	IFS0bits.DMA0IF = 0;			//Clear the DMA interrupt flag bit
        IEC0bits.DMA0IE = 1;			//Set the DMA interrupt enable bit

	DMA0CONbits.CHEN=1;

}

/*=============================================================================
_DMA0Interrupt(): ISR name is chosen from the device linker script.
=============================================================================*/
unsigned int DmaBuffer = 0;

void __attribute__((interrupt, auto_psv)) _DMA0Interrupt(void)
{
        if(DmaBuffer == 0)
        {
                ProcessADCSamples(BufferA);
        }
        else
        {
                ProcessADCSamples(BufferB);

        }

        DmaBuffer ^= 1;

        __builtin_btg((unsigned int *)&LATA, 6); // Toggle RA6
        IFS0bits.DMA0IF = 0;                    //Clear the DMA0 Interrupt Flag
}

