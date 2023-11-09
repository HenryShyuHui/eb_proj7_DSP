/* ----------------------------------------------------------------------   
* Copyright (C) 2010-2012 ARM Limited. All rights reserved.   
*   
* $Date:        17. January 2013  
* $Revision: 	V1.4.0   
*   
* Project: 	    CMSIS DSP Library   
* Title:	     	arm_fir_data.c
*   
* Description:	 Data file used for example code
*   
* Target Processor: Cortex-M4/Cortex-M3/Cortex-M0
*  
* Redistribution and use in source and binary forms, with or without 
* modification, are permitted provided that the following conditions
* are met:
*   - Redistributions of source code must retain the above copyright
*     notice, this list of conditions and the following disclaimer.
*   - Redistributions in binary form must reproduce the above copyright
*     notice, this list of conditions and the following disclaimer in
*     the documentation and/or other materials provided with the 
*     distribution.
*   - Neither the name of ARM LIMITED nor the names of its contributors
*     may be used to endorse or promote products derived from this
*     software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
* "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
* LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
* FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE 
* COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
* INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
* BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
* LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
* CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
* LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
* ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
* POSSIBILITY OF SUCH DAMAGE.  
 * -------------------------------------------------------------------- */

#include "arm_math.h"

/* ----------------------------------------------------------------------
** Test input signal contains 1000Hz + 15000 Hz
** ------------------------------------------------------------------- */
/*
float32_t testInput_f32_1kHz_15kHz[480] =
{

};
*/

