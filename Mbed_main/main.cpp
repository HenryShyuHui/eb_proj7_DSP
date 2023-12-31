#include "mbed.h"

#include "arm_math.h"
#include "math_helper.h"

#define SEMIHOSTING 1
#if defined(SEMIHOSTING)
#include <stdio.h>
#endif
/* ----------------------------------------------------------------------
** Macro Defines
** ------------------------------------------------------------------- */
#define TEST_LENGTH_SAMPLES  480  //採樣點數
/*
This SNR is a bit small. Need to understand why
this example is not giving better SNR ...
*/
#define SNR_THRESHOLD_F32    75.0f
#define BLOCK_SIZE            32  
#if defined(ARM_MATH_MVEF) && !defined(ARM_MATH_AUTOVECTORIZE)
/* Must be a multiple of 16 */
#define NUM_TAPS_ARRAY_SIZE              32
#else
#define NUM_TAPS_ARRAY_SIZE              29
#endif
#define NUM_TAPS              29    //numbers of filter parameter 
/* -------------------------------------------------------------------
 * The input signal and reference output (computed with MATLAB)
 * are defined externally in arm_fir_lpf_data.c.
 * ------------------------------------------------------------------- */
extern float32_t testInput_f32_1kHz_15kHz[TEST_LENGTH_SAMPLES * 2];
extern float32_t refOutput[TEST_LENGTH_SAMPLES];
/* -------------------------------------------------------------------
 * Declare Test output buffer
 * ------------------------------------------------------------------- */
static float32_t testOutput[TEST_LENGTH_SAMPLES];
static float32_t testOutputMag[TEST_LENGTH_SAMPLES];
/* -------------------------------------------------------------------
 * Declare State buffer of size (numTaps + blockSize - 1)
 * ------------------------------------------------------------------- */
#if defined(ARM_MATH_MVEF) && !defined(ARM_MATH_AUTOVECTORIZE)
static float32_t firStateF32[2 * BLOCK_SIZE + NUM_TAPS - 1];
#else
static float32_t firStateF32[BLOCK_SIZE + NUM_TAPS - 1];
#endif 
/* ----------------------------------------------------------------------
** FIR Coefficients buffer generated using fir1() MATLAB function.
** fir1(28, 6/24)
** ------------------------------------------------------------------- */
#if defined(ARM_MATH_MVEF) && !defined(ARM_MATH_AUTOVECTORIZE)
const float32_t firCoeffs32[NUM_TAPS_ARRAY_SIZE] = {
  -0.0018225230f, -0.0015879294f, +0.0000000000f, +0.0036977508f, +0.0080754303f, +0.0085302217f, -0.0000000000f, -0.0173976984f,
  -0.0341458607f, -0.0333591565f, +0.0000000000f, +0.0676308395f, +0.1522061835f, +0.2229246956f, +0.2504960933f, +0.2229246956f,
  +0.1522061835f, +0.0676308395f, +0.0000000000f, -0.0333591565f, -0.0341458607f, -0.0173976984f, -0.0000000000f, +0.0085302217f,
  +0.0080754303f, +0.0036977508f, +0.0000000000f, -0.0015879294f, -0.0018225230f, 0.0f,0.0f,0.0f
};
#else
const float32_t firCoeffs32[NUM_TAPS_ARRAY_SIZE] = {
  -0.0018225230f, -0.0015879294f, +0.0000000000f, +0.0036977508f, +0.0080754303f, +0.0085302217f, -0.0000000000f, -0.0173976984f,
  -0.0341458607f, -0.0333591565f, +0.0000000000f, +0.0676308395f, +0.1522061835f, +0.2229246956f, +0.2504960933f, +0.2229246956f,
  +0.1522061835f, +0.0676308395f, +0.0000000000f, -0.0333591565f, -0.0341458607f, -0.0173976984f, -0.0000000000f, +0.0085302217f,
  +0.0080754303f, +0.0036977508f, +0.0000000000f, -0.0015879294f, -0.0018225230f
};
#endif
/* ------------------------------------------------------------------
 * Global variables for FIR LPF Example
 * ------------------------------------------------------------------- */
