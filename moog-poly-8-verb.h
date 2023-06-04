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
	FAUSTFLOAT fEntry1;
	float fRec14[2];
	float fVec4[2];
	float fVec5[4096];
	FAUSTFLOAT fButton1;
	float fVec6[2];
	float fRec15[2];
	int iRec16[2];
	FAUSTFLOAT fVbargraph1;
	float fRec13[2];
	float fRec12[2];
	float fRec11[2];
	float fRec10[2];
	float fRec9[2];
	FAUSTFLOAT fVslider1;
	float fRec17[2];
	FAUSTFLOAT fVslider2;
	float fRec29[2];
	float fRec28[3];
	FAUSTFLOAT fVslider3;
	float fRec30[2];
	float fVec7[256];
	float fRec26[2];
	float fVec8[128];
	float fRec24[2];
	FAUSTFLOAT fVslider4;
	float fRec31[2];
	float fVec9[512];
	float fRec22[2];
	float fVec10[512];
	float fRec20[2];
	FAUSTFLOAT fVslider5;
	float fRec32[2];
	FAUSTFLOAT fVslider6;
	float fRec36[2];
	FAUSTFLOAT fVslider7;
	float fRec39[2];
	float fVec11[1024];
	float fRec37[2];
	float fVec12[8192];
	float fRec35[2];
	FAUSTFLOAT fVslider8;
	float fRec40[2];
	float fVec13[4096];
	float fRec33[2];
	float fVec14[4096];
	float fRec18[2];
	float fVec15[1024];
	float fRec44[2];
	float fVec16[8192];
	float fRec43[2];
	float fVec17[2048];
	float fRec41[2];
	float fVec18[2048];
	float fRec19[2];
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
	dsp->fHslider0 = (FAUSTFLOAT)(0.5f);
	dsp->fEntry0 = (FAUSTFLOAT)(1e+02f);
	dsp->fButton0 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider1 = (FAUSTFLOAT)(1e+03f);
	dsp->fHslider2 = (FAUSTFLOAT)(0.2f);
	dsp->fEntry1 = (FAUSTFLOAT)(2e+02f);
	dsp->fButton1 = (FAUSTFLOAT)(0.0f);
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
			dsp->fRec14[l13] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l14;
		for (l14 = 0; l14 < 2; l14 = l14 + 1) {
			dsp->fVec4[l14] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; l15 < 4096; l15 = l15 + 1) {
			dsp->fVec5[l15] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l16;
		for (l16 = 0; l16 < 2; l16 = l16 + 1) {
			dsp->fVec6[l16] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l17;
		for (l17 = 0; l17 < 2; l17 = l17 + 1) {
			dsp->fRec15[l17] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l18;
		for (l18 = 0; l18 < 2; l18 = l18 + 1) {
			dsp->iRec16[l18] = 0;
		}
	}
	/* C99 loop */
	{
		int l19;
		for (l19 = 0; l19 < 2; l19 = l19 + 1) {
			dsp->fRec13[l19] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; l20 < 2; l20 = l20 + 1) {
			dsp->fRec12[l20] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; l21 < 2; l21 = l21 + 1) {
			dsp->fRec11[l21] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; l22 < 2; l22 = l22 + 1) {
			dsp->fRec10[l22] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l23;
		for (l23 = 0; l23 < 2; l23 = l23 + 1) {
			dsp->fRec9[l23] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l24;
		for (l24 = 0; l24 < 2; l24 = l24 + 1) {
			dsp->fRec17[l24] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; l25 < 2; l25 = l25 + 1) {
			dsp->fRec29[l25] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; l26 < 3; l26 = l26 + 1) {
			dsp->fRec28[l26] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; l27 < 2; l27 = l27 + 1) {
			dsp->fRec30[l27] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l28;
		for (l28 = 0; l28 < 256; l28 = l28 + 1) {
			dsp->fVec7[l28] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l29;
		for (l29 = 0; l29 < 2; l29 = l29 + 1) {
			dsp->fRec26[l29] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l30;
		for (l30 = 0; l30 < 128; l30 = l30 + 1) {
			dsp->fVec8[l30] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l31;
		for (l31 = 0; l31 < 2; l31 = l31 + 1) {
			dsp->fRec24[l31] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l32;
		for (l32 = 0; l32 < 2; l32 = l32 + 1) {
			dsp->fRec31[l32] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l33;
		for (l33 = 0; l33 < 512; l33 = l33 + 1) {
			dsp->fVec9[l33] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l34;
		for (l34 = 0; l34 < 2; l34 = l34 + 1) {
			dsp->fRec22[l34] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l35;
		for (l35 = 0; l35 < 512; l35 = l35 + 1) {
			dsp->fVec10[l35] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l36;
		for (l36 = 0; l36 < 2; l36 = l36 + 1) {
			dsp->fRec20[l36] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l37;
		for (l37 = 0; l37 < 2; l37 = l37 + 1) {
			dsp->fRec32[l37] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l38;
		for (l38 = 0; l38 < 2; l38 = l38 + 1) {
			dsp->fRec36[l38] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l39;
		for (l39 = 0; l39 < 2; l39 = l39 + 1) {
			dsp->fRec39[l39] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l40;
		for (l40 = 0; l40 < 1024; l40 = l40 + 1) {
			dsp->fVec11[l40] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l41;
		for (l41 = 0; l41 < 2; l41 = l41 + 1) {
			dsp->fRec37[l41] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l42;
		for (l42 = 0; l42 < 8192; l42 = l42 + 1) {
			dsp->fVec12[l42] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l43;
		for (l43 = 0; l43 < 2; l43 = l43 + 1) {
			dsp->fRec35[l43] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l44;
		for (l44 = 0; l44 < 2; l44 = l44 + 1) {
			dsp->fRec40[l44] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l45;
		for (l45 = 0; l45 < 4096; l45 = l45 + 1) {
			dsp->fVec13[l45] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l46;
		for (l46 = 0; l46 < 2; l46 = l46 + 1) {
			dsp->fRec33[l46] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l47;
		for (l47 = 0; l47 < 4096; l47 = l47 + 1) {
			dsp->fVec14[l47] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l48;
		for (l48 = 0; l48 < 2; l48 = l48 + 1) {
			dsp->fRec18[l48] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l49;
		for (l49 = 0; l49 < 1024; l49 = l49 + 1) {
			dsp->fVec15[l49] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l50;
		for (l50 = 0; l50 < 2; l50 = l50 + 1) {
			dsp->fRec44[l50] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l51;
		for (l51 = 0; l51 < 8192; l51 = l51 + 1) {
			dsp->fVec16[l51] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l52;
		for (l52 = 0; l52 < 2; l52 = l52 + 1) {
			dsp->fRec43[l52] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l53;
		for (l53 = 0; l53 < 2048; l53 = l53 + 1) {
			dsp->fVec17[l53] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l54;
		for (l54 = 0; l54 < 2; l54 = l54 + 1) {
			dsp->fRec41[l54] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l55;
		for (l55 = 0; l55 < 2048; l55 = l55 + 1) {
			dsp->fVec18[l55] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l56;
		for (l56 = 0; l56 < 2; l56 = l56 + 1) {
			dsp->fRec19[l56] = 0.0f;
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
	float fSlow16 = (float)(dsp->fHslider1);
	float fSlow17 = fSlow16 + fSlow3;
	float fSlow18 = 0.0f - 4.0f * fmaxf(0.0f, fminf((float)(dsp->fHslider2), 0.999999f));
	float fSlow19 = (float)(dsp->fEntry1);
	float fSlow20 = fmaxf(fSlow19, 23.44895f);
	float fSlow21 = fmaxf(2e+01f, fabsf(fSlow20));
	float fSlow22 = dsp->fConst3 / fSlow21;
	float fSlow23 = dsp->fConst4 * fSlow21;
	float fSlow24 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst5 / fSlow20));
	float fSlow25 = floorf(fSlow24);
	float fSlow26 = fSlow25 + (1.0f - fSlow24);
	int iSlow27 = (int)(fSlow24);
	float fSlow28 = fSlow24 - fSlow25;
	int iSlow29 = iSlow27 + 1;
	float fSlow30 = (float)(dsp->fButton1);
	int iSlow31 = fSlow30 == 0.0f;
	float fSlow32 = fSlow19 + fSlow16;
	float fSlow33 = dsp->fConst1 * (float)(dsp->fVslider1);
	float fSlow34 = dsp->fConst1 * (float)(dsp->fVslider2);
	float fSlow35 = dsp->fConst1 * (float)(dsp->fVslider3);
	float fSlow36 = dsp->fConst1 * (float)(dsp->fVslider4);
	float fSlow37 = dsp->fConst1 * (float)(dsp->fVslider5);
	float fSlow38 = dsp->fConst1 * (float)(dsp->fVslider6);
	float fSlow39 = dsp->fConst1 * (float)(dsp->fVslider7);
	float fSlow40 = dsp->fConst1 * (float)(dsp->fVslider8);
	float fSlow41 = 0.15f * fSlow1;
	/* C99 loop */
	{
		int i0;
		for (i0 = 0; i0 < count; i0 = i0 + 1) {
			dsp->iVec0[0] = 1;
			dsp->fRec0[0] = fSlow0 + dsp->fConst2 * dsp->fRec0[1];
			float fTemp0 = (float)(dsp->iVec0[1]);
			int iTemp1 = 1 - dsp->iVec0[1];
			float fTemp2 = ((iTemp1) ? 0.0f : fSlow7 + dsp->fRec6[1]);
			dsp->fRec6[0] = fTemp2 - floorf(fTemp2);
			float fTemp3 = mydsp_faustpower2_f(2.0f * dsp->fRec6[0] + -1.0f);
			dsp->fVec1[0] = fTemp3;
			float fTemp4 = fSlow6 * fTemp0 * (fTemp3 - dsp->fVec1[1]);
			dsp->fVec2[dsp->IOTA0 & 4095] = fTemp4;
			dsp->fVec3[0] = fSlow14;
			dsp->fRec7[0] = fSlow14 + dsp->fRec7[1] * (float)(dsp->fVec3[1] >= fSlow14);
			dsp->iRec8[0] = iSlow15 * (dsp->iRec8[1] + 1);
			float fTemp5 = (float)(dsp->iRec8[0]);
			float fTemp6 = fmaxf(0.0f, fminf(dsp->fConst6 * dsp->fRec7[0], 1.0f) - dsp->fConst7 * fTemp5);
			dsp->fVbargraph0 = (FAUSTFLOAT)(fTemp6);
			float fTemp7 = dsp->fConst8 * (fSlow17 + 3e+03f * fmaxf(0.0f, fminf(dsp->fConst9 * dsp->fRec7[0], 1.0f) - dsp->fConst10 * fTemp5));
			float fTemp8 = 1.0f - fTemp7;
			dsp->fRec5[0] = (fTemp4 - (fSlow10 * dsp->fVec2[(dsp->IOTA0 - iSlow11) & 4095] + fSlow12 * dsp->fVec2[(dsp->IOTA0 - iSlow13) & 4095])) * fTemp6 + fTemp8 * dsp->fRec5[1] + fSlow18 * dsp->fRec1[1];
			dsp->fRec4[0] = dsp->fRec5[0] + fTemp8 * dsp->fRec4[1];
			dsp->fRec3[0] = dsp->fRec4[0] + fTemp8 * dsp->fRec3[1];
			dsp->fRec2[0] = dsp->fRec3[0] + dsp->fRec2[1] * fTemp8;
			dsp->fRec1[0] = dsp->fRec2[0] * mydsp_faustpower4_f(fTemp7);
			float fTemp9 = ((iTemp1) ? 0.0f : fSlow23 + dsp->fRec14[1]);
			dsp->fRec14[0] = fTemp9 - floorf(fTemp9);
			float fTemp10 = mydsp_faustpower2_f(2.0f * dsp->fRec14[0] + -1.0f);
			dsp->fVec4[0] = fTemp10;
			float fTemp11 = fSlow22 * fTemp0 * (fTemp10 - dsp->fVec4[1]);
			dsp->fVec5[dsp->IOTA0 & 4095] = fTemp11;
			dsp->fVec6[0] = fSlow30;
			dsp->fRec15[0] = fSlow30 + dsp->fRec15[1] * (float)(dsp->fVec6[1] >= fSlow30);
			dsp->iRec16[0] = iSlow31 * (dsp->iRec16[1] + 1);
			float fTemp12 = (float)(dsp->iRec16[0]);
			float fTemp13 = fmaxf(0.0f, fminf(dsp->fConst6 * dsp->fRec15[0], 1.0f) - dsp->fConst7 * fTemp12);
			dsp->fVbargraph1 = (FAUSTFLOAT)(fTemp13);
			float fTemp14 = dsp->fConst8 * (fSlow32 + 3e+03f * fmaxf(0.0f, fminf(dsp->fConst9 * dsp->fRec15[0], 1.0f) - dsp->fConst10 * fTemp12));
			float fTemp15 = 1.0f - fTemp14;
			dsp->fRec13[0] = (fTemp11 - (fSlow26 * dsp->fVec5[(dsp->IOTA0 - iSlow27) & 4095] + fSlow28 * dsp->fVec5[(dsp->IOTA0 - iSlow29) & 4095])) * fTemp13 + fTemp15 * dsp->fRec13[1] + fSlow18 * dsp->fRec9[1];
			dsp->fRec12[0] = dsp->fRec13[0] + fTemp15 * dsp->fRec12[1];
			dsp->fRec11[0] = dsp->fRec12[0] + fTemp15 * dsp->fRec11[1];
			dsp->fRec10[0] = dsp->fRec11[0] + dsp->fRec10[1] * fTemp15;
			dsp->fRec9[0] = dsp->fRec10[0] * mydsp_faustpower4_f(fTemp14);
			float fTemp16 = dsp->fRec1[0] + dsp->fRec9[0];
			dsp->fRec17[0] = fSlow33 + dsp->fConst2 * dsp->fRec17[1];
			float fTemp17 = dsp->fRec17[0] + 1.0f;
			float fTemp18 = fSlow2 * fTemp16 * (1.0f - 0.5f * fTemp17);
			dsp->fRec29[0] = fSlow34 + dsp->fConst2 * dsp->fRec29[1];
			dsp->fRec28[0] = (1.0f - dsp->fRec29[0]) * dsp->fRec28[2] + fSlow2 * fTemp16 * dsp->fRec29[0];
			dsp->fRec30[0] = fSlow35 + dsp->fConst2 * dsp->fRec30[1];
			float fTemp19 = dsp->fRec28[0] - dsp->fRec30[0] * dsp->fRec26[1];
			dsp->fVec7[dsp->IOTA0 & 255] = fTemp19;
			dsp->fRec26[0] = dsp->fVec7[(dsp->IOTA0 - 142) & 255];
			float fRec27 = dsp->fRec30[0] * fTemp19;
			float fTemp20 = fRec27 + dsp->fRec26[1] - dsp->fRec30[0] * dsp->fRec24[1];
			dsp->fVec8[dsp->IOTA0 & 127] = fTemp20;
			dsp->fRec24[0] = dsp->fVec8[(dsp->IOTA0 - 107) & 127];
			float fRec25 = dsp->fRec30[0] * fTemp20;
			dsp->fRec31[0] = fSlow36 + dsp->fConst2 * dsp->fRec31[1];
			float fTemp21 = fRec25 + dsp->fRec24[1] - dsp->fRec31[0] * dsp->fRec22[1];
			dsp->fVec9[dsp->IOTA0 & 511] = fTemp21;
			dsp->fRec22[0] = dsp->fVec9[(dsp->IOTA0 - 379) & 511];
			float fRec23 = dsp->fRec31[0] * fTemp21;
			float fTemp22 = fRec23 + dsp->fRec22[1] - dsp->fRec31[0] * dsp->fRec20[1];
			dsp->fVec10[dsp->IOTA0 & 511] = fTemp22;
			dsp->fRec20[0] = dsp->fVec10[(dsp->IOTA0 - 277) & 511];
			float fRec21 = dsp->fRec31[0] * fTemp22;
			dsp->fRec32[0] = fSlow37 + dsp->fConst2 * dsp->fRec32[1];
			dsp->fRec36[0] = fSlow38 + dsp->fConst2 * dsp->fRec36[1];
			float fTemp23 = 1.0f - dsp->fRec36[0];
			dsp->fRec39[0] = fSlow39 + dsp->fConst2 * dsp->fRec39[1];
			float fTemp24 = dsp->fRec39[0] * dsp->fRec37[1] + dsp->fRec19[1];
			dsp->fVec11[dsp->IOTA0 & 1023] = fTemp24;
			dsp->fRec37[0] = dsp->fVec11[(dsp->IOTA0 - 908) & 1023];
			float fRec38 = 0.0f - dsp->fRec39[0] * fTemp24;
			dsp->fVec12[dsp->IOTA0 & 8191] = fRec38 + dsp->fRec37[1];
			dsp->fRec35[0] = dsp->fRec36[0] * dsp->fRec35[1] + fTemp23 * dsp->fVec12[(dsp->IOTA0 - 4217) & 8191];
			dsp->fRec40[0] = fSlow40 + dsp->fConst2 * dsp->fRec40[1];
			float fTemp25 = dsp->fRec35[0] * dsp->fRec32[0] - dsp->fRec40[0] * dsp->fRec33[1];
			dsp->fVec13[dsp->IOTA0 & 4095] = fTemp25;
			dsp->fRec33[0] = dsp->fVec13[(dsp->IOTA0 - 2656) & 4095];
			float fRec34 = dsp->fRec40[0] * fTemp25;
			dsp->fVec14[dsp->IOTA0 & 4095] = fRec34 + dsp->fRec33[1];
			dsp->fRec18[0] = dsp->fRec20[1] + fRec21 + dsp->fRec32[0] * dsp->fVec14[(dsp->IOTA0 - 2656) & 4095];
			float fTemp26 = dsp->fRec39[0] * dsp->fRec44[1] + dsp->fRec18[1];
			dsp->fVec15[dsp->IOTA0 & 1023] = fTemp26;
			dsp->fRec44[0] = dsp->fVec15[(dsp->IOTA0 - 672) & 1023];
			float fRec45 = 0.0f - dsp->fRec39[0] * fTemp26;
			dsp->fVec16[dsp->IOTA0 & 8191] = fRec45 + dsp->fRec44[1];
			dsp->fRec43[0] = dsp->fRec36[0] * dsp->fRec43[1] + fTemp23 * dsp->fVec16[(dsp->IOTA0 - 4453) & 8191];
			float fTemp27 = dsp->fRec32[0] * dsp->fRec43[0] - dsp->fRec40[0] * dsp->fRec41[1];
			dsp->fVec17[dsp->IOTA0 & 2047] = fTemp27;
			dsp->fRec41[0] = dsp->fVec17[(dsp->IOTA0 - 1800) & 2047];
			float fRec42 = dsp->fRec40[0] * fTemp27;
			dsp->fVec18[dsp->IOTA0 & 2047] = fRec42 + dsp->fRec41[1];
			dsp->fRec19[0] = dsp->fRec20[1] + fRec21 + dsp->fRec32[0] * dsp->fVec18[(dsp->IOTA0 - 1800) & 2047];
			float fTemp28 = fSlow41 * fTemp16;
			output0[i0] = (FAUSTFLOAT)(dsp->fRec0[0] * (fTemp18 + 0.5f * fTemp17 * dsp->fRec18[0]) + fTemp28);
			output1[i0] = (FAUSTFLOAT)(fTemp28 + dsp->fRec0[0] * (fTemp18 + 0.5f * fTemp17 * dsp->fRec19[0]));
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
			dsp->fRec14[1] = dsp->fRec14[0];
			dsp->fVec4[1] = dsp->fVec4[0];
			dsp->fVec6[1] = dsp->fVec6[0];
			dsp->fRec15[1] = dsp->fRec15[0];
			dsp->iRec16[1] = dsp->iRec16[0];
			dsp->fRec13[1] = dsp->fRec13[0];
			dsp->fRec12[1] = dsp->fRec12[0];
			dsp->fRec11[1] = dsp->fRec11[0];
			dsp->fRec10[1] = dsp->fRec10[0];
			dsp->fRec9[1] = dsp->fRec9[0];
			dsp->fRec17[1] = dsp->fRec17[0];
			dsp->fRec29[1] = dsp->fRec29[0];
			dsp->fRec28[2] = dsp->fRec28[1];
			dsp->fRec28[1] = dsp->fRec28[0];
			dsp->fRec30[1] = dsp->fRec30[0];
			dsp->fRec26[1] = dsp->fRec26[0];
			dsp->fRec24[1] = dsp->fRec24[0];
			dsp->fRec31[1] = dsp->fRec31[0];
			dsp->fRec22[1] = dsp->fRec22[0];
			dsp->fRec20[1] = dsp->fRec20[0];
			dsp->fRec32[1] = dsp->fRec32[0];
			dsp->fRec36[1] = dsp->fRec36[0];
			dsp->fRec39[1] = dsp->fRec39[0];
			dsp->fRec37[1] = dsp->fRec37[0];
			dsp->fRec35[1] = dsp->fRec35[0];
			dsp->fRec40[1] = dsp->fRec40[0];
			dsp->fRec33[1] = dsp->fRec33[0];
			dsp->fRec18[1] = dsp->fRec18[0];
			dsp->fRec44[1] = dsp->fRec44[0];
			dsp->fRec43[1] = dsp->fRec43[0];
			dsp->fRec41[1] = dsp->fRec41[0];
			dsp->fRec19[1] = dsp->fRec19[0];
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
