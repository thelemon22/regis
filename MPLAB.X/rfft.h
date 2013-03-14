/* 
 * File:   fft.h
 * Author: richard
 *
 * Created on March 13, 2013, 7:25 PM
 */

#ifndef RFFT_H
#define	RFFT_H

#ifdef	__cplusplus
extern "C" {
#endif

#define FFT_BLOCK_LENGTH	256     /* = Number of frequency points in the FFT */
#define LOG2_BLOCK_LENGTH 	8	/* = Number of "Butterfly" Stages in FFT processing */
#define SAMPLING_RATE		10000	/* = Rate at which input signal was sampled */
                                        /* SAMPLING_RATE is used to calculate the frequency*/
                                        /* of the largest element in the FFT output vector*/

#define FFTTWIDCOEFFS_IN_PROGMEM 	/*<---Comment out this line of the code if twiddle factors (coefficients) */
                                	/*reside in data memory (RAM) as opposed to Program Memory */
                                	/*Then remove the call to "TwidFactorInit()" and add the twiddle factor*/
                                	/*coefficient file into your Project. An example file for a 256-pt FFT*/
                                	/*is provided in this Code example */


/* Extern definitions */
//fractcomplex sigCmpx[FFT_BLOCK_LENGTH] 		/* Typically, the input signal to an FFT  */
//__attribute__ ((far, 	/* routine is a complex array containing samples */
//aligned (FFT_BLOCK_LENGTH * 2 *2)));      		/* of an input signal. For this example, */
							/* we will provide the input signal in an */
							/* array declared in Y-data space. */
/* Global Definitions */
#ifndef FFTTWIDCOEFFS_IN_PROGMEM
fractcomplex twiddleFactors[FFT_BLOCK_LENGTH/2] 	/* Declare Twiddle Factor array in X-space*/
__attribute__ ((section (".xbss, bss, xmemory"), aligned (FFT_BLOCK_LENGTH*2)));
#else
extern const fractcomplex twiddleFactors[FFT_BLOCK_LENGTH/2]	/* Twiddle Factor array in Program memory */
__attribute__ ((space(auto_psv), aligned (FFT_BLOCK_LENGTH*2)));
#endif

void RunFFT(void);

#ifdef	__cplusplus
}
#endif

#endif	/* RFFT_H */

