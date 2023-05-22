/* ------------------------------------------------------------
name: "square-diode"
Code generated with Faust 2.59.6 (https://faust.grame.fr)
Compilation options: -lang c -light -ct 1 -es 1 -mcd 16 -single -ftz 0
------------------------------------------------------------ */

#ifndef  __mydsp_H__
#define  __mydsp_H__

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 


#ifdef __cplusplus
extern "C" {
#endif

#if defined(_WIN32)
#define RESTRICT __restrict
#else
#define RESTRICT __restrict__
#endif

#include <math.h>
#include <stdint.h>
#include <stdlib.h>

static float mydsp_faustpower2_f(float value) {
	return value * value;
}
static float mydsp_faustpower3_f(float value) {
	return value * value * value;
}
static float mydsp_faustpower4_f(float value) {
	return value * value * value * value;
}

#ifndef FAUSTCLASS 
#define FAUSTCLASS mydsp
#endif

#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

#define max(a,b) ((a < b) ? b : a)
#define min(a,b) ((a < b) ? a : b)


typedef struct {
	int iVec0[2];
	int fSampleRate;
	float fConst1;
	float fConst2;
	FAUSTFLOAT fHslider0;
	float fConst3;
	float fRec5[2];
	FAUSTFLOAT fEntry0;
	FAUSTFLOAT fButton0;
	float fVec1[3];
	float fRec6[2];
	float fConst4;
	float fConst5;
	float fConst6;
	float fRec7[2];
	float fVec2[2];
	int IOTA0;
	float fVec3[4096];
	float fRec0[2];
	float fRec1[2];
	float fRec3[2];
	float fRec4[2];
} mydsp;

int getSampleRatemydsp(mydsp* RESTRICT dsp) {
	return dsp->fSampleRate;
}

int getNumInputsmydsp(mydsp* RESTRICT dsp) {
	return 0;
}
int getNumOutputsmydsp(mydsp* RESTRICT dsp) {
	return 1;
}

void classInitmydsp(int sample_rate) {
}

void instanceResetUserInterfacemydsp(mydsp* dsp) {
	dsp->fHslider0 = (FAUSTFLOAT)(0.5f);
	dsp->fEntry0 = (FAUSTFLOAT)(2e+02f);
	dsp->fButton0 = (FAUSTFLOAT)(0.0f);
}

void instanceClearmydsp(mydsp* dsp) {
	/* C99 loop */
	{
		int l0;
		for (l0 = 0; l0 < 2; l0 = l0 + 1) {
			dsp->iVec0[l0] = 0;
		}
	}
	/* C99 loop */
	{
		int l1;
		for (l1 = 0; l1 < 2; l1 = l1 + 1) {
			dsp->fRec5[l1] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l2;
		for (l2 = 0; l2 < 3; l2 = l2 + 1) {
			dsp->fVec1[l2] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l3;
		for (l3 = 0; l3 < 2; l3 = l3 + 1) {
			dsp->fRec6[l3] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l4;
		for (l4 = 0; l4 < 2; l4 = l4 + 1) {
			dsp->fRec7[l4] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l5;
		for (l5 = 0; l5 < 2; l5 = l5 + 1) {
			dsp->fVec2[l5] = 0.0f;
		}
	}
	dsp->IOTA0 = 0;
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; l6 < 4096; l6 = l6 + 1) {
			dsp->fVec3[l6] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; l7 < 2; l7 = l7 + 1) {
			dsp->fRec0[l7] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l8;
		for (l8 = 0; l8 < 2; l8 = l8 + 1) {
			dsp->fRec1[l8] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l9;
		for (l9 = 0; l9 < 2; l9 = l9 + 1) {
			dsp->fRec3[l9] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l10;
		for (l10 = 0; l10 < 2; l10 = l10 + 1) {
			dsp->fRec4[l10] = 0.0f;
		}
	}
}

void instanceConstantsmydsp(mydsp* dsp, int sample_rate) {
	dsp->fSampleRate = sample_rate;
	float fConst0 = fminf(1.92e+05f, fmaxf(1.0f, (float)(dsp->fSampleRate)));
	dsp->fConst1 = 6.2831855f / fConst0;
	dsp->fConst2 = 44.1f / fConst0;
	dsp->fConst3 = 1.0f - dsp->fConst2;
	dsp->fConst4 = 0.25f * fConst0;
	dsp->fConst5 = 0.5f * fConst0;
	dsp->fConst6 = 1.0f / fConst0;
}

void instanceInitmydsp(mydsp* dsp, int sample_rate) {
	instanceConstantsmydsp(dsp, sample_rate);
	instanceResetUserInterfacemydsp(dsp);
	instanceClearmydsp(dsp);
}

void initmydsp(mydsp* dsp, int sample_rate) {
	classInitmydsp(sample_rate);
	instanceInitmydsp(dsp, sample_rate);
}

void computemydsp(mydsp* dsp, int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
	FAUSTFLOAT* output0 = outputs[0];
	float fSlow0 = dsp->fConst2 * (float)(dsp->fHslider0);
	float fSlow1 = (float)(dsp->fEntry0);
	float fSlow2 = (float)(dsp->fButton0);
	int iSlow3 = fSlow2 == 0.0f;
	float fSlow4 = 1e+02f * fSlow2;
	/* C99 loop */
	{
		int i0;
		for (i0 = 0; i0 < count; i0 = i0 + 1) {
			dsp->iVec0[0] = 1;
			dsp->fRec5[0] = fSlow0 + dsp->fConst3 * dsp->fRec5[1];
			dsp->fVec1[0] = fSlow2;
			float fTemp0 = (float)((fSlow2 == dsp->fVec1[2]) | iSlow3);
			dsp->fRec6[0] = fSlow1 * (1.0f - 0.999f * fTemp0) + 0.999f * fTemp0 * dsp->fRec6[1];
			float fTemp1 = dsp->fRec5[0] + 0.0002f * dsp->fRec6[0];
			float fTemp2 = tanf(dsp->fConst1 * powf(1e+01f, 3.0f * fTemp1 + 1.0f));
			float fTemp3 = fmaxf(dsp->fRec6[0], 23.44895f);
			float fTemp4 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst5 / fTemp3));
			float fTemp5 = floorf(fTemp4);
			float fTemp6 = fmaxf(2e+01f, fabsf(fTemp3));
			float fTemp7 = ((1 - dsp->iVec0[1]) ? 0.0f : dsp->fRec7[1] + dsp->fConst6 * fTemp6);
			dsp->fRec7[0] = fTemp7 - floorf(fTemp7);
			float fTemp8 = mydsp_faustpower2_f(2.0f * dsp->fRec7[0] + -1.0f);
			dsp->fVec2[0] = fTemp8;
			float fTemp9 = (float)(dsp->iVec0[1]) * (fTemp8 - dsp->fVec2[1]) / fTemp6;
			dsp->fVec3[dsp->IOTA0 & 4095] = fTemp9;
			int iTemp10 = (int)(fTemp4);
			float fTemp11 = fmaxf(-1.0f, fminf(1.0f, fSlow4 * (0.0f - dsp->fConst4 * ((fTemp4 - fTemp5) * dsp->fVec3[(dsp->IOTA0 - (iTemp10 + 1)) & 4095] - (fTemp9 - dsp->fVec3[(dsp->IOTA0 - iTemp10) & 4095] * (fTemp5 + (1.0f - fTemp4)))))));
			float fTemp12 = 17.0f - 9.7f * powf(fTemp1, 1e+01f);
			float fTemp13 = fTemp2 + 1.0f;
			float fTemp14 = 0.5f * (dsp->fRec3[1] * fTemp2 / fTemp13) + dsp->fRec4[1];
			float fTemp15 = fTemp2 * (1.0f - 0.25f * (fTemp2 / fTemp13)) + 1.0f;
			float fTemp16 = fTemp2 * fTemp14 / fTemp15;
			float fTemp17 = 0.5f * fTemp16;
			float fTemp18 = fTemp17 + dsp->fRec0[1];
			float fTemp19 = fTemp2 * (1.0f - 0.25f * (fTemp2 / fTemp15)) + 1.0f;
			float fTemp20 = fTemp2 * fTemp18 / fTemp19;
			float fTemp21 = fTemp20 + dsp->fRec1[1];
			float fTemp22 = fTemp15 * fTemp19;
			float fTemp23 = fTemp2 * (1.0f - 0.5f * (fTemp2 / fTemp19)) + 1.0f;
			float fTemp24 = mydsp_faustpower2_f(fTemp2);
			float fTemp25 = fTemp13 * fTemp15;
			float fTemp26 = fTemp2 * ((1.5f * fTemp11 * (1.0f - 0.33333334f * mydsp_faustpower2_f(fTemp11)) + fTemp12 * (0.0f - (0.38253817f * dsp->fRec3[1] + 0.19126908f * fTemp16) - 0.19126908f * fTemp20 - 0.04781727f * (mydsp_faustpower3_f(fTemp2) * fTemp21 / (fTemp22 * fTemp23))) / fTemp13) * (0.5f * (fTemp24 / (fTemp19 * fTemp23)) + 1.0f) / (0.04781727f * (mydsp_faustpower4_f(fTemp2) * fTemp12 / (fTemp25 * fTemp19 * fTemp23)) + 1.0f) + (fTemp18 + 0.5f * (fTemp2 * fTemp21 / fTemp23)) / fTemp19 - dsp->fRec1[1]) / fTemp13;
			float fTemp27 = fTemp2 * (0.5f * ((dsp->fRec1[1] + fTemp26) * (0.25f * (fTemp24 / fTemp22) + 1.0f) + (fTemp14 + 0.5f * fTemp20) / fTemp15) - dsp->fRec0[1]) / fTemp13;
			dsp->fRec0[0] = dsp->fRec0[1] + 2.0f * fTemp27;
			dsp->fRec1[0] = dsp->fRec1[1] + 2.0f * fTemp26;
			float fTemp28 = fTemp2 * (0.5f * ((dsp->fRec0[1] + fTemp27) * (0.25f * (fTemp24 / fTemp25) + 1.0f) + (dsp->fRec3[1] + fTemp17) / fTemp13) - dsp->fRec4[1]) / fTemp13;
			float fTemp29 = fTemp2 * (0.5f * (dsp->fRec4[1] + fTemp28) - dsp->fRec3[1]) / fTemp13;
			float fRec2 = dsp->fRec3[1] + fTemp29;
			dsp->fRec3[0] = dsp->fRec3[1] + 2.0f * fTemp29;
			dsp->fRec4[0] = dsp->fRec4[1] + 2.0f * fTemp28;
			output0[i0] = (FAUSTFLOAT)(fRec2);
			dsp->iVec0[1] = dsp->iVec0[0];
			dsp->fRec5[1] = dsp->fRec5[0];
			dsp->fVec1[2] = dsp->fVec1[1];
			dsp->fVec1[1] = dsp->fVec1[0];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->fRec7[1] = dsp->fRec7[0];
			dsp->fVec2[1] = dsp->fVec2[0];
			dsp->IOTA0 = dsp->IOTA0 + 1;
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->fRec3[1] = dsp->fRec3[0];
			dsp->fRec4[1] = dsp->fRec4[0];
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
