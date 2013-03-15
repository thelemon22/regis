#include <stdlib.h>
#include <dsp.h>
#include "r_adc.h"
#include "r_fft.h"


int	peakFrequencyBin = 0;				/* Declare post-FFT variables to compute the */
unsigned long peakFrequency = 0;			/* frequency of the largest spectral component */
//fractcomplex sigCmpx[FFT_BLOCK_LENGTH] 		/* Typically, the input signal to an FFT  */
//__attribute__ ((far, 	/* routine is a complex array containing samples */
//aligned (FFT_BLOCK_LENGTH * 2 *2)));      		/* of an input signal. For this example, */
							/* we will provide the input signal in an */

/* Global Definitions */
#ifndef FFTTWIDCOEFFS_IN_PROGMEM
fractcomplex twiddleFactors[FFT_BLOCK_LENGTH/2] 	/* Declare Twiddle Factor array in X-space*/
__attribute__ ((section (".xbss, bss, xmemory"), aligned (FFT_BLOCK_LENGTH*2)));
#else
extern const fractcomplex twiddleFactors[FFT_BLOCK_LENGTH/2]	/* Twiddle Factor array in Program memory */
__attribute__ ((space(auto_psv), aligned (FFT_BLOCK_LENGTH*2)));
#endif

int fftIn[FFT_BLOCK_LENGTH*2];

fractcomplex fftOut[FFT_BLOCK_LENGTH]
__attribute__ ((space(ymemory), 	/* routine is a complex array containing samples */
eds, address(0x9000)));
//aligned (FFT_BLOCK_LENGTH * 2 *2)));      		/* of an input signal. For this example, */

__attribute__ ((aligned(FFT_BLOCK_LENGTH*2*2)))

int fftInOffset = 0;

void RunFFT(){
	int i = 0;

        for (i = 0; i < FFT_BLOCK_LENGTH; i++){
            fftIn[i] = (fractional)0;
        }

	fractional *p_real = &fftIn[0];
	fractcomplex *p_cmpx = &fftOut[0] ;

	//for ( i = 0; i < FFT_BLOCK_LENGTH; i++ )/* The FFT function requires input data */
	//{					/* to be in the fractional fixed-point range [-0.5, +0.5]*/
	//	*p_real = *p_real >>1 ;		/* So, we shift all data samples by 1 bit to the right. */
//		*p_realsigCmpxl++;			/* Should you desire to optimize this process, perform */
	//}					/* data scaling when first obtaining the time samples */
						/* Or within the BitReverseComplex function source code */

	p_real = &fftIn[fftInOffset + (FFT_BLOCK_LENGTH)-1] ;	/* Set up pointers to convert real array */
	p_cmpx = &fftOut[FFT_BLOCK_LENGTH-1] ; /* to a complex array. The input array initially has all */
						/* the real input samples followed by a series of zeros */

        fftInOffset+= ADC_SAMPLES;
        
        if (fftInOffset >= (FFT_BLOCK_LENGTH + ADC_SAMPLES)) {
            fftInOffset = 0;
        }

	for ( i = FFT_BLOCK_LENGTH; i > 0; i--) /* Convert the Real input sample array */
	{					/* to a Complex input sample array  */
		(*p_cmpx).real = (*p_real--);	/* We will simpy zero out the imaginary  */
		(*p_cmpx--).imag = 0x0000;	/* part of each data sample */
	}

	/* Perform FFT operation */
#ifndef FFTTWIDCOEFFS_IN_PROGMEM
	FFTComplexIP (LOG2_BLOCK_LENGTH, &fftOut[0], &twiddleFactors[0], COEFFS_IN_DATA);
#else
	FFTComplexIP (LOG2_BLOCK_LENGTH, &fftOut[0], (fractcomplex *) __builtin_psvoffset(&twiddleFactors[0]), (int) __builtin_psvpage(&twiddleFactors[0]));
//        FFTComplexIP (LOG2_BLOCK_LENGTH, &p_cmpx[0], (fractcomplex *) &twiddleFactors[0], (int) __builtin_psvpage(&twiddleFactors[0]));
#endif

	/* Store output samples in bit-reversed order of their addresses */
	BitReverseComplex (LOG2_BLOCK_LENGTH, &fftOut[0]);
        
	/* Compute the square magnitude of the complex FFT output array so we have a Real output vetor */
	SquareMagnitudeCplx(FFT_BLOCK_LENGTH, &fftOut[0], &fftOut[0].real);

}