float32_t testInput_f32_1kHz_15kHz[480] =
{
0.063074,
0.062891,
0.062891,
0.062830,
0.062952,
0.062952,
0.062952,
0.062952,
0.062952,
0.062952,
0.062891,
0.062891,
0.063074,
0.062830,
0.062891,
0.063196,
0.063074,
0.063623,
0.067100,
0.069113,
0.074420,
0.073261,
0.070272,
0.070821,
0.074298,
0.073871,
0.066673,
0.063257,
0.064965,
0.069174,
0.069967,
0.059719,
0.045201,
0.034282,
0.020496,
0.016165,
0.016714,
0.005978,
0.007015,
-0.000549,
0.012322,
0.023790,
0.029341,
0.035929,
0.045323,
0.051789,
0.049776,
0.043554,
0.040077,
0.035807,
0.037393,
0.048800,
0.053375,
0.053436,
0.055205,
0.053924,
0.057462,
0.058316,
0.059658,
0.059048,
0.065087,
0.065148,
0.073078,
0.073566,
0.073261,
0.070760,
0.072590,
0.069662,
0.065758,
0.068076,
0.064416,
0.060390,
0.058194,
0.053314,
0.053619,
0.055144,
0.057462,
0.057035,
0.055510,
0.053558,
0.052887,
0.050081,
0.045872,
0.042090,
0.035929,
0.034831,
0.037088,
0.041175,
0.048739,
0.051606,
0.049715,
0.056791,
0.056791,
0.061976,
0.059963,
0.057584,
0.059231,
0.059048,
0.059353,
0.060268,
0.064233,
0.068198,
0.070394,
0.069174,
0.066795,
0.068869,
0.068198,
0.068076,
0.068564,
0.065270,
0.069479,
0.071309,
0.077409,
0.077714,
0.081496,
0.073627,
0.072102,
0.063989,
0.052216,
0.049288,
0.055205,
0.046604,
0.054229,
0.058194,
0.062769,
0.060817,
0.057828,
0.059414,
0.058499,
0.057645,
0.058987,
0.059902,
0.058377,
0.058865,
0.065331,
0.072651,
0.072285,
0.069540,
0.067954,
0.063623,
0.063562,
0.067222,
0.067344,
0.066063,
0.067283,
0.060634,
0.062342,
0.056486,
0.060512,
0.060085,
0.058011,
0.058560,
0.059353,
0.060207,
0.060390,
0.062891,
0.063196,
0.066246,
0.067771,
0.069784,
0.056730,
0.059048,
0.089121,
0.121878,
0.121878,
-0.075091,
-0.092293,
0.121878,
-0.121817,
0.095282,
0.121878,
-0.105225,
-0.015311,
0.121878,
-0.121817,
0.106567,
0.121878,
-0.101565,
0.121878,
0.121878,
-0.121451,
0.043127,
0.121878,
-0.010919,
-0.091744,
0.121878,
-0.071187,
0.011102,
0.121878,
0.060207,
-0.101260,
0.121878,
-0.052155,
0.004331,
0.121878,
0.121878,
-0.119865,
0.121878,
0.121878,
-0.121817,
0.074115,
0.121878,
0.069662,
0.081435,
0.121878,
0.043310,
-0.118279,
0.121878,
0.121878,
-0.121817,
0.090280,
0.121878,
0.025193,
-0.120963,
0.121878,
0.055815,
-0.121817,
0.121878,
0.121878,
-0.121817,
0.053924,
0.121878,
-0.110776,
0.004636,
0.121878,
0.121878,
-0.121817,
0.121878,
0.121878,
-0.121817,
0.073322,
0.121878,
0.109373,
-0.121817,
0.121878,
0.121878,
-0.121817,
0.121878,
0.121878,
-0.089121,
-0.078873,
0.121878,
-0.014701,
-0.114253,
0.121878,
0.121878,
-0.121817,
0.121878,
0.121878,
-0.002745,
-0.120719,
0.121878,
0.120353,
-0.121817,
0.121512,
0.121878,
0.056974,
-0.121817,
0.114680,
0.121878,
0.087230,
-0.121634,
0.121878,
0.121878,
0.024888,
-0.104310,
0.121878,
0.121878,
-0.121817,
0.112545,
0.121878,
0.121878,
-0.108946,
0.121878,
0.121878,
0.121878,
0.069235,
0.024461,
0.043676,
0.025864,
0.018117,
0.005124,
0.003416,
0.000488,
0.019947,
0.028060,
0.045079,
0.055327,
0.065392,
0.054595,
0.061732,
0.065026,
0.066917,
0.048983,
0.067588,
0.057035,
0.069174,
0.069784,
0.066856,
0.071919,
0.070089,
0.068991,
0.067283,
0.069418,
0.069967,
0.074237,
0.074298,
0.078202,
0.073566,
0.071309,
0.066795,
0.065331,
0.067222,
0.067588,
0.063257,
0.064477,
0.058804,
0.055266,
0.050874,
0.048251,
0.046543,
0.040626,
0.036905,
0.033611,
0.028304,
0.030805,
0.034221,
0.042517,
0.047458,
0.044652,
0.050447,
0.046970,
0.047702,
0.050569,
0.050142,
0.059292,
0.061366,
0.060085,
0.064904,
0.065209,
0.063684,
0.059536,
0.059963,
0.059597,
0.061488,
0.063501,
0.065209,
0.062830,
0.058926,
0.063989,
0.058804,
0.063318,
0.061671,
0.064355,
0.065941,
0.084668,
0.076799,
0.065148,
0.045750,
0.021228,
0.008479,
0.029829,
0.071248,
0.071797,
0.043432,
0.062952,
0.062281,
0.062647,
0.062708,
0.062708,
0.062708,
0.062708,
0.062830,
0.062830,
0.062708,
0.062769,
0.062891,
0.062769,
0.062769,
0.062830,
0.062769,
0.062830,
0.062830,
0.062830,
0.062830,
0.062769,
0.062830,
0.062830,
0.063074,
0.063013,
0.061732,
0.063806,
0.063623,
0.064416,
0.062159,
0.060268,
0.060268,
0.061549,
0.056974,
0.065209,
0.057218,
0.015921,
0.066307,
0.056303,
0.060634,
0.062098,
0.062159,
0.065636,
0.074420,
0.097112,
0.017568,
0.013603,
0.049837,
0.067649,
-0.012993,
0.063440,
0.062891,
0.062830,
0.062647,
0.062769,
0.062708,
0.062769,
0.062708,
0.062647,
0.062769,
0.062708,
0.062769,
0.062769,
0.062769,
0.062769,
0.062769,
0.062769,
0.062830,
0.062769,
0.062769,
0.062769,
0.062769,
0.062830,
0.062830,
0.062769,
0.062769,
0.062769,
0.060695,
0.062403,
0.062708,
0.062830,
0.062586,
0.062952,
0.062769,
0.062891,
0.062769,
0.062830,
0.062891,
0.062830,
0.062830,
0.062830,
0.062769,
0.062830,
0.062769,
0.062830,
0.062830,
0.062830,
0.062830,
0.062830,
0.062769,
0.062830,
0.062830,
0.062830,
0.062830,
0.062830,
0.062830,
0.062830,
0.062830,
0.062830,
0.062891,
0.062830,
0.062830,
0.062830,
0.062830,
0.062830,
};

