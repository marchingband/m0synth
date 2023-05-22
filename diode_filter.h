/* ------------------------------------------------------------
name: "diode_filter"
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
	FAUSTFLOAT fHslider1;
	float fRec7[2];
	float fConst4;
	int iRec8[2];
	float fConst5;
	FAUSTFLOAT fEntry1;
	FAUSTFLOAT fButton1;
	float fVec2[3];
	float fRec9[2];
	float fConst6;
	FAUSTFLOAT fEntry2;
	float fRec11[2];
	float fRec10[2];
	float fVec3[2];
	int IOTA0;
	float fVec4[4096];
	float fConst7;
	FAUSTFLOAT fHslider2;
	float fRec1[2];
	float fRec2[2];
	float fRec3[2];
	float fRec4[2];
	float fConst8;
	float fRec12[2];
	float fConst9;
	int iRec13[2];
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
	dsp->fHslider1 = (FAUSTFLOAT)(0.0f);
	dsp->fEntry1 = (FAUSTFLOAT)(1.0f);
	dsp->fButton1 = (FAUSTFLOAT)(0.0f);
	dsp->fEntry2 = (FAUSTFLOAT)(2e+02f);
	dsp->fHslider2 = (FAUSTFLOAT)(1.0f);
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
			dsp->iRec8[l5] = 0;
		}
	}
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; l6 < 3; l6 = l6 + 1) {
			dsp->fVec2[l6] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; l7 < 2; l7 = l7 + 1) {
			dsp->fRec9[l7] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l8;
		for (l8 = 0; l8 < 2; l8 = l8 + 1) {
			dsp->fRec11[l8] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l9;
		for (l9 = 0; l9 < 2; l9 = l9 + 1) {
			dsp->fRec10[l9] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l10;
		for (l10 = 0; l10 < 2; l10 = l10 + 1) {
			dsp->fVec3[l10] = 0.0f;
		}
	}
	dsp->IOTA0 = 0;
	/* C99 loop */
	{
		int l11;
		for (l11 = 0; l11 < 4096; l11 = l11 + 1) {
			dsp->fVec4[l11] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l12;
		for (l12 = 0; l12 < 2; l12 = l12 + 1) {
			dsp->fRec1[l12] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l13;
		for (l13 = 0; l13 < 2; l13 = l13 + 1) {
			dsp->fRec2[l13] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l14;
		for (l14 = 0; l14 < 2; l14 = l14 + 1) {
			dsp->fRec3[l14] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; l15 < 2; l15 = l15 + 1) {
			dsp->fRec4[l15] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l16;
		for (l16 = 0; l16 < 2; l16 = l16 + 1) {
			dsp->fRec12[l16] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l17;
		for (l17 = 0; l17 < 2; l17 = l17 + 1) {
			dsp->iRec13[l17] = 0;
		}
	}
}

void instanceConstantsmydsp(mydsp* dsp, int sample_rate) {
	dsp->fSampleRate = sample_rate;
	float fConst0 = fminf(1.92e+05f, fmaxf(1.0f, (float)(dsp->fSampleRate)));
	dsp->fConst1 = 6.2831855f / fConst0;
	dsp->fConst2 = 44.1f / fConst0;
	dsp->fConst3 = 1.0f - dsp->fConst2;
	dsp->fConst4 = 1.0f / fmaxf(1.0f, 0.7f * fConst0);
	dsp->fConst5 = 5e+01f * fConst0;
	dsp->fConst6 = 1.0f / fConst0;
	dsp->fConst7 = 0.5f * fConst0;
	dsp->fConst8 = 1.0f / fmaxf(1.0f, 0.25f * fConst0);
	dsp->fConst9 = 1.0f / fmaxf(1.0f, 2.0f * fConst0);
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
	float fSlow4 = dsp->fConst2 * (float)(dsp->fHslider1);
	float fSlow5 = (float)(dsp->fEntry1);
	float fSlow6 = (float)(dsp->fButton1);
	int iSlow7 = fSlow6 == 0.0f;
	float fSlow8 = (float)(dsp->fEntry2);
	float fSlow9 = (float)(dsp->fHslider2) + -0.707f;
	float fSlow10 = 0.0051455153f * fSlow9;
	/* C99 loop */
	{
		int i0;
		for (i0 = 0; i0 < count; i0 = i0 + 1) {
			dsp->iVec0[0] = 1;
			dsp->fRec5[0] = fSlow0 + dsp->fConst3 * dsp->fRec5[1];
			dsp->fVec1[0] = fSlow2;
			float fTemp0 = (float)((fSlow2 == dsp->fVec1[2]) | iSlow3);
			dsp->fRec6[0] = fSlow1 * (1.0f - 0.999f * fTemp0) + 0.999f * fTemp0 * dsp->fRec6[1];
			dsp->fRec7[0] = fSlow4 + dsp->fConst3 * dsp->fRec7[1];
			dsp->iRec8[0] = (fSlow2 > dsp->fVec1[1]) + (fSlow2 <= dsp->fVec1[1]) * (dsp->iRec8[1] + (dsp->iRec8[1] > 0));
			float fTemp1 = dsp->fConst4 * (float)(dsp->iRec8[0]);
			float fTemp2 = dsp->fRec5[0] + 0.0002f * dsp->fRec6[0] + dsp->fRec7[0] * fmaxf(0.0f, fminf(fTemp1, 2.0f - fTemp1));
			float fTemp3 = tanf(dsp->fConst1 * powf(1e+01f, 3.0f * fTemp2 + 1.0f));
			dsp->fVec2[0] = fSlow6;
			float fTemp4 = (float)((fSlow6 == dsp->fVec2[2]) | iSlow7);
			float fTemp5 = 1.0f - 0.999f * fTemp4;
			dsp->fRec9[0] = fSlow5 * fTemp5 + 0.999f * fTemp4 * dsp->fRec9[1];
			dsp->fRec11[0] = fSlow8 * fTemp5 + 0.999f * fTemp4 * dsp->fRec11[1];
			float fTemp6 = fmaxf(dsp->fRec11[0], 23.44895f);
			float fTemp7 = fmaxf(2e+01f, fabsf(fTemp6));
			float fTemp8 = ((1 - dsp->iVec0[1]) ? 0.0f : dsp->fRec10[1] + dsp->fConst6 * fTemp7);
			dsp->fRec10[0] = fTemp8 - floorf(fTemp8);
			float fTemp9 = mydsp_faustpower2_f(2.0f * dsp->fRec10[0] + -1.0f);
			dsp->fVec3[0] = fTemp9;
			float fTemp10 = (float)(dsp->iVec0[1]) * (fTemp9 - dsp->fVec3[1]) / fTemp7;
			dsp->fVec4[dsp->IOTA0 & 4095] = fTemp10;
			float fTemp11 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst7 / fTemp6));
			int iTemp12 = (int)(fTemp11);
			float fTemp13 = floorf(fTemp11);
			float fTemp14 = fmaxf(-1.0f, fminf(1.0f, dsp->fConst5 * dsp->fRec9[0] * (fTemp10 - dsp->fVec4[(dsp->IOTA0 - iTemp12) & 4095] * (fTemp13 + (1.0f - fTemp11)) - (fTemp11 - fTemp13) * dsp->fVec4[(dsp->IOTA0 - (iTemp12 + 1)) & 4095])));
			float fTemp15 = 17.0f - 9.7f * powf(fTemp2, 1e+01f);
			float fTemp16 = fTemp3 + 1.0f;
			float fTemp17 = 0.5f * (dsp->fRec3[1] * fTemp3 / fTemp16) + dsp->fRec4[1];
			float fTemp18 = fTemp3 * (1.0f - 0.25f * (fTemp3 / fTemp16)) + 1.0f;
			float fTemp19 = fTemp3 * fTemp17 / fTemp18;
			float fTemp20 = 0.5f * fTemp19;
			float fTemp21 = fTemp20 + dsp->fRec1[1];
			float fTemp22 = fTemp3 * (1.0f - 0.25f * (fTemp3 / fTemp18)) + 1.0f;
			float fTemp23 = fTemp3 * fTemp21 / fTemp22;
			float fTemp24 = fTemp23 + dsp->fRec2[1];
			float fTemp25 = fTemp18 * fTemp22;
			float fTemp26 = fTemp3 * (1.0f - 0.5f * (fTemp3 / fTemp22)) + 1.0f;
			float fTemp27 = mydsp_faustpower2_f(fTemp3);
			float fTemp28 = fTemp16 * fTemp18;
			float fTemp29 = fTemp3 * ((1.5f * fTemp14 * (1.0f - 0.33333334f * mydsp_faustpower2_f(fTemp14)) + fSlow9 * (fTemp15 * (0.0f - (0.041164123f * dsp->fRec3[1] + 0.020582061f * fTemp19) - 0.020582061f * fTemp23 - 0.0051455153f * (mydsp_faustpower3_f(fTemp3) * fTemp24 / (fTemp25 * fTemp26))) / fTemp16)) * (0.5f * (fTemp27 / (fTemp22 * fTemp26)) + 1.0f) / (fSlow10 * (mydsp_faustpower4_f(fTemp3) * fTemp15 / (fTemp28 * fTemp22 * fTemp26)) + 1.0f) + (fTemp21 + 0.5f * (fTemp3 * fTemp24 / fTemp26)) / fTemp22 - dsp->fRec2[1]) / fTemp16;
			float fTemp30 = fTemp3 * (0.5f * ((dsp->fRec2[1] + fTemp29) * (0.25f * (fTemp27 / fTemp25) + 1.0f) + (fTemp17 + 0.5f * fTemp23) / fTemp18) - dsp->fRec1[1]) / fTemp16;
			float fTemp31 = fTemp3 * (0.5f * ((dsp->fRec1[1] + fTemp30) * (0.25f * (fTemp27 / fTemp28) + 1.0f) + (dsp->fRec3[1] + fTemp20) / fTemp16) - dsp->fRec4[1]) / fTemp16;
			float fTemp32 = fTemp3 * (0.5f * (dsp->fRec4[1] + fTemp31) - dsp->fRec3[1]) / fTemp16;
			float fRec0 = dsp->fRec3[1] + fTemp32;
			dsp->fRec1[0] = dsp->fRec1[1] + 2.0f * fTemp30;
			dsp->fRec2[0] = dsp->fRec2[1] + 2.0f * fTemp29;
			dsp->fRec3[0] = dsp->fRec3[1] + 2.0f * fTemp32;
			dsp->fRec4[0] = dsp->fRec4[1] + 2.0f * fTemp31;
			dsp->fRec12[0] = fSlow2 + dsp->fRec12[1] * (float)(dsp->fVec1[1] >= fSlow2);
			dsp->iRec13[0] = iSlow3 * (dsp->iRec13[1] + 1);
			output0[i0] = (FAUSTFLOAT)(0.2f * fRec0 * fmaxf(0.0f, fminf(dsp->fConst8 * dsp->fRec12[0], 1.0f) - dsp->fConst9 * (float)(dsp->iRec13[0])));
			dsp->iVec0[1] = dsp->iVec0[0];
			dsp->fRec5[1] = dsp->fRec5[0];
			dsp->fVec1[2] = dsp->fVec1[1];
			dsp->fVec1[1] = dsp->fVec1[0];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->fRec7[1] = dsp->fRec7[0];
			dsp->iRec8[1] = dsp->iRec8[0];
			dsp->fVec2[2] = dsp->fVec2[1];
			dsp->fVec2[1] = dsp->fVec2[0];
			dsp->fRec9[1] = dsp->fRec9[0];
			dsp->fRec11[1] = dsp->fRec11[0];
			dsp->fRec10[1] = dsp->fRec10[0];
			dsp->fVec3[1] = dsp->fVec3[0];
			dsp->IOTA0 = dsp->IOTA0 + 1;
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->fRec2[1] = dsp->fRec2[0];
			dsp->fRec3[1] = dsp->fRec3[0];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->fRec12[1] = dsp->fRec12[0];
			dsp->iRec13[1] = dsp->iRec13[0];
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
