/**********************************************************************
* � 2005 Microchip Technology Inc.
*
* FileName:        adcDrv2.c
* Dependencies:    Header (.h) files if applicable, see below
* Processor:       dsPIC33Exxxx/PIC24Exxxx
* Compiler:        MPLAB� C30 v3.30 or higher
*
* SOFTWARE LICENSE AGREEMENT:
* Microchip Technology Incorporated ("Microchip") retains all ownership and 
* intellectual property rights in the code accompanying this message and in all 
* derivatives hereto.  You may use this code, and any derivatives created by 
* any person or entity by or on your behalf, exclusively with Microchip's
* proprietary products.  Your acceptance and/or use of this code constitutes 
* agreement to the terms and conditions of this notice.
*
* CODE ACCOMPANYING THIS MESSAGE IS SUPPLIED BY MICROCHIP "AS IS".  NO 
* WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT NOT LIMITED 
* TO, IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY AND FITNESS FOR A 
* PARTICULAR PURPOSE APPLY TO THIS CODE, ITS INTERACTION WITH MICROCHIP'S 
* PRODUCTS, COMBINATION WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 
*
* YOU ACKNOWLEDGE AND AGREE THAT, IN NO EVENT, SHALL MICROCHIP BE LIABLE, WHETHER 
* IN CONTRACT, WARRANTY, TORT (INCLUDING NEGLIGENCE OR BREACH OF STATUTORY DUTY), 
* STRICT LIABILITY, INDEMNITY, CONTRIBUTION, OR OTHERWISE, FOR ANY INDIRECT, SPECIAL, 
* PUNITIVE, EXEMPLARY, INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, FOR COST OR EXPENSE OF 
* ANY KIND WHATSOEVER RELATED TO THE CODE, HOWSOEVER CAUSED, EVEN IF MICROCHIP HAS BEEN 
* ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE FULLEST EXTENT 
* ALLOWABLE BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO 
* THIS CODE, SHALL NOT EXCEED THE PRICE YOU PAID DIRECTLY TO MICROCHIP SPECIFICALLY TO 
* HAVE THIS CODE DEVELOPED.
*
* You agree that you are solely responsible for testing the code and 
* determining its suitability.  Microchip has no obligation to modify, test, 
* certify, or support the code.
*
* REVISION HISTORY:
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* Author            Date      Comments on this revision
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* Settu D 			03/09/06  First release of source file
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* Sorin M 			07/01/10  Updated for dsPIC33E
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* Srikar D			04/27/11  Updated for dsPIC33E / PIC24E
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*
* ADDITIONAL NOTES:
* This file contains two functions - initAdc1(), initDma0 and _DMA0Interrupt().
*
**********************************************************************/
#if defined(__dsPIC33E__)
#include "p33Exxxx.h"
#elif defined(__PIC24E__)
#include "p24exxxx.h"
#endif

#include "adcDrv2.h"

// User Defines
#define FCY		40000000  			// User must calculate and enter FCY here
#define Dly_Time (20E-6 * FCY)      // ADC Off-to-On delay


#define NUMSAMP	256
//int BufferA[NUMSAMP] __attribute__((space(dma)));
//int BufferB[NUMSAMP] __attribute__((space(dma)));
#ifdef _HAS_DMA_
__eds__ int BufferA[NUMSAMP] __attribute__((eds,space(dma)));
__eds__ int BufferB[NUMSAMP] __attribute__((eds,space(dma)));
#else
 int BufferA[NUMSAMP] __attribute__((space(xmemory)));
int BufferB[NUMSAMP] __attribute__((space(xmemory)));
#endif
void ProcessADCSamples(__eds__ int * AdcBuffer);



//Functions:
//initAdc1() is used to configure A/D to convert AIN0 using CH0 and CH1 sample/hold in sequencial mode 
//at 1.1MHz throughput rate. ADC clock is configured at 13.3Mhz or Tad=75ns
void initAdc1(void)
{


		AD1CON1bits.FORM   = 3;		// Data Output Format: Signed Fraction (Q15 format)
		AD1CON1bits.SSRC   = 7;		// Interan Counter (SAMC) ends sampling and starts convertion
		AD1CON1bits.ASAM   = 0;		// ADC Sample Control: Sampling begins immediately after conversion
		AD1CON1bits.AD12B  = 0;		// 10-bit ADC operation

		AD1CON2bits.CHPS  = 1;		// Converts CH0/CH1
     
		AD1CON3bits.ADRC=0;			// ADC Clock is derived from Systems Clock
		AD1CON3bits.SAMC=2; 		// Auto Sample Time = 0*Tad		
		AD1CON3bits.ADCS=2;		    // ADC Conversion Clock Tad=Tcy*(ADCS+1)= (1/40M)*3 = 75ns (13.3Mhz)
									// ADC Conversion Time for 10-bit Tc=12*Tab =  900ns (1.1MHz)
					
		AD1CON1bits.ADDMABM = 1; 	// DMA buffers are built in conversion order mode
		AD1CON2bits.SMPI    = 0;	// SMPI must be 0
		AD1CON4bits.ADDMAEN  = 1;		// Converts in ADC1BUF0

  		//AD1CHS0/AD1CHS123: A/D Input Select Register
	    AD1CHS0bits.CH0SA=3;		// MUXA +ve input selection (AIN0) for CH0
		AD1CHS0bits.CH0NA=0;		// MUXA -ve input selection (Vref-) for CH0
	
	    AD1CHS123bits.CH123SA=0;	// MUXA +ve input selection (AIN0) for CH1
		AD1CHS123bits.CH123NA=0;	// MUXA -ve input selection (Vref-) for CH1

        IFS0bits.AD1IF = 0;			// Clear the A/D interrupt flag bit
        IEC0bits.AD1IE = 0;			// Do Not Enable A/D interrupt 
        
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
	DMA0CNT=(NUMSAMP-1);				
	
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
        IFS0bits.DMA0IF = 0;				 	 //Clear the DMA0 Interrupt Flag
}



void ProcessADCSamples(__eds__ int * AdcBuffer)
{
	/* Do something with ADC Samples */
}




