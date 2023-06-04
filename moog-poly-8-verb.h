/* ------------------------------------------------------------
name: "moog poly 8 verb"
Code generated with Faust 2.59.9 (https://faust.grame.fr)
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
	FAUSTFLOAT fVslider0;
	float fConst2;
	int iVec0[2];
	float fRec0[2];
	FAUSTFLOAT fHslider0;
	float fConst3;
	FAUSTFLOAT fEntry0;
	float fConst4;
	float fRec6[2];
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
	float fConst8;
	FAUSTFLOAT fHslider1;
	float fConst9;
	float fConst10;
	FAUSTFLOAT fHslider2;
	float fRec5[2];
	float fRec4[2];
	float fRec3[2];
	float fRec2[2];
	float fRec1[2];
	FAUSTFLOAT fVslider1;
	float fRec9[2];
	FAUSTFLOAT fVslider2;
	float fRec21[2];
	float fRec20[3];
	FAUSTFLOAT fVslider3;
	float fRec22[2];
	float fVec4[256];
	float fRec18[2];
	float fVec5[128];
	float fRec16[2];
	FAUSTFLOAT fVslider4;
	float fRec23[2];
	float fVec6[512];
	float fRec14[2];
	float fVec7[512];
	float fRec12[2];
	FAUSTFLOAT fVslider5;
	float fRec24[2];
	FAUSTFLOAT fVslider6;
	float fRec28[2];
	FAUSTFLOAT fVslider7;
	float fRec31[2];
	float fVec8[1024];
	float fRec29[2];
	float fVec9[8192];
	float fRec27[2];
	FAUSTFLOAT fVslider8;
	float fRec32[2];
	float fVec10[4096];
	float fRec25[2];
	float fVec11[4096];
	float fRec10[2];
	float fVec12[1024];
	float fRec36[2];
	float fVec13[8192];
	float fRec35[2];
	float fVec14[2048];
	float fRec33[2];
	float fVec15[2048];
	float fRec11[2];
} mydsp;

int getSampleRatemydsp(mydsp* RESTRICT dsp) {
	return dsp->fSampleRate;
}

int getNumInputsmydsp(mydsp* RESTRICT dsp) {
	return 0;
}
int getNumOutputsmydsp(mydsp* RESTRICT dsp) {
	return 2;
}

void classInitmydsp(int sample_rate) {
}

void instanceResetUserInterfacemydsp(mydsp* dsp) {
	dsp->fVslider0 = (FAUSTFLOAT)(-6.0f);
	dsp->fHslider0 = (FAUSTFLOAT)(0.1f);
	dsp->fEntry0 = (FAUSTFLOAT)(1e+02f);
	dsp->fButton0 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider1 = (FAUSTFLOAT)(1e+03f);
	dsp->fHslider2 = (FAUSTFLOAT)(0.2f);
	dsp->fVslider1 = (FAUSTFLOAT)(0.0f);
	dsp->fVslider2 = (FAUSTFLOAT)(0.7f);
	dsp->fVslider3 = (FAUSTFLOAT)(0.625f);
	dsp->fVslider4 = (FAUSTFLOAT)(0.625f);
	dsp->fVslider5 = (FAUSTFLOAT)(0.7f);
	dsp->fVslider6 = (FAUSTFLOAT)(0.625f);
	dsp->fVslider7 = (FAUSTFLOAT)(0.625f);
	dsp->fVslider8 = (FAUSTFLOAT)(0.625f);
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
			dsp->fRec0[l1] = 0.0f;
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
			dsp->fRec5[l8] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l9;
		for (l9 = 0; l9 < 2; l9 = l9 + 1) {
			dsp->fRec4[l9] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l10;
		for (l10 = 0; l10 < 2; l10 = l10 + 1) {
			dsp->fRec3[l10] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l11;
		for (l11 = 0; l11 < 2; l11 = l11 + 1) {
			dsp->fRec2[l11] = 0.0f;
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
			dsp->fRec9[l13] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l14;
		for (l14 = 0; l14 < 2; l14 = l14 + 1) {
			dsp->fRec21[l14] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; l15 < 3; l15 = l15 + 1) {
			dsp->fRec20[l15] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l16;
		for (l16 = 0; l16 < 2; l16 = l16 + 1) {
			dsp->fRec22[l16] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l17;
		for (l17 = 0; l17 < 256; l17 = l17 + 1) {
			dsp->fVec4[l17] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l18;
		for (l18 = 0; l18 < 2; l18 = l18 + 1) {
			dsp->fRec18[l18] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l19;
		for (l19 = 0; l19 < 128; l19 = l19 + 1) {
			dsp->fVec5[l19] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; l20 < 2; l20 = l20 + 1) {
			dsp->fRec16[l20] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; l21 < 2; l21 = l21 + 1) {
			dsp->fRec23[l21] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; l22 < 512; l22 = l22 + 1) {
			dsp->fVec6[l22] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l23;
		for (l23 = 0; l23 < 2; l23 = l23 + 1) {
			dsp->fRec14[l23] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l24;
		for (l24 = 0; l24 < 512; l24 = l24 + 1) {
			dsp->fVec7[l24] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; l25 < 2; l25 = l25 + 1) {
			dsp->fRec12[l25] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; l26 < 2; l26 = l26 + 1) {
			dsp->fRec24[l26] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; l27 < 2; l27 = l27 + 1) {
			dsp->fRec28[l27] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l28;
		for (l28 = 0; l28 < 2; l28 = l28 + 1) {
			dsp->fRec31[l28] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l29;
		for (l29 = 0; l29 < 1024; l29 = l29 + 1) {
			dsp->fVec8[l29] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l30;
		for (l30 = 0; l30 < 2; l30 = l30 + 1) {
			dsp->fRec29[l30] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l31;
		for (l31 = 0; l31 < 8192; l31 = l31 + 1) {
			dsp->fVec9[l31] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l32;
		for (l32 = 0; l32 < 2; l32 = l32 + 1) {
			dsp->fRec27[l32] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l33;
		for (l33 = 0; l33 < 2; l33 = l33 + 1) {
			dsp->fRec32[l33] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l34;
		for (l34 = 0; l34 < 4096; l34 = l34 + 1) {
			dsp->fVec10[l34] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l35;
		for (l35 = 0; l35 < 2; l35 = l35 + 1) {
			dsp->fRec25[l35] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l36;
		for (l36 = 0; l36 < 4096; l36 = l36 + 1) {
			dsp->fVec11[l36] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l37;
		for (l37 = 0; l37 < 2; l37 = l37 + 1) {
			dsp->fRec10[l37] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l38;
		for (l38 = 0; l38 < 1024; l38 = l38 + 1) {
			dsp->fVec12[l38] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l39;
		for (l39 = 0; l39 < 2; l39 = l39 + 1) {
			dsp->fRec36[l39] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l40;
		for (l40 = 0; l40 < 8192; l40 = l40 + 1) {
			dsp->fVec13[l40] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l41;
		for (l41 = 0; l41 < 2; l41 = l41 + 1) {
			dsp->fRec35[l41] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l42;
		for (l42 = 0; l42 < 2048; l42 = l42 + 1) {
			dsp->fVec14[l42] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l43;
		for (l43 = 0; l43 < 2; l43 = l43 + 1) {
			dsp->fRec33[l43] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l44;
		for (l44 = 0; l44 < 2048; l44 = l44 + 1) {
			dsp->fVec15[l44] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l45;
		for (l45 = 0; l45 < 2; l45 = l45 + 1) {
			dsp->fRec11[l45] = 0.0f;
		}
	}
}

void instanceConstantsmydsp(mydsp* dsp, int sample_rate) {
	dsp->fSampleRate = sample_rate;
	float fConst0 = fminf(1.92e+05f, fmaxf(1.0f, (float)(dsp->fSampleRate)));
	dsp->fConst1 = 44.1f / fConst0;
	dsp->fConst2 = 1.0f - dsp->fConst1;
	dsp->fConst3 = 0.25f * fConst0;
	dsp->fConst4 = 1.0f / fConst0;
	dsp->fConst5 = 0.5f * fConst0;
	dsp->fConst6 = 1.0f / fmaxf(1.0f, 0.2f * fConst0);
	dsp->fConst7 = 1.0f / fmaxf(1.0f, 2.0f * fConst0);
	dsp->fConst8 = 6.2831855f / fConst0;
	dsp->fConst9 = 1.0f / fmaxf(1.0f, fConst0);
	dsp->fConst10 = 1.0f / fmaxf(1.0f, 1.5f * fConst0);
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
	FAUSTFLOAT* output1 = outputs[1];
	float fSlow0 = dsp->fConst1 * powf(1e+01f, 0.05f * (float)(dsp->fVslider0));
	float fSlow1 = (float)(dsp->fHslider0);
	float fSlow2 = 0.15f * (1.0f - fSlow1);
	float fSlow3 = (float)(dsp->fEntry0);
	float fSlow4 = fmaxf(fSlow3, 23.44895f);
	float fSlow5 = fmaxf(2e+01f, fabsf(fSlow4));
	float fSlow6 = dsp->fConst3 / fSlow5;
	float fSlow7 = dsp->fConst4 * fSlow5;
	float fSlow8 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst5 / fSlow4));
	float fSlow9 = floorf(fSlow8);
	float fSlow10 = fSlow9 + (1.0f - fSlow8);
	int iSlow11 = (int)(fSlow8);
	float fSlow12 = fSlow8 - fSlow9;
	int iSlow13 = iSlow11 + 1;
	float fSlow14 = (float)(dsp->fButton0);
	int iSlow15 = fSlow14 == 0.0f;
	float fSlow16 = fSlow3 + (float)(dsp->fHslider1);
	float fSlow17 = 0.0f - 4.0f * fmaxf(0.0f, fminf((float)(dsp->fHslider2), 0.999999f));
	float fSlow18 = dsp->fConst1 * (float)(dsp->fVslider1);
	float fSlow19 = dsp->fConst1 * (float)(dsp->fVslider2);
	float fSlow20 = dsp->fConst1 * (float)(dsp->fVslider3);
	float fSlow21 = dsp->fConst1 * (float)(dsp->fVslider4);
	float fSlow22 = dsp->fConst1 * (float)(dsp->fVslider5);
	float fSlow23 = dsp->fConst1 * (float)(dsp->fVslider6);
	float fSlow24 = dsp->fConst1 * (float)(dsp->fVslider7);
	float fSlow25 = dsp->fConst1 * (float)(dsp->fVslider8);
	float fSlow26 = 0.15f * fSlow1;
	/* C99 loop */
	{
		int i0;
		for (i0 = 0; i0 < count; i0 = i0 + 1) {
			dsp->iVec0[0] = 1;
			dsp->fRec0[0] = fSlow0 + dsp->fConst2 * dsp->fRec0[1];
			float fTemp0 = ((1 - dsp->iVec0[1]) ? 0.0f : fSlow7 + dsp->fRec6[1]);
			dsp->fRec6[0] = fTemp0 - floorf(fTemp0);
			float fTemp1 = mydsp_faustpower2_f(2.0f * dsp->fRec6[0] + -1.0f);
			dsp->fVec1[0] = fTemp1;
			float fTemp2 = fSlow6 * (float)(dsp->iVec0[1]) * (fTemp1 - dsp->fVec1[1]);
			dsp->fVec2[dsp->IOTA0 & 4095] = fTemp2;
			dsp->fVec3[0] = fSlow14;
			dsp->fRec7[0] = fSlow14 + dsp->fRec7[1] * (float)(dsp->fVec3[1] >= fSlow14);
			dsp->iRec8[0] = iSlow15 * (dsp->iRec8[1] + 1);
			float fTemp3 = (float)(dsp->iRec8[0]);
			float fTemp4 = fmaxf(0.0f, fminf(dsp->fConst6 * dsp->fRec7[0], 1.0f) - dsp->fConst7 * fTemp3);
			dsp->fVbargraph0 = (FAUSTFLOAT)(fTemp4);
			float fTemp5 = dsp->fConst8 * (fSlow16 + 3e+03f * fmaxf(0.0f, fminf(dsp->fConst9 * dsp->fRec7[0], 1.0f) - dsp->fConst10 * fTemp3));
			float fTemp6 = 1.0f - fTemp5;
			dsp->fRec5[0] = (fTemp2 - (fSlow10 * dsp->fVec2[(dsp->IOTA0 - iSlow11) & 4095] + fSlow12 * dsp->fVec2[(dsp->IOTA0 - iSlow13) & 4095])) * fTemp4 + fTemp6 * dsp->fRec5[1] + fSlow17 * dsp->fRec1[1];
			dsp->fRec4[0] = dsp->fRec5[0] + fTemp6 * dsp->fRec4[1];
			dsp->fRec3[0] = dsp->fRec4[0] + fTemp6 * dsp->fRec3[1];
			dsp->fRec2[0] = dsp->fRec3[0] + dsp->fRec2[1] * fTemp6;
			dsp->fRec1[0] = dsp->fRec2[0] * mydsp_faustpower4_f(fTemp5);
			dsp->fRec9[0] = fSlow18 + dsp->fConst2 * dsp->fRec9[1];
			float fTemp7 = dsp->fRec9[0] + 1.0f;
			float fTemp8 = fSlow2 * dsp->fRec1[0] * (1.0f - 0.5f * fTemp7);
			dsp->fRec21[0] = fSlow19 + dsp->fConst2 * dsp->fRec21[1];
			dsp->fRec20[0] = (1.0f - dsp->fRec21[0]) * dsp->fRec20[2] + fSlow2 * dsp->fRec1[0] * dsp->fRec21[0];
			dsp->fRec22[0] = fSlow20 + dsp->fConst2 * dsp->fRec22[1];
			float fTemp9 = dsp->fRec20[0] - dsp->fRec22[0] * dsp->fRec18[1];
			dsp->fVec4[dsp->IOTA0 & 255] = fTemp9;
			dsp->fRec18[0] = dsp->fVec4[(dsp->IOTA0 - 142) & 255];
			float fRec19 = dsp->fRec22[0] * fTemp9;
			float fTemp10 = fRec19 + dsp->fRec18[1] - dsp->fRec22[0] * dsp->fRec16[1];
			dsp->fVec5[dsp->IOTA0 & 127] = fTemp10;
			dsp->fRec16[0] = dsp->fVec5[(dsp->IOTA0 - 107) & 127];
			float fRec17 = dsp->fRec22[0] * fTemp10;
			dsp->fRec23[0] = fSlow21 + dsp->fConst2 * dsp->fRec23[1];
			float fTemp11 = fRec17 + dsp->fRec16[1] - dsp->fRec23[0] * dsp->fRec14[1];
			dsp->fVec6[dsp->IOTA0 & 511] = fTemp11;
			dsp->fRec14[0] = dsp->fVec6[(dsp->IOTA0 - 379) & 511];
			float fRec15 = dsp->fRec23[0] * fTemp11;
			float fTemp12 = fRec15 + dsp->fRec14[1] - dsp->fRec23[0] * dsp->fRec12[1];
			dsp->fVec7[dsp->IOTA0 & 511] = fTemp12;
			dsp->fRec12[0] = dsp->fVec7[(dsp->IOTA0 - 277) & 511];
			float fRec13 = dsp->fRec23[0] * fTemp12;
			dsp->fRec24[0] = fSlow22 + dsp->fConst2 * dsp->fRec24[1];
			dsp->fRec28[0] = fSlow23 + dsp->fConst2 * dsp->fRec28[1];
			float fTemp13 = 1.0f - dsp->fRec28[0];
			dsp->fRec31[0] = fSlow24 + dsp->fConst2 * dsp->fRec31[1];
			float fTemp14 = dsp->fRec31[0] * dsp->fRec29[1] + dsp->fRec11[1];
			dsp->fVec8[dsp->IOTA0 & 1023] = fTemp14;
			dsp->fRec29[0] = dsp->fVec8[(dsp->IOTA0 - 908) & 1023];
			float fRec30 = 0.0f - dsp->fRec31[0] * fTemp14;
			dsp->fVec9[dsp->IOTA0 & 8191] = fRec30 + dsp->fRec29[1];
			dsp->fRec27[0] = dsp->fRec28[0] * dsp->fRec27[1] + fTemp13 * dsp->fVec9[(dsp->IOTA0 - 4217) & 8191];
			dsp->fRec32[0] = fSlow25 + dsp->fConst2 * dsp->fRec32[1];
			float fTemp15 = dsp->fRec27[0] * dsp->fRec24[0] - dsp->fRec32[0] * dsp->fRec25[1];
			dsp->fVec10[dsp->IOTA0 & 4095] = fTemp15;
			dsp->fRec25[0] = dsp->fVec10[(dsp->IOTA0 - 2656) & 4095];
			float fRec26 = dsp->fRec32[0] * fTemp15;
			dsp->fVec11[dsp->IOTA0 & 4095] = fRec26 + dsp->fRec25[1];
			dsp->fRec10[0] = fRec13 + dsp->fRec24[0] * dsp->fVec11[(dsp->IOTA0 - 2656) & 4095] + dsp->fRec12[1];
			float fTemp16 = dsp->fRec31[0] * dsp->fRec36[1] + dsp->fRec10[1];
			dsp->fVec12[dsp->IOTA0 & 1023] = fTemp16;
			dsp->fRec36[0] = dsp->fVec12[(dsp->IOTA0 - 672) & 1023];
			float fRec37 = 0.0f - dsp->fRec31[0] * fTemp16;
			dsp->fVec13[dsp->IOTA0 & 8191] = fRec37 + dsp->fRec36[1];
			dsp->fRec35[0] = dsp->fRec28[0] * dsp->fRec35[1] + fTemp13 * dsp->fVec13[(dsp->IOTA0 - 4453) & 8191];
			float fTemp17 = dsp->fRec24[0] * dsp->fRec35[0] - dsp->fRec32[0] * dsp->fRec33[1];
			dsp->fVec14[dsp->IOTA0 & 2047] = fTemp17;
			dsp->fRec33[0] = dsp->fVec14[(dsp->IOTA0 - 1800) & 2047];
			float fRec34 = dsp->fRec32[0] * fTemp17;
			dsp->fVec15[dsp->IOTA0 & 2047] = fRec34 + dsp->fRec33[1];
			dsp->fRec11[0] = fRec13 + dsp->fRec12[1] + dsp->fRec24[0] * dsp->fVec15[(dsp->IOTA0 - 1800) & 2047];
			float fTemp18 = fSlow26 * dsp->fRec1[0];
			output0[i0] = (FAUSTFLOAT)(dsp->fRec0[0] * (fTemp8 + 0.5f * fTemp7 * dsp->fRec10[0]) + fTemp18);
			output1[i0] = (FAUSTFLOAT)(fTemp18 + dsp->fRec0[0] * (fTemp8 + 0.5f * fTemp7 * dsp->fRec11[0]));
			dsp->iVec0[1] = dsp->iVec0[0];
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->fVec1[1] = dsp->fVec1[0];
			dsp->IOTA0 = dsp->IOTA0 + 1;
			dsp->fVec3[1] = dsp->fVec3[0];
			dsp->fRec7[1] = dsp->fRec7[0];
			dsp->iRec8[1] = dsp->iRec8[0];
			dsp->fRec5[1] = dsp->fRec5[0];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->fRec3[1] = dsp->fRec3[0];
			dsp->fRec2[1] = dsp->fRec2[0];
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->fRec9[1] = dsp->fRec9[0];
			dsp->fRec21[1] = dsp->fRec21[0];
			dsp->fRec20[2] = dsp->fRec20[1];
			dsp->fRec20[1] = dsp->fRec20[0];
			dsp->fRec22[1] = dsp->fRec22[0];
			dsp->fRec18[1] = dsp->fRec18[0];
			dsp->fRec16[1] = dsp->fRec16[0];
			dsp->fRec23[1] = dsp->fRec23[0];
			dsp->fRec14[1] = dsp->fRec14[0];
			dsp->fRec12[1] = dsp->fRec12[0];
			dsp->fRec24[1] = dsp->fRec24[0];
			dsp->fRec28[1] = dsp->fRec28[0];
			dsp->fRec31[1] = dsp->fRec31[0];
			dsp->fRec29[1] = dsp->fRec29[0];
			dsp->fRec27[1] = dsp->fRec27[0];
			dsp->fRec32[1] = dsp->fRec32[0];
			dsp->fRec25[1] = dsp->fRec25[0];
			dsp->fRec10[1] = dsp->fRec10[0];
			dsp->fRec36[1] = dsp->fRec36[0];
			dsp->fRec35[1] = dsp->fRec35[0];
			dsp->fRec33[1] = dsp->fRec33[0];
			dsp->fRec11[1] = dsp->fRec11[0];
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