uint32_t blockSize = BLOCK_SIZE;
uint32_t numBlocks = TEST_LENGTH_SAMPLES/BLOCK_SIZE;
float32_t  snr;
/* ----------------------------------------------------------------------
 * FIR LPF Example
 * ------------------------------------------------------------------- */
 
int32_t main(void)
{
  uint32_t i;
  arm_fir_instance_f32 S;
   arm_status status;
   float32_t  *inputF32, *outputF32, *outputMagF32; 
  /* Initialize input and output buffer pointers */
   inputF32 = &testInput_f32_1kHz_15kHz[0];
   outputF32 = &testOutput[0];
   outputMagF32 = &testOutputMag[0];
  /* Call FIR init function to initialize the instance structure. */
  arm_fir_init_f32(&S, NUM_TAPS, (float32_t *)&firCoeffs32[0], &firStateF32[0], blockSize);
  /* ----------------------------------------------------------------------
  ** Call the FIR process function for every blockSize samples
  ** ------------------------------------------------------------------- */
  for(i=0; i < numBlocks; i++)
  {
    arm_fir_f32(&S, inputF32 + (i * blockSize), outputF32 + (i * blockSize), blockSize);
  }
  int k = 0;

  for (i=0; i < TEST_LENGTH_SAMPLES; i++ )
  {
      printf("%d: %f, %f \r\n", k,testOutput[i], inputF32[i]);
      k++;
  }

    // uint16_t i;
    // arm_rfft_fast_instance_f32 S;
    // arm_cfft_instance_f32 K;
    
    /*正變換*/ 
    // int ifftFlag = 0 ;
    
    // /*初始化結構體S中的參數*/ 
    //  arm_rfft_fast_init_f32( & S, TEST_LENGTH_SAMPLES);
    
    
    // /* 1024點實序列快速FFT */  
    // arm_rfft_fast_f32( & S, inputF32, outputF32, ifftFlag);
    
    // /*為了方便跟函數arm_cfft_f32計算的結果做對比，這裡求解了1024組模值，實際函數arm_rfft_fast_f32
    //    只求解了512組  
    // */ 
    // arm_cmplx_mag_f32(outputF32, outputMagF32, TEST_LENGTH_SAMPLES);
    //arm_cfft_init_f32( &K ,TEST_LENGTH_SAMPLES );
    
    // arm_cfft_f32(& K, inputF32, 0,1);
    // arm_cmplx_mag_f32(inputF32, outputF32, TEST_LENGTH_SAMPLES/2);
    
    // /*求相頻*/ 
    // //PowerPhaseRadians_f32(outputMagF32, Phase_f32, TEST_LENGTH_SAMPLES, 0.5f );
    
    
    // /*串口列印求解的振幅頻率和相頻*/ 
    // for (i= 0 ; i<TEST_LENGTH_SAMPLES; i++ )
    // {
    //     //printf( " %f, %f\r\n " , outputMagF32[i], refOutput[i]);
    //     printf( " %f, %f\r\n " , outputF32[i], refOutput[i]);
    // }

    
  /* ----------------------------------------------------------------------
  ** Compare the generated output against the reference output computed
  ** in MATLAB.
  ** ------------------------------------------------------------------- */
  snr = arm_snr_f32(&refOutput[0], &testOutput[0], TEST_LENGTH_SAMPLES);
  status = (snr < SNR_THRESHOLD_F32) ? ARM_MATH_TEST_FAILURE : ARM_MATH_SUCCESS;
  printf("snr: %f\n", snr);
  if (status != ARM_MATH_SUCCESS)
  {
#if defined (SEMIHOSTING)
    printf("FAILURE\n");
#else
    while (1);                             /* main function does not return */
#endif
  }
  else
  {
#if defined (SEMIHOSTING)
    printf("SUCCESS\n");
#else
    while (1);                             /* main function does not return */
#endif
  }
}