float32_t refOutput[480] = 
{
25.4175,
2.29123,
-1.53612,
0.699869,
0.724208,
0.479124,
-0.0670907,
0.732468,
-0.0493138,
0.391086,
-0.237971,
-0.526503,
-1.05805,
-0.40943,
0.263657,
-0.201776,
-0.0467951,
0.330591,
0.236332,
0.753771,
-0.590947,
1.07003,
-0.451894,
0.171823,
-0.280246,
-0.0375565,
-0.0990753,
-0.0533877,
-0.381523,
-0.572383,
0.665978,
0.0708475,
-0.164733,
0.904422,
-0.558574,
0.524266,
-0.632099,
-0.122347,
0.225451,
0.0227437,
-0.394344,
-0.00828511,
0.157722,
0.0711778,
-0.430084,
0.588752,
-0.1118,
0.588616,
-0.399351,
-0.164092,
-0.0256682,
0.151054,
-0.393876,
0.305822,
0.32564,
-0.0991577,
-0.474376,
0.502263,
-0.688301,
0.542822,
-0.305686,
-0.128886,
0.581537,
-0.53243,
0.319645,
-0.262626,
0.557234,
-0.485956,
0.28199,
-0.057582,
-0.300208,
0.531825,
-0.634756,
0.0653989,
0.436066,
-0.351106,
-0.0681766,
0.581838,
-0.606379,
0.361424,
-0.11651,
-0.129472,
0.484279,
-0.133963,
-0.374667,
0.406556,
-0.26949,
0.140382,
-0.389253,
0.524336,
-0.697495,
0.388814,
-0.186826,
0.0572127,
0.444198,
-0.0604934,
-0.359631,
0.252448,
-0.105583,
-0.198107,
0.628725,
-0.473576,
0.26749,
-0.129011,
-0.349516,
0.222589,
0.0318493,
0.222816,
-0.15599,
0.0752432,
-0.206533,
-0.137156,
0.0715554,
0.066526,
0.148581,
0.178611,
-0.368652,
0.176381,
-0.379824,
0.54964,
-0.397842,
0.389945,
0.198225,
-0.819809,
1.13165,
-1.67235,
1.48775,
-1.08454,
1.00189,
-0.776756,
0.838295,
-0.769483,
0.1839,
0.214162,
-0.865874,
1.6786,
-1.80695,
2.12973,
-2.62335,
2.65809,
-2.8859,
2.68831,
-1.97959,
1.82053,
-1.16524,
0.219879,
0.177758,
-1.1785,
2.06896,
-2.01841,
1.58946,
-0.0900746,
-1.72417,
2.29447,
-2.14209,
1.0384,
0.670378,
-1.29125,
0.855825,
0.112164,
-1.30137,
1.55462,
-0.779348,
-0.14085,
0.984339,
-0.941623,
0.161999,
0.366851,
-0.470009,
-0.0196934,
0.680275,
-0.882395,
0.566029,
0.190825,
-0.752967,
0.558108,
-0.0827542,
-0.448518,
0.740821,
-0.276682,
-0.184998,
0.523699,
-0.778207,
0.243805,
0.150634,
-0.0949535,
0.105976,
0.0665857,
-0.136251,
-0.172765,
0.47936,
-0.693846,
0.886793,
-0.645549,
0.410765,
-0.375824,
0.199422,
-0.0332039,
-0.139941,
0.144171,
-0.0313135,
-0.144969,
0.497868,
-0.607511,
0.443758,
-0.151947,
-0.276951,
0.366216,
-0.296721,
0.439538,
-0.390649,
0.419617,
-0.681745,
0.395101,
-0.0286042,
-0.244731,
0.849247,
-0.711416,
0.284957,
-0.141037,
-0.372799,
0.522732,
-0.288314,
0.424982,
-0.357765,
0.270499,
-0.599914,
0.527237,
-0.391535,
0.496182,
-0.364279,
0.509565,
-0.605008,
0.194038,
0.134807,
-0.574707,
0.860014,
-0.537691,
0.112941,
0.396538,
-0.722057,
0.396538,
0.112941,
-0.537691,
0.860014,
-0.574707,
0.134807,
0.194038,
-0.605008,
0.509565,
-0.364279,
0.496182,
-0.391535,
0.527237,
-0.599914,
0.270499,
-0.357765,
0.424982,
-0.288314,
0.522732,
-0.372799,
-0.141037,
0.284957,
-0.711416,
0.849247,
-0.244731,
-0.0286042,
0.395101,
-0.681745,
0.419617,
-0.390649,
0.439538,
-0.296721,
0.366216,
-0.276951,
-0.151947,
0.443758,
-0.607511,
0.497868,
-0.144969,
-0.0313135,
0.144171,
-0.139941,
-0.0332039,
0.199422,
-0.375824,
0.410765,
-0.645549,
0.886793,
-0.693846,
0.47936,
-0.172765,
-0.136251,
0.0665857,
0.105976,
-0.0949535,
0.150634,
0.243805,
-0.778207,
0.523699,
-0.184998,
-0.276682,
0.740821,
-0.448518,
-0.0827542,
0.558108,
-0.752967,
0.190825,
0.566029,
-0.882395,
0.680275,
-0.0196934,
-0.470009,
0.366851,
0.161999,
-0.941623,
0.984339,
-0.14085,
-0.779348,
1.55462,
-1.30137,
0.112164,
0.855825,
-1.29125,
0.670378,
1.0384,
-2.14209,
2.29447,
-1.72417,
-0.0900746,
1.58946,
-2.01841,
2.06896,
-1.1785,
0.177758,
0.219879,
-1.16524,
1.82053,
-1.97959,
2.68831,
-2.8859,
2.65809,
-2.62335,
2.12973,
-1.80695,
1.6786,
-0.865874,
0.214162,
0.1839,
-0.769483,
0.838295,
-0.776756,
1.00189,
-1.08454,
1.48775,
-1.67235,
1.13165,
-0.819809,
0.198225,
0.389945,
-0.397842,
0.54964,
-0.379824,
0.176381,
-0.368652,
0.178611,
0.148581,
0.066526,
0.0715554,
-0.137156,
-0.206533,
0.0752432,
-0.15599,
0.222816,
0.0318493,
0.222589,
-0.349516,
-0.129011,
0.26749,
-0.473576,
0.628725,
-0.198107,
-0.105583,
0.252448,
-0.359631,
-0.0604934,
0.444198,
0.0572127,
-0.186826,
0.388814,
-0.697495,
0.524336,
-0.389253,
0.140382,
-0.26949,
0.406556,
-0.374667,
-0.133963,
0.484279,
-0.129472,
-0.11651,
0.361424,
-0.606379,
0.581838,
-0.0681766,
-0.351106,
0.436066,
0.0653989,
-0.634756,
0.531825,
-0.300208,
-0.057582,
0.28199,
-0.485956,
0.557234,
-0.262626,
0.319645,
-0.53243,
0.581537,
-0.128886,
-0.305686,
0.542822,
-0.688301,
0.502263,
-0.474376,
-0.0991577,
0.32564,
0.305822,
-0.393876,
0.151054,
-0.0256682,
-0.164092,
-0.399351,
0.588616,
-0.1118,
0.588752,
-0.430084,
0.0711778,
0.157722,
-0.00828511,
-0.394344,
0.0227437,
0.225451,
-0.122347,
-0.632099,
0.524266,
-0.558574,
0.904422,
-0.164733,
0.0708475,
0.665978,
-0.572383,
-0.381523,
-0.0533877,
-0.0990753,
-0.0375565,
-0.280246,
0.171823,
-0.451894,
1.07003,
-0.590947,
0.753771,
0.236332,
0.330591,
-0.0467951,
-0.201776,
0.263657,
-0.40943,
-1.05805,
-0.526503,
-0.237971,
0.391086,
-0.0493138,
0.732468,
-0.0670907,
0.479124,
0.724208,
0.699869,
-1.53612,
2.29123,
};


