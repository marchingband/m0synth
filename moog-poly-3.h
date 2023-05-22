/* ------------------------------------------------------------
name: "moog poly 3"
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
	FAUSTFLOAT fHslider0;
	float fConst2;
	float fRec5[2];
	float fConst3;
	FAUSTFLOAT fHslider1;
	float fRec6[2];
	float fConst4;
	float fConst5;
	FAUSTFLOAT fHslider2;
	float fRec8[2];
	float fRec7[2];
	float fVec1[2];
	int IOTA0;
	float fVec2[4096];
	float fConst6;
	float fConst7;
	FAUSTFLOAT fButton0;
	float fVec3[2];
	float fRec9[2];
	float fConst8;
	int iRec10[2];
	FAUSTFLOAT fVbargraph0;
	FAUSTFLOAT fHslider3;
	float fRec12[2];
	float fRec11[2];
	float fVec4[2];
	float fVec5[4096];
	FAUSTFLOAT fButton1;
	float fVec6[2];
	float fRec13[2];
	int iRec14[2];
	FAUSTFLOAT fVbargraph1;
	FAUSTFLOAT fHslider4;
	float fRec16[2];
	float fRec15[2];
	float fVec7[2];
	float fVec8[4096];
	FAUSTFLOAT fButton2;
	float fVec9[2];
	float fRec17[2];
	int iRec18[2];
	FAUSTFLOAT fVbargraph2;
	float fRec4[2];
	float fRec3[2];
	float fRec2[2];
	float fRec1[2];
	float fRec0[2];
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
	dsp->fHslider0 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider1 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider2 = (FAUSTFLOAT)(1e+03f);
	dsp->fButton0 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider3 = (FAUSTFLOAT)(1e+03f);
	dsp->fButton1 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider4 = (FAUSTFLOAT)(1e+03f);
	dsp->fButton2 = (FAUSTFLOAT)(0.0f);
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
		for (l2 = 0; l2 < 2; l2 = l2 + 1) {
			dsp->fRec6[l2] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l3;
		for (l3 = 0; l3 < 2; l3 = l3 + 1) {
			dsp->fRec8[l3] = 0.0f;
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
			dsp->fVec1[l5] = 0.0f;
		}
	}
	dsp->IOTA0 = 0;
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; l6 < 4096; l6 = l6 + 1) {
			dsp->fVec2[l6] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; l7 < 2; l7 = l7 + 1) {
			dsp->fVec3[l7] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l8;
		for (l8 = 0; l8 < 2; l8 = l8 + 1) {
			dsp->fRec9[l8] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l9;
		for (l9 = 0; l9 < 2; l9 = l9 + 1) {
			dsp->iRec10[l9] = 0;
		}
	}
	/* C99 loop */
	{
		int l10;
		for (l10 = 0; l10 < 2; l10 = l10 + 1) {
			dsp->fRec12[l10] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l11;
		for (l11 = 0; l11 < 2; l11 = l11 + 1) {
			dsp->fRec11[l11] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l12;
		for (l12 = 0; l12 < 2; l12 = l12 + 1) {
			dsp->fVec4[l12] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l13;
		for (l13 = 0; l13 < 4096; l13 = l13 + 1) {
			dsp->fVec5[l13] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l14;
		for (l14 = 0; l14 < 2; l14 = l14 + 1) {
			dsp->fVec6[l14] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; l15 < 2; l15 = l15 + 1) {
			dsp->fRec13[l15] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l16;
		for (l16 = 0; l16 < 2; l16 = l16 + 1) {
			dsp->iRec14[l16] = 0;
		}
	}
	/* C99 loop */
	{
		int l17;
		for (l17 = 0; l17 < 2; l17 = l17 + 1) {
			dsp->fRec16[l17] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l18;
		for (l18 = 0; l18 < 2; l18 = l18 + 1) {
			dsp->fRec15[l18] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l19;
		for (l19 = 0; l19 < 2; l19 = l19 + 1) {
			dsp->fVec7[l19] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; l20 < 4096; l20 = l20 + 1) {
			dsp->fVec8[l20] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; l21 < 2; l21 = l21 + 1) {
			dsp->fVec9[l21] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; l22 < 2; l22 = l22 + 1) {
			dsp->fRec17[l22] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l23;
		for (l23 = 0; l23 < 2; l23 = l23 + 1) {
			dsp->iRec18[l23] = 0;
		}
	}
	/* C99 loop */
	{
		int l24;
		for (l24 = 0; l24 < 2; l24 = l24 + 1) {
			dsp->fRec4[l24] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; l25 < 2; l25 = l25 + 1) {
			dsp->fRec3[l25] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; l26 < 2; l26 = l26 + 1) {
			dsp->fRec2[l26] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; l27 < 2; l27 = l27 + 1) {
			dsp->fRec1[l27] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l28;
		for (l28 = 0; l28 < 2; l28 = l28 + 1) {
			dsp->fRec0[l28] = 0.0f;
		}
	}
}

void instanceConstantsmydsp(mydsp* dsp, int sample_rate) {
	dsp->fSampleRate = sample_rate;
	float fConst0 = fminf(1.92e+05f, fmaxf(1.0f, (float)(dsp->fSampleRate)));
	dsp->fConst1 = 44.1f / fConst0;
	dsp->fConst2 = 1.0f - dsp->fConst1;
	dsp->fConst3 = 6.2831855f / fConst0;
	dsp->fConst4 = 0.075f * fConst0;
	dsp->fConst5 = 1.0f / fConst0;
	dsp->fConst6 = 0.5f * fConst0;
	dsp->fConst7 = 1.0f / fmaxf(1.0f, fConst0);
	dsp->fConst8 = 1.0f / fmaxf(1.0f, 5.0f * fConst0);
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
	float fSlow0 = dsp->fConst1 * (float)(dsp->fHslider0);
	float fSlow1 = dsp->fConst1 * (float)(dsp->fHslider1);
	float fSlow2 = dsp->fConst1 * (float)(dsp->fHslider2);
	float fSlow3 = (float)(dsp->fButton0);
	int iSlow4 = fSlow3 == 0.0f;
	float fSlow5 = dsp->fConst1 * (float)(dsp->fHslider3);
	float fSlow6 = (float)(dsp->fButton1);
	int iSlow7 = fSlow6 == 0.0f;
	float fSlow8 = dsp->fConst1 * (float)(dsp->fHslider4);
	float fSlow9 = (float)(dsp->fButton2);
	int iSlow10 = fSlow9 == 0.0f;
	/* C99 loop */
	{
		int i0;
		for (i0 = 0; i0 < count; i0 = i0 + 1) {
			dsp->iVec0[0] = 1;
			dsp->fRec5[0] = fSlow0 + dsp->fConst2 * dsp->fRec5[1];
			dsp->fRec6[0] = fSlow1 + dsp->fConst2 * dsp->fRec6[1];
			float fTemp0 = dsp->fConst3 * dsp->fRec6[0];
			float fTemp1 = 1.0f - fTemp0;
			float fTemp2 = (float)(dsp->iVec0[1]);
			int iTemp3 = 1 - dsp->iVec0[1];
			dsp->fRec8[0] = fSlow2 + dsp->fConst2 * dsp->fRec8[1];
			float fTemp4 = fmaxf(dsp->fRec8[0], 23.44895f);
			float fTemp5 = fmaxf(2e+01f, fabsf(fTemp4));
			float fTemp6 = ((iTemp3) ? 0.0f : dsp->fRec7[1] + dsp->fConst5 * fTemp5);
			dsp->fRec7[0] = fTemp6 - floorf(fTemp6);
			float fTemp7 = mydsp_faustpower2_f(2.0f * dsp->fRec7[0] + -1.0f);
			dsp->fVec1[0] = fTemp7;
			float fTemp8 = fTemp2 * (fTemp7 - dsp->fVec1[1]) / fTemp5;
			dsp->fVec2[dsp->IOTA0 & 4095] = fTemp8;
			float fTemp9 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst6 / fTemp4));
			int iTemp10 = (int)(fTemp9);
			float fTemp11 = floorf(fTemp9);
			dsp->fVec3[0] = fSlow3;
			dsp->fRec9[0] = fSlow3 + dsp->fRec9[1] * (float)(dsp->fVec3[1] >= fSlow3);
			dsp->iRec10[0] = iSlow4 * (dsp->iRec10[1] + 1);
			float fTemp12 = fmaxf(0.0f, fminf(dsp->fConst7 * dsp->fRec9[0], 1.0f) - dsp->fConst8 * (float)(dsp->iRec10[0]));
			dsp->fVbargraph0 = (FAUSTFLOAT)(fTemp12);
			dsp->fRec12[0] = fSlow5 + dsp->fConst2 * dsp->fRec12[1];
			float fTemp13 = fmaxf(dsp->fRec12[0], 23.44895f);
			float fTemp14 = fmaxf(2e+01f, fabsf(fTemp13));
			float fTemp15 = ((iTemp3) ? 0.0f : dsp->fRec11[1] + dsp->fConst5 * fTemp14);
			dsp->fRec11[0] = fTemp15 - floorf(fTemp15);
			float fTemp16 = mydsp_faustpower2_f(2.0f * dsp->fRec11[0] + -1.0f);
			dsp->fVec4[0] = fTemp16;
			float fTemp17 = fTemp2 * (fTemp16 - dsp->fVec4[1]) / fTemp14;
			dsp->fVec5[dsp->IOTA0 & 4095] = fTemp17;
			float fTemp18 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst6 / fTemp13));
			int iTemp19 = (int)(fTemp18);
			float fTemp20 = floorf(fTemp18);
			dsp->fVec6[0] = fSlow6;
			dsp->fRec13[0] = fSlow6 + dsp->fRec13[1] * (float)(dsp->fVec6[1] >= fSlow6);
			dsp->iRec14[0] = iSlow7 * (dsp->iRec14[1] + 1);
			float fTemp21 = fmaxf(0.0f, fminf(dsp->fConst7 * dsp->fRec13[0], 1.0f) - dsp->fConst8 * (float)(dsp->iRec14[0]));
			dsp->fVbargraph1 = (FAUSTFLOAT)(fTemp21);
			dsp->fRec16[0] = fSlow8 + dsp->fConst2 * dsp->fRec16[1];
			float fTemp22 = fmaxf(dsp->fRec16[0], 23.44895f);
			float fTemp23 = fmaxf(2e+01f, fabsf(fTemp22));
			float fTemp24 = ((iTemp3) ? 0.0f : dsp->fRec15[1] + dsp->fConst5 * fTemp23);
			dsp->fRec15[0] = fTemp24 - floorf(fTemp24);
			float fTemp25 = mydsp_faustpower2_f(2.0f * dsp->fRec15[0] + -1.0f);
			dsp->fVec7[0] = fTemp25;
			float fTemp26 = fTemp2 * (fTemp25 - dsp->fVec7[1]) / fTemp23;
			dsp->fVec8[dsp->IOTA0 & 4095] = fTemp26;
			float fTemp27 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst6 / fTemp22));
			int iTemp28 = (int)(fTemp27);
			float fTemp29 = floorf(fTemp27);
			dsp->fVec9[0] = fSlow9;
			dsp->fRec17[0] = fSlow9 + dsp->fRec17[1] * (float)(dsp->fVec9[1] >= fSlow9);
			dsp->iRec18[0] = iSlow10 * (dsp->iRec18[1] + 1);
			float fTemp30 = fmaxf(0.0f, fminf(dsp->fConst7 * dsp->fRec17[0], 1.0f) - dsp->fConst8 * (float)(dsp->iRec18[0]));
			dsp->fVbargraph2 = (FAUSTFLOAT)(fTemp30);
			dsp->fRec4[0] = dsp->fRec0[1] * (0.0f - 4.0f * fmaxf(0.0f, fminf(dsp->fRec5[0], 0.999999f))) + fTemp1 * dsp->fRec4[1] + dsp->fConst4 * ((fTemp8 - dsp->fVec2[(dsp->IOTA0 - iTemp10) & 4095] * (fTemp11 + (1.0f - fTemp9)) - (fTemp9 - fTemp11) * dsp->fVec2[(dsp->IOTA0 - (iTemp10 + 1)) & 4095]) * fTemp12 + (fTemp17 - dsp->fVec5[(dsp->IOTA0 - iTemp19) & 4095] * (fTemp20 + (1.0f - fTemp18)) - (fTemp18 - fTemp20) * dsp->fVec5[(dsp->IOTA0 - (iTemp19 + 1)) & 4095]) * fTemp21 + (fTemp26 - dsp->fVec8[(dsp->IOTA0 - iTemp28) & 4095] * (fTemp29 + (1.0f - fTemp27)) - (fTemp27 - fTemp29) * dsp->fVec8[(dsp->IOTA0 - (iTemp28 + 1)) & 4095]) * fTemp30);
			dsp->fRec3[0] = dsp->fRec4[0] + fTemp1 * dsp->fRec3[1];
			dsp->fRec2[0] = dsp->fRec3[0] + fTemp1 * dsp->fRec2[1];
			dsp->fRec1[0] = dsp->fRec2[0] + dsp->fRec1[1] * fTemp1;
			dsp->fRec0[0] = dsp->fRec1[0] * mydsp_faustpower4_f(fTemp0);
			output0[i0] = (FAUSTFLOAT)(dsp->fRec0[0]);
			dsp->iVec0[1] = dsp->iVec0[0];
			dsp->fRec5[1] = dsp->fRec5[0];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->fRec8[1] = dsp->fRec8[0];
			dsp->fRec7[1] = dsp->fRec7[0];
			dsp->fVec1[1] = dsp->fVec1[0];
			dsp->IOTA0 = dsp->IOTA0 + 1;
			dsp->fVec3[1] = dsp->fVec3[0];
			dsp->fRec9[1] = dsp->fRec9[0];
			dsp->iRec10[1] = dsp->iRec10[0];
			dsp->fRec12[1] = dsp->fRec12[0];
			dsp->fRec11[1] = dsp->fRec11[0];
			dsp->fVec4[1] = dsp->fVec4[0];
			dsp->fVec6[1] = dsp->fVec6[0];
			dsp->fRec13[1] = dsp->fRec13[0];
			dsp->iRec14[1] = dsp->iRec14[0];
			dsp->fRec16[1] = dsp->fRec16[0];
			dsp->fRec15[1] = dsp->fRec15[0];
			dsp->fVec7[1] = dsp->fVec7[0];
			dsp->fVec9[1] = dsp->fVec9[0];
			dsp->fRec17[1] = dsp->fRec17[0];
			dsp->iRec18[1] = dsp->iRec18[0];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->fRec3[1] = dsp->fRec3[0];
			dsp->fRec2[1] = dsp->fRec2[0];
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->fRec0[1] = dsp->fRec0[0];
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
