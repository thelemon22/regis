#include <dsp.h>
#include "radc.h"
#include "rfft.h"


int	peakFrequencyBin = 0;				/* Declare post-FFT variables to compute the */
unsigned long peakFrequency = 0;			/* frequency of the largest spectral component */


int fftIn[FFT_BLOCK_LENGTH*2];
fractcomplex fftOut[FFT_BLOCK_LENGTH];

int fftInOffset = 0;

void RunFFT(){
	int i = 0;
	fractional *p_real = &fftIn[0];
	fractcomplex *p_cmpx = &fftOut[0] ;


#ifndef FFTTWIDCOEFFS_IN_PROGMEM					/* Generate TwiddleFactor Coefficients */
	TwidFactorInit (LOG2_BLOCK_LENGTH, &twiddleFactors[0], 0);	/* We need to do this only once at start-up */
#endif

	//for ( i = 0; i < FFT_BLOCK_LENGTH; i++ )/* The FFT function requires input data */
//	{					/* to be in the fractional fixed-point range [-0.5, +0.5]*/
//		*p_real = *p_real >>1 ;		/* So, we shift all data samples by 1 bit to the right. */
//		*p_realsigCmpxl++;			/* Should you desire to optimize this process, perform */
//	}					/* data scaling when first obtaining the time samples */
						/* Or within the BitReverseComplex function source code */

	p_real = &fftIn[fftInOffset + (FFT_BLOCK_LENGTH)-1] ;	/* Set up pointers to convert real array */
	p_cmpx = &fftOut[FFT_BLOCK_LENGTH-1] ; /* to a complex array. The input array initially has all */
						/* the real input samples followed by a series of zeros */

        fftInOffset+= ADC_SAMPLES;
        
        if (fftInOffset >= (FFT_BLOCK_LENGTH + ADC_SAMPLES)) {
            fftInOffset = 0;
        }

	for ( i = FFT_BLOCK_LENGTH; i > 0; i-- ) /* Convert the Real input sample array */
	{					/* to a Complex input sample array  */
		(*p_cmpx).real = (*p_real--);	/* We will simpy zero out the imaginary  */
		(*p_cmpx--).imag = 0x0000;	/* part of each data sample */
	}

	/* Perform FFT operation */
#ifndef FFTTWIDCOEFFS_IN_PROGMEM
	FFTComplexIP (LOG2_BLOCK_LENGTH, &fftOut[0], &twiddleFactors[0], COEFFS_IN_DATA);
#else
	FFTComplexIP (LOG2_BLOCK_LENGTH, &fftOut[0], (fractcomplex *) __builtin_psvoffset(&twiddleFactors[0]), (int) __builtin_psvpage(&twiddleFactors[0]));
#endif

	/* Store output samples in bit-reversed order of their addresses */
	BitReverseComplex (LOG2_BLOCK_LENGTH, &fftOut[0]);

	/* Compute the square magnitude of the complex FFT output array so we have a Real output vetor */
	SquareMagnitudeCplx(FFT_BLOCK_LENGTH, &fftOut[0], &fftOut[0].real);

}