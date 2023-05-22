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
	int fSampleRate;
	float fConst1;
	int iVec0[2];
	float fConst2;
	float fConst3;
	FAUSTFLOAT fHslider0;
	float fConst4;
	float fRec6[2];
	float fRec5[2];
	float fVec1[2];
	int IOTA0;
	float fVec2[4096];
	float fConst5;
	float fConst6;
	FAUSTFLOAT fButton0;
	float fVec3[2];
	float fRec7[2];
	float fConst7;
	int iRec8[2];
	FAUSTFLOAT fVbargraph0;
	FAUSTFLOAT fHslider1;
	float fRec10[2];
	float fRec9[2];
	float fVec4[2];
	float fVec5[4096];
	FAUSTFLOAT fButton1;
	float fVec6[2];
	float fRec11[2];
	int iRec12[2];
	FAUSTFLOAT fVbargraph1;
	FAUSTFLOAT fHslider2;
	float fRec14[2];
	float fRec13[2];
	float fVec7[2];
	float fVec8[4096];
	FAUSTFLOAT fButton2;
	float fVec9[2];
	float fRec15[2];
	int iRec16[2];
	FAUSTFLOAT fVbargraph2;
	float fConst8;
	FAUSTFLOAT fHslider3;
	float fRec17[2];
	FAUSTFLOAT fHslider4;
	float fRec18[2];
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
	dsp->fHslider0 = (FAUSTFLOAT)(1e+03f);
	dsp->fButton0 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider1 = (FAUSTFLOAT)(1e+03f);
	dsp->fButton1 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider2 = (FAUSTFLOAT)(1e+03f);
	dsp->fButton2 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider3 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider4 = (FAUSTFLOAT)(0.0f);
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
			dsp->fRec6[l1] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l2;
		for (l2 = 0; l2 < 2; l2 = l2 + 1) {
			dsp->fRec5[l2] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l3;
		for (l3 = 0; l3 < 2; l3 = l3 + 1) {
			dsp->fVec1[l3] = 0.0f;
		}
	}
	dsp->IOTA0 = 0;
	/* C99 loop */
	{
		int l4;
		for (l4 = 0; l4 < 4096; l4 = l4 + 1) {
			dsp->fVec2[l4] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l5;
		for (l5 = 0; l5 < 2; l5 = l5 + 1) {
			dsp->fVec3[l5] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; l6 < 2; l6 = l6 + 1) {
			dsp->fRec7[l6] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; l7 < 2; l7 = l7 + 1) {
			dsp->iRec8[l7] = 0;
		}
	}
	/* C99 loop */
	{
		int l8;
		for (l8 = 0; l8 < 2; l8 = l8 + 1) {
			dsp->fRec10[l8] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l9;
		for (l9 = 0; l9 < 2; l9 = l9 + 1) {
			dsp->fRec9[l9] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l10;
		for (l10 = 0; l10 < 2; l10 = l10 + 1) {
			dsp->fVec4[l10] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l11;
		for (l11 = 0; l11 < 4096; l11 = l11 + 1) {
			dsp->fVec5[l11] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l12;
		for (l12 = 0; l12 < 2; l12 = l12 + 1) {
			dsp->fVec6[l12] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l13;
		for (l13 = 0; l13 < 2; l13 = l13 + 1) {
			dsp->fRec11[l13] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l14;
		for (l14 = 0; l14 < 2; l14 = l14 + 1) {
			dsp->iRec12[l14] = 0;
		}
	}
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; l15 < 2; l15 = l15 + 1) {
			dsp->fRec14[l15] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l16;
		for (l16 = 0; l16 < 2; l16 = l16 + 1) {
			dsp->fRec13[l16] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l17;
		for (l17 = 0; l17 < 2; l17 = l17 + 1) {
			dsp->fVec7[l17] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l18;
		for (l18 = 0; l18 < 4096; l18 = l18 + 1) {
			dsp->fVec8[l18] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l19;
		for (l19 = 0; l19 < 2; l19 = l19 + 1) {
			dsp->fVec9[l19] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; l20 < 2; l20 = l20 + 1) {
			dsp->fRec15[l20] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; l21 < 2; l21 = l21 + 1) {
			dsp->iRec16[l21] = 0;
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
			dsp->fRec18[l23] = 0.0f;
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
	dsp->fConst1 = 0.25f * fConst0;
	dsp->fConst2 = 1.0f / fConst0;
	dsp->fConst3 = 44.1f / fConst0;
	dsp->fConst4 = 1.0f - dsp->fConst3;
	dsp->fConst5 = 0.5f * fConst0;
	dsp->fConst6 = 1.0f / fmaxf(1.0f, fConst0);
	dsp->fConst7 = 1.0f / fmaxf(1.0f, 5.0f * fConst0);
	dsp->fConst8 = 6.2831855f / fConst0;
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
	float fSlow0 = dsp->fConst3 * (float)(dsp->fHslider0);
	float fSlow1 = (float)(dsp->fButton0);
	int iSlow2 = fSlow1 == 0.0f;
	float fSlow3 = dsp->fConst3 * (float)(dsp->fHslider1);
	float fSlow4 = (float)(dsp->fButton1);
	int iSlow5 = fSlow4 == 0.0f;
	float fSlow6 = dsp->fConst3 * (float)(dsp->fHslider2);
	float fSlow7 = (float)(dsp->fButton2);
	int iSlow8 = fSlow7 == 0.0f;
	float fSlow9 = dsp->fConst3 * (float)(dsp->fHslider3);
	float fSlow10 = dsp->fConst3 * (float)(dsp->fHslider4);
	/* C99 loop */
	{
		int i0;
		for (i0 = 0; i0 < count; i0 = i0 + 1) {
			dsp->iVec0[0] = 1;
			float fTemp0 = (float)(dsp->iVec0[1]);
			int iTemp1 = 1 - dsp->iVec0[1];
			dsp->fRec6[0] = fSlow0 + dsp->fConst4 * dsp->fRec6[1];
			float fTemp2 = fmaxf(dsp->fRec6[0], 23.44895f);
			float fTemp3 = fmaxf(2e+01f, fabsf(fTemp2));
			float fTemp4 = ((iTemp1) ? 0.0f : dsp->fRec5[1] + dsp->fConst2 * fTemp3);
			dsp->fRec5[0] = fTemp4 - floorf(fTemp4);
			float fTemp5 = mydsp_faustpower2_f(2.0f * dsp->fRec5[0] + -1.0f);
			dsp->fVec1[0] = fTemp5;
			float fTemp6 = fTemp0 * (fTemp5 - dsp->fVec1[1]) / fTemp3;
			dsp->fVec2[dsp->IOTA0 & 4095] = fTemp6;
			float fTemp7 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst5 / fTemp2));
			int iTemp8 = (int)(fTemp7);
			float fTemp9 = floorf(fTemp7);
			dsp->fVec3[0] = fSlow1;
			dsp->fRec7[0] = fSlow1 + dsp->fRec7[1] * (float)(dsp->fVec3[1] >= fSlow1);
			dsp->iRec8[0] = iSlow2 * (dsp->iRec8[1] + 1);
			float fTemp10 = fmaxf(0.0f, fminf(dsp->fConst6 * dsp->fRec7[0], 1.0f) - dsp->fConst7 * (float)(dsp->iRec8[0]));
			dsp->fVbargraph0 = (FAUSTFLOAT)(fTemp10);
			dsp->fRec10[0] = fSlow3 + dsp->fConst4 * dsp->fRec10[1];
			float fTemp11 = fmaxf(dsp->fRec10[0], 23.44895f);
			float fTemp12 = fmaxf(2e+01f, fabsf(fTemp11));
			float fTemp13 = ((iTemp1) ? 0.0f : dsp->fRec9[1] + dsp->fConst2 * fTemp12);
			dsp->fRec9[0] = fTemp13 - floorf(fTemp13);
			float fTemp14 = mydsp_faustpower2_f(2.0f * dsp->fRec9[0] + -1.0f);
			dsp->fVec4[0] = fTemp14;
			float fTemp15 = fTemp0 * (fTemp14 - dsp->fVec4[1]) / fTemp12;
			dsp->fVec5[dsp->IOTA0 & 4095] = fTemp15;
			float fTemp16 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst5 / fTemp11));
			int iTemp17 = (int)(fTemp16);
			float fTemp18 = floorf(fTemp16);
			dsp->fVec6[0] = fSlow4;
			dsp->fRec11[0] = fSlow4 + dsp->fRec11[1] * (float)(dsp->fVec6[1] >= fSlow4);
			dsp->iRec12[0] = iSlow5 * (dsp->iRec12[1] + 1);
			float fTemp19 = fmaxf(0.0f, fminf(dsp->fConst6 * dsp->fRec11[0], 1.0f) - dsp->fConst7 * (float)(dsp->iRec12[0]));
			dsp->fVbargraph1 = (FAUSTFLOAT)(fTemp19);
			dsp->fRec14[0] = fSlow6 + dsp->fConst4 * dsp->fRec14[1];
			float fTemp20 = fmaxf(dsp->fRec14[0], 23.44895f);
			float fTemp21 = fmaxf(2e+01f, fabsf(fTemp20));
			float fTemp22 = ((iTemp1) ? 0.0f : dsp->fRec13[1] + dsp->fConst2 * fTemp21);
			dsp->fRec13[0] = fTemp22 - floorf(fTemp22);
			float fTemp23 = mydsp_faustpower2_f(2.0f * dsp->fRec13[0] + -1.0f);
			dsp->fVec7[0] = fTemp23;
			float fTemp24 = fTemp0 * (fTemp23 - dsp->fVec7[1]) / fTemp21;
			dsp->fVec8[dsp->IOTA0 & 4095] = fTemp24;
			float fTemp25 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst5 / fTemp20));
			int iTemp26 = (int)(fTemp25);
			float fTemp27 = floorf(fTemp25);
			dsp->fVec9[0] = fSlow7;
			dsp->fRec15[0] = fSlow7 + dsp->fRec15[1] * (float)(dsp->fVec9[1] >= fSlow7);
			dsp->iRec16[0] = iSlow8 * (dsp->iRec16[1] + 1);
			float fTemp28 = fmaxf(0.0f, fminf(dsp->fConst6 * dsp->fRec15[0], 1.0f) - dsp->fConst7 * (float)(dsp->iRec16[0]));
			dsp->fVbargraph2 = (FAUSTFLOAT)(fTemp28);
			dsp->fRec17[0] = fSlow9 + dsp->fConst4 * dsp->fRec17[1];
			float fTemp29 = dsp->fConst8 * dsp->fRec17[0];
			float fTemp30 = 1.0f - fTemp29;
			dsp->fRec18[0] = fSlow10 + dsp->fConst4 * dsp->fRec18[1];
			dsp->fRec4[0] = 0.33333334f * (dsp->fConst1 * ((fTemp6 - dsp->fVec2[(dsp->IOTA0 - iTemp8) & 4095] * (fTemp9 + (1.0f - fTemp7)) - (fTemp7 - fTemp9) * dsp->fVec2[(dsp->IOTA0 - (iTemp8 + 1)) & 4095]) * fTemp10 + (fTemp15 - dsp->fVec5[(dsp->IOTA0 - iTemp17) & 4095] * (fTemp18 + (1.0f - fTemp16)) - (fTemp16 - fTemp18) * dsp->fVec5[(dsp->IOTA0 - (iTemp17 + 1)) & 4095]) * fTemp19) + (0.0f - dsp->fConst1 * (dsp->fVec8[(dsp->IOTA0 - iTemp26) & 4095] * (fTemp27 + (1.0f - fTemp25)) - fTemp24 + (fTemp25 - fTemp27) * dsp->fVec8[(dsp->IOTA0 - (iTemp26 + 1)) & 4095])) * fTemp28) + fTemp30 * dsp->fRec4[1] + dsp->fRec0[1] * (0.0f - 4.0f * fmaxf(0.0f, fminf(dsp->fRec18[0], 0.999999f)));
			dsp->fRec3[0] = dsp->fRec4[0] + fTemp30 * dsp->fRec3[1];
			dsp->fRec2[0] = dsp->fRec3[0] + fTemp30 * dsp->fRec2[1];
			dsp->fRec1[0] = dsp->fRec2[0] + dsp->fRec1[1] * fTemp30;
			dsp->fRec0[0] = dsp->fRec1[0] * mydsp_faustpower4_f(fTemp29);
			output0[i0] = (FAUSTFLOAT)(dsp->fRec0[0]);
			dsp->iVec0[1] = dsp->iVec0[0];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->fRec5[1] = dsp->fRec5[0];
			dsp->fVec1[1] = dsp->fVec1[0];
			dsp->IOTA0 = dsp->IOTA0 + 1;
			dsp->fVec3[1] = dsp->fVec3[0];
			dsp->fRec7[1] = dsp->fRec7[0];
			dsp->iRec8[1] = dsp->iRec8[0];
			dsp->fRec10[1] = dsp->fRec10[0];
			dsp->fRec9[1] = dsp->fRec9[0];
			dsp->fVec4[1] = dsp->fVec4[0];
			dsp->fVec6[1] = dsp->fVec6[0];
			dsp->fRec11[1] = dsp->fRec11[0];
			dsp->iRec12[1] = dsp->iRec12[0];
			dsp->fRec14[1] = dsp->fRec14[0];
			dsp->fRec13[1] = dsp->fRec13[0];
			dsp->fVec7[1] = dsp->fVec7[0];
			dsp->fVec9[1] = dsp->fVec9[0];
			dsp->fRec15[1] = dsp->fRec15[0];
			dsp->iRec16[1] = dsp->iRec16[0];
			dsp->fRec17[1] = dsp->fRec17[0];
			dsp->fRec18[1] = dsp->fRec18[0];
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
