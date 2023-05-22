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
	FAUSTFLOAT fHslider0;
	float fRec6[2];
	float fRec5[2];
	float fVec1[2];
	int IOTA0;
	float fVec2[4096];
	float fConst3;
	float fConst4;
	FAUSTFLOAT fButton0;
	float fVec3[2];
	float fRec7[2];
	float fConst5;
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
	FAUSTFLOAT fHslider3;
	float fRec18[2];
	float fRec17[2];
	float fVec10[2];
	float fVec11[4096];
	FAUSTFLOAT fButton3;
	float fVec12[2];
	float fRec19[2];
	int iRec20[2];
	FAUSTFLOAT fVbargraph3;
	FAUSTFLOAT fHslider4;
	float fRec22[2];
	float fRec21[2];
	float fVec13[2];
	float fVec14[4096];
	FAUSTFLOAT fButton4;
	float fVec15[2];
	float fRec23[2];
	int iRec24[2];
	FAUSTFLOAT fVbargraph4;
	FAUSTFLOAT fHslider5;
	float fRec26[2];
	float fRec25[2];
	float fVec16[2];
	float fVec17[4096];
	FAUSTFLOAT fButton5;
	float fVec18[2];
	float fRec27[2];
	int iRec28[2];
	FAUSTFLOAT fVbargraph5;
	FAUSTFLOAT fHslider6;
	float fRec30[2];
	float fRec29[2];
	float fVec19[2];
	float fVec20[4096];
	FAUSTFLOAT fButton6;
	float fVec21[2];
	float fRec31[2];
	int iRec32[2];
	FAUSTFLOAT fVbargraph6;
	FAUSTFLOAT fHslider7;
	float fRec34[2];
	float fRec33[2];
	float fVec22[2];
	float fVec23[4096];
	FAUSTFLOAT fButton7;
	float fVec24[2];
	float fRec35[2];
	int iRec36[2];
	FAUSTFLOAT fVbargraph7;
	float fConst6;
	float fConst7;
	FAUSTFLOAT fHslider8;
	float fConst8;
	float fRec37[2];
	FAUSTFLOAT fHslider9;
	float fRec38[2];
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
	dsp->fHslider3 = (FAUSTFLOAT)(1e+03f);
	dsp->fButton3 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider4 = (FAUSTFLOAT)(1e+03f);
	dsp->fButton4 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider5 = (FAUSTFLOAT)(1e+03f);
	dsp->fButton5 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider6 = (FAUSTFLOAT)(1e+03f);
	dsp->fButton6 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider7 = (FAUSTFLOAT)(1e+03f);
	dsp->fButton7 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider8 = (FAUSTFLOAT)(1e+03f);
	dsp->fHslider9 = (FAUSTFLOAT)(0.0f);
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
			dsp->fRec18[l22] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l23;
		for (l23 = 0; l23 < 2; l23 = l23 + 1) {
			dsp->fRec17[l23] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l24;
		for (l24 = 0; l24 < 2; l24 = l24 + 1) {
			dsp->fVec10[l24] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; l25 < 4096; l25 = l25 + 1) {
			dsp->fVec11[l25] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; l26 < 2; l26 = l26 + 1) {
			dsp->fVec12[l26] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; l27 < 2; l27 = l27 + 1) {
			dsp->fRec19[l27] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l28;
		for (l28 = 0; l28 < 2; l28 = l28 + 1) {
			dsp->iRec20[l28] = 0;
		}
	}
	/* C99 loop */
	{
		int l29;
		for (l29 = 0; l29 < 2; l29 = l29 + 1) {
			dsp->fRec22[l29] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l30;
		for (l30 = 0; l30 < 2; l30 = l30 + 1) {
			dsp->fRec21[l30] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l31;
		for (l31 = 0; l31 < 2; l31 = l31 + 1) {
			dsp->fVec13[l31] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l32;
		for (l32 = 0; l32 < 4096; l32 = l32 + 1) {
			dsp->fVec14[l32] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l33;
		for (l33 = 0; l33 < 2; l33 = l33 + 1) {
			dsp->fVec15[l33] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l34;
		for (l34 = 0; l34 < 2; l34 = l34 + 1) {
			dsp->fRec23[l34] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l35;
		for (l35 = 0; l35 < 2; l35 = l35 + 1) {
			dsp->iRec24[l35] = 0;
		}
	}
	/* C99 loop */
	{
		int l36;
		for (l36 = 0; l36 < 2; l36 = l36 + 1) {
			dsp->fRec26[l36] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l37;
		for (l37 = 0; l37 < 2; l37 = l37 + 1) {
			dsp->fRec25[l37] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l38;
		for (l38 = 0; l38 < 2; l38 = l38 + 1) {
			dsp->fVec16[l38] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l39;
		for (l39 = 0; l39 < 4096; l39 = l39 + 1) {
			dsp->fVec17[l39] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l40;
		for (l40 = 0; l40 < 2; l40 = l40 + 1) {
			dsp->fVec18[l40] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l41;
		for (l41 = 0; l41 < 2; l41 = l41 + 1) {
			dsp->fRec27[l41] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l42;
		for (l42 = 0; l42 < 2; l42 = l42 + 1) {
			dsp->iRec28[l42] = 0;
		}
	}
	/* C99 loop */
	{
		int l43;
		for (l43 = 0; l43 < 2; l43 = l43 + 1) {
			dsp->fRec30[l43] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l44;
		for (l44 = 0; l44 < 2; l44 = l44 + 1) {
			dsp->fRec29[l44] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l45;
		for (l45 = 0; l45 < 2; l45 = l45 + 1) {
			dsp->fVec19[l45] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l46;
		for (l46 = 0; l46 < 4096; l46 = l46 + 1) {
			dsp->fVec20[l46] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l47;
		for (l47 = 0; l47 < 2; l47 = l47 + 1) {
			dsp->fVec21[l47] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l48;
		for (l48 = 0; l48 < 2; l48 = l48 + 1) {
			dsp->fRec31[l48] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l49;
		for (l49 = 0; l49 < 2; l49 = l49 + 1) {
			dsp->iRec32[l49] = 0;
		}
	}
	/* C99 loop */
	{
		int l50;
		for (l50 = 0; l50 < 2; l50 = l50 + 1) {
			dsp->fRec34[l50] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l51;
		for (l51 = 0; l51 < 2; l51 = l51 + 1) {
			dsp->fRec33[l51] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l52;
		for (l52 = 0; l52 < 2; l52 = l52 + 1) {
			dsp->fVec22[l52] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l53;
		for (l53 = 0; l53 < 4096; l53 = l53 + 1) {
			dsp->fVec23[l53] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l54;
		for (l54 = 0; l54 < 2; l54 = l54 + 1) {
			dsp->fVec24[l54] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l55;
		for (l55 = 0; l55 < 2; l55 = l55 + 1) {
			dsp->fRec35[l55] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l56;
		for (l56 = 0; l56 < 2; l56 = l56 + 1) {
			dsp->iRec36[l56] = 0;
		}
	}
	/* C99 loop */
	{
		int l57;
		for (l57 = 0; l57 < 2; l57 = l57 + 1) {
			dsp->fRec37[l57] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l58;
		for (l58 = 0; l58 < 2; l58 = l58 + 1) {
			dsp->fRec38[l58] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l59;
		for (l59 = 0; l59 < 2; l59 = l59 + 1) {
			dsp->fRec4[l59] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l60;
		for (l60 = 0; l60 < 2; l60 = l60 + 1) {
			dsp->fRec3[l60] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l61;
		for (l61 = 0; l61 < 2; l61 = l61 + 1) {
			dsp->fRec2[l61] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l62;
		for (l62 = 0; l62 < 2; l62 = l62 + 1) {
			dsp->fRec1[l62] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l63;
		for (l63 = 0; l63 < 2; l63 = l63 + 1) {
			dsp->fRec0[l63] = 0.0f;
		}
	}
}

void instanceConstantsmydsp(mydsp* dsp, int sample_rate) {
	dsp->fSampleRate = sample_rate;
	float fConst0 = fminf(1.92e+05f, fmaxf(1.0f, (float)(dsp->fSampleRate)));
	dsp->fConst1 = 0.25f * fConst0;
	dsp->fConst2 = 1.0f / fConst0;
	dsp->fConst3 = 0.5f * fConst0;
	dsp->fConst4 = 1.0f / fmaxf(1.0f, 0.2f * fConst0);
	dsp->fConst5 = 1.0f / fmaxf(1.0f, 2.0f * fConst0);
	dsp->fConst6 = 6.2831855f / fConst0;
	dsp->fConst7 = 44.1f / fConst0;
	dsp->fConst8 = 1.0f - dsp->fConst7;
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
	float fSlow0 = 0.9f * (float)(dsp->fHslider0);
	float fSlow1 = (float)(dsp->fButton0);
	int iSlow2 = fSlow1 == 0.0f;
	float fSlow3 = 0.9f * (float)(dsp->fHslider1);
	float fSlow4 = (float)(dsp->fButton1);
	int iSlow5 = fSlow4 == 0.0f;
	float fSlow6 = 0.9f * (float)(dsp->fHslider2);
	float fSlow7 = (float)(dsp->fButton2);
	int iSlow8 = fSlow7 == 0.0f;
	float fSlow9 = 0.9f * (float)(dsp->fHslider3);
	float fSlow10 = (float)(dsp->fButton3);
	int iSlow11 = fSlow10 == 0.0f;
	float fSlow12 = 0.9f * (float)(dsp->fHslider4);
	float fSlow13 = (float)(dsp->fButton4);
	int iSlow14 = fSlow13 == 0.0f;
	float fSlow15 = 0.9f * (float)(dsp->fHslider5);
	float fSlow16 = (float)(dsp->fButton5);
	int iSlow17 = fSlow16 == 0.0f;
	float fSlow18 = 0.9f * (float)(dsp->fHslider6);
	float fSlow19 = (float)(dsp->fButton6);
	int iSlow20 = fSlow19 == 0.0f;
	float fSlow21 = 0.9f * (float)(dsp->fHslider7);
	float fSlow22 = (float)(dsp->fButton7);
	int iSlow23 = fSlow22 == 0.0f;
	float fSlow24 = dsp->fConst7 * (float)(dsp->fHslider8);
	float fSlow25 = dsp->fConst7 * (float)(dsp->fHslider9);
	/* C99 loop */
	{
		int i0;
		for (i0 = 0; i0 < count; i0 = i0 + 1) {
			dsp->iVec0[0] = 1;
			float fTemp0 = (float)(dsp->iVec0[1]);
			int iTemp1 = 1 - dsp->iVec0[1];
			dsp->fRec6[0] = fSlow0 + 0.1f * dsp->fRec6[1];
			float fTemp2 = fmaxf(dsp->fRec6[0], 23.44895f);
			float fTemp3 = fmaxf(2e+01f, fabsf(fTemp2));
			float fTemp4 = ((iTemp1) ? 0.0f : dsp->fRec5[1] + dsp->fConst2 * fTemp3);
			dsp->fRec5[0] = fTemp4 - floorf(fTemp4);
			float fTemp5 = mydsp_faustpower2_f(2.0f * dsp->fRec5[0] + -1.0f);
			dsp->fVec1[0] = fTemp5;
			float fTemp6 = fTemp0 * (fTemp5 - dsp->fVec1[1]) / fTemp3;
			dsp->fVec2[dsp->IOTA0 & 4095] = fTemp6;
			float fTemp7 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst3 / fTemp2));
			int iTemp8 = (int)(fTemp7);
			float fTemp9 = floorf(fTemp7);
			dsp->fVec3[0] = fSlow1;
			dsp->fRec7[0] = fSlow1 + dsp->fRec7[1] * (float)(dsp->fVec3[1] >= fSlow1);
			dsp->iRec8[0] = iSlow2 * (dsp->iRec8[1] + 1);
			float fTemp10 = fmaxf(0.0f, fminf(dsp->fConst4 * dsp->fRec7[0], 1.0f) - dsp->fConst5 * (float)(dsp->iRec8[0]));
			dsp->fVbargraph0 = (FAUSTFLOAT)(fTemp10);
			dsp->fRec10[0] = fSlow3 + 0.1f * dsp->fRec10[1];
			float fTemp11 = fmaxf(dsp->fRec10[0], 23.44895f);
			float fTemp12 = fmaxf(2e+01f, fabsf(fTemp11));
			float fTemp13 = ((iTemp1) ? 0.0f : dsp->fRec9[1] + dsp->fConst2 * fTemp12);
			dsp->fRec9[0] = fTemp13 - floorf(fTemp13);
			float fTemp14 = mydsp_faustpower2_f(2.0f * dsp->fRec9[0] + -1.0f);
			dsp->fVec4[0] = fTemp14;
			float fTemp15 = fTemp0 * (fTemp14 - dsp->fVec4[1]) / fTemp12;
			dsp->fVec5[dsp->IOTA0 & 4095] = fTemp15;
			float fTemp16 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst3 / fTemp11));
			int iTemp17 = (int)(fTemp16);
			float fTemp18 = floorf(fTemp16);
			dsp->fVec6[0] = fSlow4;
			dsp->fRec11[0] = fSlow4 + dsp->fRec11[1] * (float)(dsp->fVec6[1] >= fSlow4);
			dsp->iRec12[0] = iSlow5 * (dsp->iRec12[1] + 1);
			float fTemp19 = fmaxf(0.0f, fminf(dsp->fConst4 * dsp->fRec11[0], 1.0f) - dsp->fConst5 * (float)(dsp->iRec12[0]));
			dsp->fVbargraph1 = (FAUSTFLOAT)(fTemp19);
			dsp->fRec14[0] = fSlow6 + 0.1f * dsp->fRec14[1];
			float fTemp20 = fmaxf(dsp->fRec14[0], 23.44895f);
			float fTemp21 = fmaxf(2e+01f, fabsf(fTemp20));
			float fTemp22 = ((iTemp1) ? 0.0f : dsp->fRec13[1] + dsp->fConst2 * fTemp21);
			dsp->fRec13[0] = fTemp22 - floorf(fTemp22);
			float fTemp23 = mydsp_faustpower2_f(2.0f * dsp->fRec13[0] + -1.0f);
			dsp->fVec7[0] = fTemp23;
			float fTemp24 = fTemp0 * (fTemp23 - dsp->fVec7[1]) / fTemp21;
			dsp->fVec8[dsp->IOTA0 & 4095] = fTemp24;
			float fTemp25 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst3 / fTemp20));
			int iTemp26 = (int)(fTemp25);
			float fTemp27 = floorf(fTemp25);
			dsp->fVec9[0] = fSlow7;
			dsp->fRec15[0] = fSlow7 + dsp->fRec15[1] * (float)(dsp->fVec9[1] >= fSlow7);
			dsp->iRec16[0] = iSlow8 * (dsp->iRec16[1] + 1);
			float fTemp28 = fmaxf(0.0f, fminf(dsp->fConst4 * dsp->fRec15[0], 1.0f) - dsp->fConst5 * (float)(dsp->iRec16[0]));
			dsp->fVbargraph2 = (FAUSTFLOAT)(fTemp28);
			dsp->fRec18[0] = fSlow9 + 0.1f * dsp->fRec18[1];
			float fTemp29 = fmaxf(dsp->fRec18[0], 23.44895f);
			float fTemp30 = fmaxf(2e+01f, fabsf(fTemp29));
			float fTemp31 = ((iTemp1) ? 0.0f : dsp->fRec17[1] + dsp->fConst2 * fTemp30);
			dsp->fRec17[0] = fTemp31 - floorf(fTemp31);
			float fTemp32 = mydsp_faustpower2_f(2.0f * dsp->fRec17[0] + -1.0f);
			dsp->fVec10[0] = fTemp32;
			float fTemp33 = fTemp0 * (fTemp32 - dsp->fVec10[1]) / fTemp30;
			dsp->fVec11[dsp->IOTA0 & 4095] = fTemp33;
			float fTemp34 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst3 / fTemp29));
			int iTemp35 = (int)(fTemp34);
			float fTemp36 = floorf(fTemp34);
			dsp->fVec12[0] = fSlow10;
			dsp->fRec19[0] = fSlow10 + dsp->fRec19[1] * (float)(dsp->fVec12[1] >= fSlow10);
			dsp->iRec20[0] = iSlow11 * (dsp->iRec20[1] + 1);
			float fTemp37 = fmaxf(0.0f, fminf(dsp->fConst4 * dsp->fRec19[0], 1.0f) - dsp->fConst5 * (float)(dsp->iRec20[0]));
			dsp->fVbargraph3 = (FAUSTFLOAT)(fTemp37);
			dsp->fRec22[0] = fSlow12 + 0.1f * dsp->fRec22[1];
			float fTemp38 = fmaxf(dsp->fRec22[0], 23.44895f);
			float fTemp39 = fmaxf(2e+01f, fabsf(fTemp38));
			float fTemp40 = ((iTemp1) ? 0.0f : dsp->fRec21[1] + dsp->fConst2 * fTemp39);
			dsp->fRec21[0] = fTemp40 - floorf(fTemp40);
			float fTemp41 = mydsp_faustpower2_f(2.0f * dsp->fRec21[0] + -1.0f);
			dsp->fVec13[0] = fTemp41;
			float fTemp42 = fTemp0 * (fTemp41 - dsp->fVec13[1]) / fTemp39;
			dsp->fVec14[dsp->IOTA0 & 4095] = fTemp42;
			float fTemp43 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst3 / fTemp38));
			int iTemp44 = (int)(fTemp43);
			float fTemp45 = floorf(fTemp43);
			dsp->fVec15[0] = fSlow13;
			dsp->fRec23[0] = fSlow13 + dsp->fRec23[1] * (float)(dsp->fVec15[1] >= fSlow13);
			dsp->iRec24[0] = iSlow14 * (dsp->iRec24[1] + 1);
			float fTemp46 = fmaxf(0.0f, fminf(dsp->fConst4 * dsp->fRec23[0], 1.0f) - dsp->fConst5 * (float)(dsp->iRec24[0]));
			dsp->fVbargraph4 = (FAUSTFLOAT)(fTemp46);
			dsp->fRec26[0] = fSlow15 + 0.1f * dsp->fRec26[1];
			float fTemp47 = fmaxf(dsp->fRec26[0], 23.44895f);
			float fTemp48 = fmaxf(2e+01f, fabsf(fTemp47));
			float fTemp49 = ((iTemp1) ? 0.0f : dsp->fRec25[1] + dsp->fConst2 * fTemp48);
			dsp->fRec25[0] = fTemp49 - floorf(fTemp49);
			float fTemp50 = mydsp_faustpower2_f(2.0f * dsp->fRec25[0] + -1.0f);
			dsp->fVec16[0] = fTemp50;
			float fTemp51 = fTemp0 * (fTemp50 - dsp->fVec16[1]) / fTemp48;
			dsp->fVec17[dsp->IOTA0 & 4095] = fTemp51;
			float fTemp52 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst3 / fTemp47));
			int iTemp53 = (int)(fTemp52);
			float fTemp54 = floorf(fTemp52);
			dsp->fVec18[0] = fSlow16;
			dsp->fRec27[0] = fSlow16 + dsp->fRec27[1] * (float)(dsp->fVec18[1] >= fSlow16);
			dsp->iRec28[0] = iSlow17 * (dsp->iRec28[1] + 1);
			float fTemp55 = fmaxf(0.0f, fminf(dsp->fConst4 * dsp->fRec27[0], 1.0f) - dsp->fConst5 * (float)(dsp->iRec28[0]));
			dsp->fVbargraph5 = (FAUSTFLOAT)(fTemp55);
			dsp->fRec30[0] = fSlow18 + 0.1f * dsp->fRec30[1];
			float fTemp56 = fmaxf(dsp->fRec30[0], 23.44895f);
			float fTemp57 = fmaxf(2e+01f, fabsf(fTemp56));
			float fTemp58 = ((iTemp1) ? 0.0f : dsp->fRec29[1] + dsp->fConst2 * fTemp57);
			dsp->fRec29[0] = fTemp58 - floorf(fTemp58);
			float fTemp59 = mydsp_faustpower2_f(2.0f * dsp->fRec29[0] + -1.0f);
			dsp->fVec19[0] = fTemp59;
			float fTemp60 = fTemp0 * (fTemp59 - dsp->fVec19[1]) / fTemp57;
			dsp->fVec20[dsp->IOTA0 & 4095] = fTemp60;
			float fTemp61 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst3 / fTemp56));
			int iTemp62 = (int)(fTemp61);
			float fTemp63 = floorf(fTemp61);
			dsp->fVec21[0] = fSlow19;
			dsp->fRec31[0] = fSlow19 + dsp->fRec31[1] * (float)(dsp->fVec21[1] >= fSlow19);
			dsp->iRec32[0] = iSlow20 * (dsp->iRec32[1] + 1);
			float fTemp64 = fmaxf(0.0f, fminf(dsp->fConst4 * dsp->fRec31[0], 1.0f) - dsp->fConst5 * (float)(dsp->iRec32[0]));
			dsp->fVbargraph6 = (FAUSTFLOAT)(fTemp64);
			dsp->fRec34[0] = fSlow21 + 0.1f * dsp->fRec34[1];
			float fTemp65 = fmaxf(dsp->fRec34[0], 23.44895f);
			float fTemp66 = fmaxf(2e+01f, fabsf(fTemp65));
			float fTemp67 = ((iTemp1) ? 0.0f : dsp->fRec33[1] + dsp->fConst2 * fTemp66);
			dsp->fRec33[0] = fTemp67 - floorf(fTemp67);
			float fTemp68 = mydsp_faustpower2_f(2.0f * dsp->fRec33[0] + -1.0f);
			dsp->fVec22[0] = fTemp68;
			float fTemp69 = fTemp0 * (fTemp68 - dsp->fVec22[1]) / fTemp66;
			dsp->fVec23[dsp->IOTA0 & 4095] = fTemp69;
			float fTemp70 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst3 / fTemp65));
			int iTemp71 = (int)(fTemp70);
			float fTemp72 = floorf(fTemp70);
			dsp->fVec24[0] = fSlow22;
			dsp->fRec35[0] = fSlow22 + dsp->fRec35[1] * (float)(dsp->fVec24[1] >= fSlow22);
			dsp->iRec36[0] = iSlow23 * (dsp->iRec36[1] + 1);
			float fTemp73 = fmaxf(0.0f, fminf(dsp->fConst4 * dsp->fRec35[0], 1.0f) - dsp->fConst5 * (float)(dsp->iRec36[0]));
			dsp->fVbargraph7 = (FAUSTFLOAT)(fTemp73);
			dsp->fRec37[0] = fSlow24 + dsp->fConst8 * dsp->fRec37[1];
			float fTemp74 = dsp->fConst6 * dsp->fRec37[0];
			float fTemp75 = 1.0f - fTemp74;
			dsp->fRec38[0] = fSlow25 + dsp->fConst8 * dsp->fRec38[1];
			dsp->fRec4[0] = dsp->fConst1 * ((fTemp6 - dsp->fVec2[(dsp->IOTA0 - iTemp8) & 4095] * (fTemp9 + (1.0f - fTemp7)) - (fTemp7 - fTemp9) * dsp->fVec2[(dsp->IOTA0 - (iTemp8 + 1)) & 4095]) * fTemp10 + (fTemp15 - dsp->fVec5[(dsp->IOTA0 - iTemp17) & 4095] * (fTemp18 + (1.0f - fTemp16)) - (fTemp16 - fTemp18) * dsp->fVec5[(dsp->IOTA0 - (iTemp17 + 1)) & 4095]) * fTemp19 + (fTemp24 - dsp->fVec8[(dsp->IOTA0 - iTemp26) & 4095] * (fTemp27 + (1.0f - fTemp25)) - (fTemp25 - fTemp27) * dsp->fVec8[(dsp->IOTA0 - (iTemp26 + 1)) & 4095]) * fTemp28 + (fTemp33 - dsp->fVec11[(dsp->IOTA0 - iTemp35) & 4095] * (fTemp36 + (1.0f - fTemp34)) - (fTemp34 - fTemp36) * dsp->fVec11[(dsp->IOTA0 - (iTemp35 + 1)) & 4095]) * fTemp37 + (fTemp42 - dsp->fVec14[(dsp->IOTA0 - iTemp44) & 4095] * (fTemp45 + (1.0f - fTemp43)) - (fTemp43 - fTemp45) * dsp->fVec14[(dsp->IOTA0 - (iTemp44 + 1)) & 4095]) * fTemp46 + (fTemp51 - dsp->fVec17[(dsp->IOTA0 - iTemp53) & 4095] * (fTemp54 + (1.0f - fTemp52)) - (fTemp52 - fTemp54) * dsp->fVec17[(dsp->IOTA0 - (iTemp53 + 1)) & 4095]) * fTemp55 + (fTemp60 - dsp->fVec20[(dsp->IOTA0 - iTemp62) & 4095] * (fTemp63 + (1.0f - fTemp61)) - (fTemp61 - fTemp63) * dsp->fVec20[(dsp->IOTA0 - (iTemp62 + 1)) & 4095]) * fTemp64 + (fTemp69 - dsp->fVec23[(dsp->IOTA0 - iTemp71) & 4095] * (fTemp72 + (1.0f - fTemp70)) - (fTemp70 - fTemp72) * dsp->fVec23[(dsp->IOTA0 - (iTemp71 + 1)) & 4095]) * fTemp73) + fTemp75 * dsp->fRec4[1] + dsp->fRec0[1] * (0.0f - 4.0f * fmaxf(0.0f, fminf(dsp->fRec38[0], 0.999999f)));
			dsp->fRec3[0] = dsp->fRec4[0] + fTemp75 * dsp->fRec3[1];
			dsp->fRec2[0] = dsp->fRec3[0] + fTemp75 * dsp->fRec2[1];
			dsp->fRec1[0] = dsp->fRec2[0] + dsp->fRec1[1] * fTemp75;
			dsp->fRec0[0] = dsp->fRec1[0] * mydsp_faustpower4_f(fTemp74);
			output0[i0] = (FAUSTFLOAT)(0.1f * dsp->fRec0[0]);
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
			dsp->fRec18[1] = dsp->fRec18[0];
			dsp->fRec17[1] = dsp->fRec17[0];
			dsp->fVec10[1] = dsp->fVec10[0];
			dsp->fVec12[1] = dsp->fVec12[0];
			dsp->fRec19[1] = dsp->fRec19[0];
			dsp->iRec20[1] = dsp->iRec20[0];
			dsp->fRec22[1] = dsp->fRec22[0];
			dsp->fRec21[1] = dsp->fRec21[0];
			dsp->fVec13[1] = dsp->fVec13[0];
			dsp->fVec15[1] = dsp->fVec15[0];
			dsp->fRec23[1] = dsp->fRec23[0];
			dsp->iRec24[1] = dsp->iRec24[0];
			dsp->fRec26[1] = dsp->fRec26[0];
			dsp->fRec25[1] = dsp->fRec25[0];
			dsp->fVec16[1] = dsp->fVec16[0];
			dsp->fVec18[1] = dsp->fVec18[0];
			dsp->fRec27[1] = dsp->fRec27[0];
			dsp->iRec28[1] = dsp->iRec28[0];
			dsp->fRec30[1] = dsp->fRec30[0];
			dsp->fRec29[1] = dsp->fRec29[0];
			dsp->fVec19[1] = dsp->fVec19[0];
			dsp->fVec21[1] = dsp->fVec21[0];
			dsp->fRec31[1] = dsp->fRec31[0];
			dsp->iRec32[1] = dsp->iRec32[0];
			dsp->fRec34[1] = dsp->fRec34[0];
			dsp->fRec33[1] = dsp->fRec33[0];
			dsp->fVec22[1] = dsp->fVec22[0];
			dsp->fVec24[1] = dsp->fVec24[0];
			dsp->fRec35[1] = dsp->fRec35[0];
			dsp->iRec36[1] = dsp->iRec36[0];
			dsp->fRec37[1] = dsp->fRec37[0];
			dsp->fRec38[1] = dsp->fRec38[0];
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
