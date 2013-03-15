/* 
 * File:   main.c
 * Author: richard
 *
 * Created on March 13, 2013, 5:43 PM
 */


#include <stdlib.h>

#include <p33Exxxx.h>
#include "HardwareProfile.h"
#include "usb_config.h"


#include <dsp.h>
#include "USB/usb.h"
#include "USB/usb_function_cdc.h"


#include "main.h"
#include "r_fft.h"
#include "r_adc.h"
#include "r_usb.h"

extern int fftIn[FFT_BLOCK_LENGTH*2];
extern fractcomplex fftOut[FFT_BLOCK_LENGTH];

int ADC_DATA_READY = 0;


int INITIALIZED = 0;
int fftIdx = 0;
void ProcessADCSamples(__eds__ int * AdcBuffer)
{
    int i = 0;
    if (fftIdx >= (FFT_BLOCK_LENGTH + ADC_SAMPLES))
    {
        for (i = 0; i < ADC_SAMPLES; i++) {
            fftIn[fftIdx] = AdcBuffer[i];
            fftIn[fftIdx-(ADC_SAMPLES + FFT_BLOCK_LENGTH)] = AdcBuffer[i];
            fftIdx++;
        }
    }
    else
    {
        for (i = 0; i < ADC_SAMPLES; i++) {
            fftIn[fftIdx++] = AdcBuffer[i];
        }
    }
    
    if (fftIdx >= FFT_BLOCK_LENGTH*2) {
        fftIdx = 0;
    }

    // On first run, don't have enough samples for FFT
    // Once we do, INITIALIZED = 1;
    if (fftIdx >= FFT_BLOCK_LENGTH)
        INITIALIZED = 1;

    if (INITIALIZED)
        ADC_DATA_READY = 1;
}

static void InitializeSystem(void)
{
    #if defined(__C30__) || defined __XC16__
        #if defined(__dsPIC33EP512MU810__) || defined (__PIC24EP512GU810__)
        	ANSELA = 0x0000;
    		ANSELB = 0x0000;
    		ANSELC = 0x0000;
    		ANSELD = 0x0000;
    		ANSELE = 0x0000;
    		ANSELG = 0x0000;

            // The dsPIC33EP512MU810 features Peripheral Pin
            // select. The following statements map UART2 to
            // device pins which would connect to the the
            // RX232 transciever on the Explorer 16 board.

             RPINR19 = 0;
             RPINR19 = 0x64;
             RPOR9bits.RP101R = 0x3;

        #else
            AD1PCFGL = 0xFFFF;
        #endif
    #endif

    #if defined(__dsPIC33EP512MU810__) || defined (__PIC24EP512GU810__)

    // Configure the device PLL to obtain 60 MIPS operation. The crystal
    // frequency is 8MHz. Divide 8MHz by 2, multiply by 60 and divide by
    // 2. This results in Fosc of 120MHz. The CPU clock frequency is
    // Fcy = Fosc/2 = 60MHz. Wait for the Primary PLL to lock and then
//    // configure the auxilliary PLL to provide 48MHz needed for USB
    // Operation.

	PLLFBD = 38;				/* M  = 60	*/
	CLKDIVbits.PLLPOST = 0;		/* N1 = 2	*/
	CLKDIVbits.PLLPRE = 0;		/* N2 = 2	*/
	OSCTUN = 0;

    /*	Initiate Clock Switch to Primary
     *	Oscillator with PLL (NOSC= 0x3)*/

    __builtin_write_OSCCONH(0x03);
	__builtin_write_OSCCONL(0x01);


	while (OSCCONbits.COSC != 0x3);

    // Configuring the auxiliary PLL, since the primary
    // oscillator provides the source clock to the auxiliary
    // PLL, the auxiliary oscillator is disabled. Note that
    // the AUX PLL is enabled. The input 8MHz clock is divided
    // by 2, multiplied by 24 and then divided by 2. Wait till
    // the AUX PLL locks.

    ACLKCON3 = 0x24C1;
    ACLKDIV3 = 0x7;


    ACLKCON3bits.ENAPLL = 1;
    while(ACLKCON3bits.APLLCK != 1);

    #endif

//	The USB specifications require that USB peripheral devices must never source
//	current onto the Vbus pin.  Additionally, USB peripherals should not source
//	current on D+ or D- when the host/hub is not actively powering the Vbus line.
//	When designing a self powered (as opposed to bus powered) USB peripheral
//	device, the firmware should make sure not to turn on the USB module and D+
//	or D- pull up resistor unless Vbus is actively powered.  Therefore, the
//	firmware needs some means to detect when Vbus is being powered by the host.
//	A 5V tolerant I/O pin can be connected to Vbus (through a resistor), and
// 	can be used to detect when Vbus is high (host actively powering), or low
//	(host is shut down or otherwise not supplying power).  The USB firmware
// 	can then periodically poll this I/O pin to know when it is okay to turn on
//	the USB module/D+/D- pull up resistor.  When designing a purely bus powered
//	peripheral device, it is not possible to source current on D+ or D- when the
//	host is not actively providing power on Vbus. Therefore, implementing this
//	bus sense feature is optional.  This firmware can be made to use this bus
//	sense feature by making sure "USE_USB_BUS_SENSE_IO" has been defined in the
//	HardwareProfile.h file.
    #if defined(USE_USB_BUS_SENSE_IO)
    tris_usb_bus_sense = INPUT_PIN; // See HardwareProfile.h
    #endif

//	If the host PC sends a GetStatus (device) request, the firmware must respond
//	and let the host know if the USB peripheral device is currently bus powered
//	or self powered.  See chapter 9 in the official USB specifications for details
//	regarding this request.  If the peripheral device is capable of being both
//	self and bus powered, it should not return a hard coded value for this request.
//	Instead, firmware should check if it is currently self or bus powered, and
//	respond accordingly.  If the hardware has been configured like demonstrated
//	on the PICDEM FS USB Demo Board, an I/O pin can be polled to determine the
//	currently selected power source.  On the PICDEM FS USB Demo Board, "RA2"
//	is used for	this purpose.  If using this feature, make sure "USE_SELF_POWER_SENSE_IO"
//	has been defined in HardwareProfile - (platform).h, and that an appropriate I/O pin
//  has been mapped	to it.
    #if defined(USE_SELF_POWER_SENSE_IO)
    tris_self_power = INPUT_PIN;	// See HardwareProfile.h
    #endif

    USBDeviceInit();	//usb_device.c.  Initializes USB module SFRs and firmware
    					//variables to known states.

    
}//end InitializeSystem



int main(void) {
    InitializeSystem();
    initADCDMA();

    
    #if defined(USB_INTERRUPT)
        if(USB_BUS_SENSE && (USBGetDeviceState() == DETACHED_STATE))
        {
            USBDeviceAttach();
        }
    #endif

    #if defined(USB_POLLING)
            // Check bus status and service USB interrupts.
            USBDeviceTasks();
    #endif
    while(1)
    {
        if (!ADC_DATA_READY)
            continue;
                
        ADC_DATA_READY = 0;
        
        RunFFT();


        //Blink the LEDs according to the USB device status
        //BlinkUSBStatus();
        // User Application USB tasks
        //if((USBDeviceState < CONFIGURED_STATE)||(USBSuspendControl==1)) continue;


        if(USBUSARTIsTxTrfReady())
        {
            putUSBUSART(&fftOut[0], FFT_BLOCK_LENGTH-1);
        }

        CDCTxService();
        
        
        //ProcessIO();
    }
    return (EXIT_SUCCESS);
}