/*
float32_t testInput_f32_1kHz_15kHz[320] =
{
+0.0000000000f, +0.5924659585f, -0.0947343455f, +0.1913417162f, +1.0000000000f, +0.4174197128f, +0.3535533906f, +1.2552931065f, 
+0.8660254038f, +0.4619397663f, +1.3194792169f, +1.1827865776f, +0.5000000000f, +1.1827865776f, +1.3194792169f, +0.4619397663f, 
+0.8660254038f, +1.2552931065f, +0.3535533906f, +0.4174197128f, +1.0000000000f, +0.1913417162f, -0.0947343455f, +0.5924659585f, 
-0.0000000000f, -0.5924659585f, +0.0947343455f, -0.1913417162f, -1.0000000000f, -0.4174197128f, -0.3535533906f, -1.2552931065f, 
-0.8660254038f, -0.4619397663f, -1.3194792169f, -1.1827865776f, -0.5000000000f, -1.1827865776f, -1.3194792169f, -0.4619397663f, 
-0.8660254038f, -1.2552931065f, -0.3535533906f, -0.4174197128f, -1.0000000000f, -0.1913417162f, +0.0947343455f, -0.5924659585f, 
+0.0000000000f, +0.5924659585f, -0.0947343455f, +0.1913417162f, +1.0000000000f, +0.4174197128f, +0.3535533906f, +1.2552931065f, 
+0.8660254038f, +0.4619397663f, +1.3194792169f, +1.1827865776f, +0.5000000000f, +1.1827865776f, +1.3194792169f, +0.4619397663f, 
+0.8660254038f, +1.2552931065f, +0.3535533906f, +0.4174197128f, +1.0000000000f, +0.1913417162f, -0.0947343455f, +0.5924659585f, 
+0.0000000000f, -0.5924659585f, +0.0947343455f, -0.1913417162f, -1.0000000000f, -0.4174197128f, -0.3535533906f, -1.2552931065f, 
-0.8660254038f, -0.4619397663f, -1.3194792169f, -1.1827865776f, -0.5000000000f, -1.1827865776f, -1.3194792169f, -0.4619397663f, 
-0.8660254038f, -1.2552931065f, -0.3535533906f, -0.4174197128f, -1.0000000000f, -0.1913417162f, +0.0947343455f, -0.5924659585f, 
+0.0000000000f, +0.5924659585f, -0.0947343455f, +0.1913417162f, +1.0000000000f, +0.4174197128f, +0.3535533906f, +1.2552931065f, 
+0.8660254038f, +0.4619397663f, +1.3194792169f, +1.1827865776f, +0.5000000000f, +1.1827865776f, +1.3194792169f, +0.4619397663f, 
+0.8660254038f, +1.2552931065f, +0.3535533906f, +0.4174197128f, +1.0000000000f, +0.1913417162f, -0.0947343455f, +0.5924659585f, 
+0.0000000000f, -0.5924659585f, +0.0947343455f, -0.1913417162f, -1.0000000000f, -0.4174197128f, -0.3535533906f, -1.2552931065f, 
-0.8660254038f, -0.4619397663f, -1.3194792169f, -1.1827865776f, -0.5000000000f, -1.1827865776f, -1.3194792169f, -0.4619397663f, 
-0.8660254038f, -1.2552931065f, -0.3535533906f, -0.4174197128f, -1.0000000000f, -0.1913417162f, +0.0947343455f, -0.5924659585f, 
-0.0000000000f, +0.5924659585f, -0.0947343455f, +0.1913417162f, +1.0000000000f, +0.4174197128f, +0.3535533906f, +1.2552931065f, 
+0.8660254038f, +0.4619397663f, +1.3194792169f, +1.1827865776f, +0.5000000000f, +1.1827865776f, +1.3194792169f, +0.4619397663f, 
+0.8660254038f, +1.2552931065f, +0.3535533906f, +0.4174197128f, +1.0000000000f, +0.1913417162f, -0.0947343455f, +0.5924659585f, 
-0.0000000000f, -0.5924659585f, +0.0947343455f, -0.1913417162f, -1.0000000000f, -0.4174197128f, -0.3535533906f, -1.2552931065f, 
-0.8660254038f, -0.4619397663f, -1.3194792169f, -1.1827865776f, -0.5000000000f, -1.1827865776f, -1.3194792169f, -0.4619397663f, 
-0.8660254038f, -1.2552931065f, -0.3535533906f, -0.4174197128f, -1.0000000000f, -0.1913417162f, +0.0947343455f, -0.5924659585f, 
+0.0000000000f, +0.5924659585f, -0.0947343455f, +0.1913417162f, +1.0000000000f, +0.4174197128f, +0.3535533906f, +1.2552931065f, 
+0.8660254038f, +0.4619397663f, +1.3194792169f, +1.1827865776f, +0.5000000000f, +1.1827865776f, +1.3194792169f, +0.4619397663f, 
+0.8660254038f, +1.2552931065f, +0.3535533906f, +0.4174197128f, +1.0000000000f, +0.1913417162f, -0.0947343455f, +0.5924659585f, 
+0.0000000000f, -0.5924659585f, +0.0947343455f, -0.1913417162f, -1.0000000000f, -0.4174197128f, -0.3535533906f, -1.2552931065f, 
-0.8660254038f, -0.4619397663f, -1.3194792169f, -1.1827865776f, -0.5000000000f, -1.1827865776f, -1.3194792169f, -0.4619397663f, 
-0.8660254038f, -1.2552931065f, -0.3535533906f, -0.4174197128f, -1.0000000000f, -0.1913417162f, +0.0947343455f, -0.5924659585f, 
-0.0000000000f, +0.5924659585f, -0.0947343455f, +0.1913417162f, +1.0000000000f, +0.4174197128f, +0.3535533906f, +1.2552931065f, 
+0.8660254038f, +0.4619397663f, +1.3194792169f, +1.1827865776f, +0.5000000000f, +1.1827865776f, +1.3194792169f, +0.4619397663f, 
+0.8660254038f, +1.2552931065f, +0.3535533906f, +0.4174197128f, +1.0000000000f, +0.1913417162f, -0.0947343455f, +0.5924659585f, 
+0.0000000000f, -0.5924659585f, +0.0947343455f, -0.1913417162f, -1.0000000000f, -0.4174197128f, -0.3535533906f, -1.2552931065f, 
-0.8660254038f, -0.4619397663f, -1.3194792169f, -1.1827865776f, -0.5000000000f, -1.1827865776f, -1.3194792169f, -0.4619397663f, 
-0.8660254038f, -1.2552931065f, -0.3535533906f, -0.4174197128f, -1.0000000000f, -0.1913417162f, +0.0947343455f, -0.5924659585f, 
-0.0000000000f, +0.5924659585f, -0.0947343455f, +0.1913417162f, +1.0000000000f, +0.4174197128f, +0.3535533906f, +1.2552931065f, 
+0.8660254038f, +0.4619397663f, +1.3194792169f, +1.1827865776f, +0.5000000000f, +1.1827865776f, +1.3194792169f, +0.4619397663f, 
+0.8660254038f, +1.2552931065f, +0.3535533906f, +0.4174197128f, +1.0000000000f, +0.1913417162f, -0.0947343455f, +0.5924659585f, 
+0.0000000000f, -0.5924659585f, +0.0947343455f, -0.1913417162f, -1.0000000000f, -0.4174197128f, -0.3535533906f, -1.2552931065f, 
};

float32_t refOutput[320] = 
{
+0.0000000000f, -0.0010797829f, -0.0007681386f, -0.0001982932f, +0.0000644313f, +0.0020854271f, +0.0036891871f, +0.0015855941f, 
-0.0026280805f, -0.0075907658f, -0.0119390538f, -0.0086665968f, +0.0088981202f, +0.0430539279f, +0.0974468742f, +0.1740405600f, 
+0.2681416601f, +0.3747720089f, +0.4893362230f, +0.6024154672f, +0.7058740791f, +0.7968348987f, +0.8715901940f, +0.9277881093f, 
+0.9682182661f, +0.9934674267f, +1.0012052245f, +0.9925859371f, +0.9681538347f, +0.9257026822f, +0.8679010068f, +0.7952493046f, 
+0.7085021596f, +0.6100062330f, +0.5012752767f, +0.3834386057f, +0.2592435399f, +0.1309866321f, -0.0000000000f, -0.1309866321f, 
-0.2592435399f, -0.3834386057f, -0.5012752767f, -0.6100062330f, -0.7085021596f, -0.7952493046f, -0.8679010068f, -0.9257026822f, 
-0.9681538347f, -0.9936657199f, -1.0019733630f, -0.9936657199f, -0.9681538347f, -0.9257026822f, -0.8679010068f, -0.7952493046f, 
-0.7085021596f, -0.6100062330f, -0.5012752767f, -0.3834386057f, -0.2592435399f, -0.1309866321f, +0.0000000000f, +0.1309866321f, 
+0.2592435399f, +0.3834386057f, +0.5012752767f, +0.6100062330f, +0.7085021596f, +0.7952493046f, +0.8679010068f, +0.9257026822f, 
+0.9681538347f, +0.9936657199f, +1.0019733630f, +0.9936657199f, +0.9681538347f, +0.9257026822f, +0.8679010068f, +0.7952493046f, 
+0.7085021596f, +0.6100062330f, +0.5012752767f, +0.3834386057f, +0.2592435399f, +0.1309866321f, -0.0000000000f, -0.1309866321f, 
-0.2592435399f, -0.3834386057f, -0.5012752767f, -0.6100062330f, -0.7085021596f, -0.7952493046f, -0.8679010068f, -0.9257026822f, 
-0.9681538347f, -0.9936657199f, -1.0019733630f, -0.9936657199f, -0.9681538347f, -0.9257026822f, -0.8679010068f, -0.7952493046f, 
-0.7085021596f, -0.6100062330f, -0.5012752767f, -0.3834386057f, -0.2592435399f, -0.1309866321f, +0.0000000000f, +0.1309866321f, 
+0.2592435399f, +0.3834386057f, +0.5012752767f, +0.6100062330f, +0.7085021596f, +0.7952493046f, +0.8679010068f, +0.9257026822f, 
+0.9681538347f, +0.9936657199f, +1.0019733630f, +0.9936657199f, +0.9681538347f, +0.9257026822f, +0.8679010068f, +0.7952493046f, 
+0.7085021596f, +0.6100062330f, +0.5012752767f, +0.3834386057f, +0.2592435399f, +0.1309866321f, -0.0000000000f, -0.1309866321f, 
-0.2592435399f, -0.3834386057f, -0.5012752767f, -0.6100062330f, -0.7085021596f, -0.7952493046f, -0.8679010068f, -0.9257026822f, 
-0.9681538347f, -0.9936657199f, -1.0019733630f, -0.9936657199f, -0.9681538347f, -0.9257026822f, -0.8679010068f, -0.7952493046f, 
-0.7085021596f, -0.6100062330f, -0.5012752767f, -0.3834386057f, -0.2592435399f, -0.1309866321f, +0.0000000000f, +0.1309866321f, 
+0.2592435399f, +0.3834386057f, +0.5012752767f, +0.6100062330f, +0.7085021596f, +0.7952493046f, +0.8679010068f, +0.9257026822f, 
+0.9681538347f, +0.9936657199f, +1.0019733630f, +0.9936657199f, +0.9681538347f, +0.9257026822f, +0.8679010068f, +0.7952493046f, 
+0.7085021596f, +0.6100062330f, +0.5012752767f, +0.3834386057f, +0.2592435399f, +0.1309866321f, +0.0000000000f, -0.1309866321f, 
-0.2592435399f, -0.3834386057f, -0.5012752767f, -0.6100062330f, -0.7085021596f, -0.7952493046f, -0.8679010068f, -0.9257026822f, 
-0.9681538347f, -0.9936657199f, -1.0019733630f, -0.9936657199f, -0.9681538347f, -0.9257026822f, -0.8679010068f, -0.7952493046f, 
-0.7085021596f, -0.6100062330f, -0.5012752767f, -0.3834386057f, -0.2592435399f, -0.1309866321f, +0.0000000000f, +0.1309866321f, 
+0.2592435399f, +0.3834386057f, +0.5012752767f, +0.6100062330f, +0.7085021596f, +0.7952493046f, +0.8679010068f, +0.9257026822f, 
+0.9681538347f, +0.9936657199f, +1.0019733630f, +0.9936657199f, +0.9681538347f, +0.9257026822f, +0.8679010068f, +0.7952493046f, 
+0.7085021596f, +0.6100062330f, +0.5012752767f, +0.3834386057f, +0.2592435399f, +0.1309866321f, +0.0000000000f, -0.1309866321f, 
-0.2592435399f, -0.3834386057f, -0.5012752767f, -0.6100062330f, -0.7085021596f, -0.7952493046f, -0.8679010068f, -0.9257026822f, 
-0.9681538347f, -0.9936657199f, -1.0019733630f, -0.9936657199f, -0.9681538347f, -0.9257026822f, -0.8679010068f, -0.7952493046f, 
-0.7085021596f, -0.6100062330f, -0.5012752767f, -0.3834386057f, -0.2592435399f, -0.1309866321f, -0.0000000000f, +0.1309866321f, 
+0.2592435399f, +0.3834386057f, +0.5012752767f, +0.6100062330f, +0.7085021596f, +0.7952493046f, +0.8679010068f, +0.9257026822f, 
+0.9681538347f, +0.9936657199f, +1.0019733630f, +0.9936657199f, +0.9681538347f, +0.9257026822f, +0.8679010068f, +0.7952493046f, 
+0.7085021596f, +0.6100062330f, +0.5012752767f, +0.3834386057f, +0.2592435399f, +0.1309866321f, +0.0000000000f, -0.1309866321f, 
-0.2592435399f, -0.3834386057f, -0.5012752767f, -0.6100062330f, -0.7085021596f, -0.7952493046f, -0.8679010068f, -0.9257026822f, 
-0.9681538347f, -0.9936657199f, -1.0019733630f, -0.9936657199f, -0.9681538347f, -0.9257026822f, -0.8679010068f, -0.7952493046f, 
-0.7085021596f, -0.6100062330f, -0.5012752767f, -0.3834386057f, -0.2592435399f, -0.1309866321f, +0.0000000000f, +0.1309866321f, 
+0.2592435399f, +0.3834386057f, +0.5012752767f, +0.6100062330f, +0.7085021596f, +0.7952493046f, +0.8679010068f, +0.9257026822f, 
+0.9681538347f, +0.9936657199f, +1.0019733630f, +0.9936657199f, +0.9681538347f, +0.9257026822f, +0.8679010068f, +0.7952493046f 
};
*/

