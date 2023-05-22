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
	FAUSTFLOAT fHslider5;
	float fRec20[2];
	float fRec19[2];
	float fVec10[2];
	float fVec11[4096];
	FAUSTFLOAT fButton3;
	float fVec12[2];
	float fRec21[2];
	int iRec22[2];
	FAUSTFLOAT fVbargraph3;
	FAUSTFLOAT fHslider6;
	float fRec24[2];
	float fRec23[2];
	float fVec13[2];
	float fVec14[4096];
	FAUSTFLOAT fButton4;
	float fVec15[2];
	float fRec25[2];
	int iRec26[2];
	FAUSTFLOAT fVbargraph4;
	FAUSTFLOAT fHslider7;
	float fRec28[2];
	float fRec27[2];
	float fVec16[2];
	float fVec17[4096];
	FAUSTFLOAT fButton5;
	float fVec18[2];
	float fRec29[2];
	int iRec30[2];
	FAUSTFLOAT fVbargraph5;
	FAUSTFLOAT fHslider8;
	float fRec32[2];
	float fRec31[2];
	float fVec19[2];
	float fVec20[4096];
	FAUSTFLOAT fButton6;
	float fVec21[2];
	float fRec33[2];
	int iRec34[2];
	FAUSTFLOAT fVbargraph6;
	FAUSTFLOAT fHslider9;
	float fRec36[2];
	float fRec35[2];
	float fVec22[2];
	float fVec23[4096];
	FAUSTFLOAT fButton7;
	float fVec24[2];
	float fRec37[2];
	int iRec38[2];
	FAUSTFLOAT fVbargraph7;
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
	dsp->fHslider1 = (FAUSTFLOAT)(1e+03f);
	dsp->fHslider2 = (FAUSTFLOAT)(1e+03f);
	dsp->fButton0 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider3 = (FAUSTFLOAT)(1e+03f);
	dsp->fButton1 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider4 = (FAUSTFLOAT)(1e+03f);
	dsp->fButton2 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider5 = (FAUSTFLOAT)(1e+03f);
	dsp->fButton3 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider6 = (FAUSTFLOAT)(1e+03f);
	dsp->fButton4 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider7 = (FAUSTFLOAT)(1e+03f);
	dsp->fButton5 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider8 = (FAUSTFLOAT)(1e+03f);
	dsp->fButton6 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider9 = (FAUSTFLOAT)(1e+03f);
	dsp->fButton7 = (FAUSTFLOAT)(0.0f);
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
			dsp->fRec20[l24] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; l25 < 2; l25 = l25 + 1) {
			dsp->fRec19[l25] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; l26 < 2; l26 = l26 + 1) {
			dsp->fVec10[l26] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; l27 < 4096; l27 = l27 + 1) {
			dsp->fVec11[l27] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l28;
		for (l28 = 0; l28 < 2; l28 = l28 + 1) {
			dsp->fVec12[l28] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l29;
		for (l29 = 0; l29 < 2; l29 = l29 + 1) {
			dsp->fRec21[l29] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l30;
		for (l30 = 0; l30 < 2; l30 = l30 + 1) {
			dsp->iRec22[l30] = 0;
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
			dsp->fRec23[l32] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l33;
		for (l33 = 0; l33 < 2; l33 = l33 + 1) {
			dsp->fVec13[l33] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l34;
		for (l34 = 0; l34 < 4096; l34 = l34 + 1) {
			dsp->fVec14[l34] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l35;
		for (l35 = 0; l35 < 2; l35 = l35 + 1) {
			dsp->fVec15[l35] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l36;
		for (l36 = 0; l36 < 2; l36 = l36 + 1) {
			dsp->fRec25[l36] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l37;
		for (l37 = 0; l37 < 2; l37 = l37 + 1) {
			dsp->iRec26[l37] = 0;
		}
	}
	/* C99 loop */
	{
		int l38;
		for (l38 = 0; l38 < 2; l38 = l38 + 1) {
			dsp->fRec28[l38] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l39;
		for (l39 = 0; l39 < 2; l39 = l39 + 1) {
			dsp->fRec27[l39] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l40;
		for (l40 = 0; l40 < 2; l40 = l40 + 1) {
			dsp->fVec16[l40] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l41;
		for (l41 = 0; l41 < 4096; l41 = l41 + 1) {
			dsp->fVec17[l41] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l42;
		for (l42 = 0; l42 < 2; l42 = l42 + 1) {
			dsp->fVec18[l42] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l43;
		for (l43 = 0; l43 < 2; l43 = l43 + 1) {
			dsp->fRec29[l43] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l44;
		for (l44 = 0; l44 < 2; l44 = l44 + 1) {
			dsp->iRec30[l44] = 0;
		}
	}
	/* C99 loop */
	{
		int l45;
		for (l45 = 0; l45 < 2; l45 = l45 + 1) {
			dsp->fRec32[l45] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l46;
		for (l46 = 0; l46 < 2; l46 = l46 + 1) {
			dsp->fRec31[l46] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l47;
		for (l47 = 0; l47 < 2; l47 = l47 + 1) {
			dsp->fVec19[l47] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l48;
		for (l48 = 0; l48 < 4096; l48 = l48 + 1) {
			dsp->fVec20[l48] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l49;
		for (l49 = 0; l49 < 2; l49 = l49 + 1) {
			dsp->fVec21[l49] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l50;
		for (l50 = 0; l50 < 2; l50 = l50 + 1) {
			dsp->fRec33[l50] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l51;
		for (l51 = 0; l51 < 2; l51 = l51 + 1) {
			dsp->iRec34[l51] = 0;
		}
	}
	/* C99 loop */
	{
		int l52;
		for (l52 = 0; l52 < 2; l52 = l52 + 1) {
			dsp->fRec36[l52] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l53;
		for (l53 = 0; l53 < 2; l53 = l53 + 1) {
			dsp->fRec35[l53] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l54;
		for (l54 = 0; l54 < 2; l54 = l54 + 1) {
			dsp->fVec22[l54] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l55;
		for (l55 = 0; l55 < 4096; l55 = l55 + 1) {
			dsp->fVec23[l55] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l56;
		for (l56 = 0; l56 < 2; l56 = l56 + 1) {
			dsp->fVec24[l56] = 0.0f;
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
			dsp->iRec38[l58] = 0;
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
	dsp->fConst1 = 44.1f / fConst0;
	dsp->fConst2 = 1.0f - dsp->fConst1;
	dsp->fConst3 = 6.2831855f / fConst0;
	dsp->fConst4 = 0.25f * fConst0;
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
	float fSlow11 = dsp->fConst1 * (float)(dsp->fHslider5);
	float fSlow12 = (float)(dsp->fButton3);
	int iSlow13 = fSlow12 == 0.0f;
	float fSlow14 = dsp->fConst1 * (float)(dsp->fHslider6);
	float fSlow15 = (float)(dsp->fButton4);
	int iSlow16 = fSlow15 == 0.0f;
	float fSlow17 = dsp->fConst1 * (float)(dsp->fHslider7);
	float fSlow18 = (float)(dsp->fButton5);
	int iSlow19 = fSlow18 == 0.0f;
	float fSlow20 = dsp->fConst1 * (float)(dsp->fHslider8);
	float fSlow21 = (float)(dsp->fButton6);
	int iSlow22 = fSlow21 == 0.0f;
	float fSlow23 = dsp->fConst1 * (float)(dsp->fHslider9);
	float fSlow24 = (float)(dsp->fButton7);
	int iSlow25 = fSlow24 == 0.0f;
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
			dsp->fRec20[0] = fSlow11 + dsp->fConst2 * dsp->fRec20[1];
			float fTemp31 = fmaxf(dsp->fRec20[0], 23.44895f);
			float fTemp32 = fmaxf(2e+01f, fabsf(fTemp31));
			float fTemp33 = ((iTemp3) ? 0.0f : dsp->fRec19[1] + dsp->fConst5 * fTemp32);
			dsp->fRec19[0] = fTemp33 - floorf(fTemp33);
			float fTemp34 = mydsp_faustpower2_f(2.0f * dsp->fRec19[0] + -1.0f);
			dsp->fVec10[0] = fTemp34;
			float fTemp35 = fTemp2 * (fTemp34 - dsp->fVec10[1]) / fTemp32;
			dsp->fVec11[dsp->IOTA0 & 4095] = fTemp35;
			float fTemp36 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst6 / fTemp31));
			int iTemp37 = (int)(fTemp36);
			float fTemp38 = floorf(fTemp36);
			dsp->fVec12[0] = fSlow12;
			dsp->fRec21[0] = fSlow12 + dsp->fRec21[1] * (float)(dsp->fVec12[1] >= fSlow12);
			dsp->iRec22[0] = iSlow13 * (dsp->iRec22[1] + 1);
			float fTemp39 = fmaxf(0.0f, fminf(dsp->fConst7 * dsp->fRec21[0], 1.0f) - dsp->fConst8 * (float)(dsp->iRec22[0]));
			dsp->fVbargraph3 = (FAUSTFLOAT)(fTemp39);
			dsp->fRec24[0] = fSlow14 + dsp->fConst2 * dsp->fRec24[1];
			float fTemp40 = fmaxf(dsp->fRec24[0], 23.44895f);
			float fTemp41 = fmaxf(2e+01f, fabsf(fTemp40));
			float fTemp42 = ((iTemp3) ? 0.0f : dsp->fRec23[1] + dsp->fConst5 * fTemp41);
			dsp->fRec23[0] = fTemp42 - floorf(fTemp42);
			float fTemp43 = mydsp_faustpower2_f(2.0f * dsp->fRec23[0] + -1.0f);
			dsp->fVec13[0] = fTemp43;
			float fTemp44 = fTemp2 * (fTemp43 - dsp->fVec13[1]) / fTemp41;
			dsp->fVec14[dsp->IOTA0 & 4095] = fTemp44;
			float fTemp45 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst6 / fTemp40));
			int iTemp46 = (int)(fTemp45);
			float fTemp47 = floorf(fTemp45);
			dsp->fVec15[0] = fSlow15;
			dsp->fRec25[0] = fSlow15 + dsp->fRec25[1] * (float)(dsp->fVec15[1] >= fSlow15);
			dsp->iRec26[0] = iSlow16 * (dsp->iRec26[1] + 1);
			float fTemp48 = fmaxf(0.0f, fminf(dsp->fConst7 * dsp->fRec25[0], 1.0f) - dsp->fConst8 * (float)(dsp->iRec26[0]));
			dsp->fVbargraph4 = (FAUSTFLOAT)(fTemp48);
			dsp->fRec28[0] = fSlow17 + dsp->fConst2 * dsp->fRec28[1];
			float fTemp49 = fmaxf(dsp->fRec28[0], 23.44895f);
			float fTemp50 = fmaxf(2e+01f, fabsf(fTemp49));
			float fTemp51 = ((iTemp3) ? 0.0f : dsp->fRec27[1] + dsp->fConst5 * fTemp50);
			dsp->fRec27[0] = fTemp51 - floorf(fTemp51);
			float fTemp52 = mydsp_faustpower2_f(2.0f * dsp->fRec27[0] + -1.0f);
			dsp->fVec16[0] = fTemp52;
			float fTemp53 = fTemp2 * (fTemp52 - dsp->fVec16[1]) / fTemp50;
			dsp->fVec17[dsp->IOTA0 & 4095] = fTemp53;
			float fTemp54 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst6 / fTemp49));
			int iTemp55 = (int)(fTemp54);
			float fTemp56 = floorf(fTemp54);
			dsp->fVec18[0] = fSlow18;
			dsp->fRec29[0] = fSlow18 + dsp->fRec29[1] * (float)(dsp->fVec18[1] >= fSlow18);
			dsp->iRec30[0] = iSlow19 * (dsp->iRec30[1] + 1);
			float fTemp57 = fmaxf(0.0f, fminf(dsp->fConst7 * dsp->fRec29[0], 1.0f) - dsp->fConst8 * (float)(dsp->iRec30[0]));
			dsp->fVbargraph5 = (FAUSTFLOAT)(fTemp57);
			dsp->fRec32[0] = fSlow20 + dsp->fConst2 * dsp->fRec32[1];
			float fTemp58 = fmaxf(dsp->fRec32[0], 23.44895f);
			float fTemp59 = fmaxf(2e+01f, fabsf(fTemp58));
			float fTemp60 = ((iTemp3) ? 0.0f : dsp->fRec31[1] + dsp->fConst5 * fTemp59);
			dsp->fRec31[0] = fTemp60 - floorf(fTemp60);
			float fTemp61 = mydsp_faustpower2_f(2.0f * dsp->fRec31[0] + -1.0f);
			dsp->fVec19[0] = fTemp61;
			float fTemp62 = fTemp2 * (fTemp61 - dsp->fVec19[1]) / fTemp59;
			dsp->fVec20[dsp->IOTA0 & 4095] = fTemp62;
			float fTemp63 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst6 / fTemp58));
			int iTemp64 = (int)(fTemp63);
			float fTemp65 = floorf(fTemp63);
			dsp->fVec21[0] = fSlow21;
			dsp->fRec33[0] = fSlow21 + dsp->fRec33[1] * (float)(dsp->fVec21[1] >= fSlow21);
			dsp->iRec34[0] = iSlow22 * (dsp->iRec34[1] + 1);
			float fTemp66 = fmaxf(0.0f, fminf(dsp->fConst7 * dsp->fRec33[0], 1.0f) - dsp->fConst8 * (float)(dsp->iRec34[0]));
			dsp->fVbargraph6 = (FAUSTFLOAT)(fTemp66);
			dsp->fRec36[0] = fSlow23 + dsp->fConst2 * dsp->fRec36[1];
			float fTemp67 = fmaxf(dsp->fRec36[0], 23.44895f);
			float fTemp68 = fmaxf(2e+01f, fabsf(fTemp67));
			float fTemp69 = ((iTemp3) ? 0.0f : dsp->fRec35[1] + dsp->fConst5 * fTemp68);
			dsp->fRec35[0] = fTemp69 - floorf(fTemp69);
			float fTemp70 = mydsp_faustpower2_f(2.0f * dsp->fRec35[0] + -1.0f);
			dsp->fVec22[0] = fTemp70;
			float fTemp71 = fTemp2 * (fTemp70 - dsp->fVec22[1]) / fTemp68;
			dsp->fVec23[dsp->IOTA0 & 4095] = fTemp71;
			float fTemp72 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst6 / fTemp67));
			int iTemp73 = (int)(fTemp72);
			float fTemp74 = floorf(fTemp72);
			dsp->fVec24[0] = fSlow24;
			dsp->fRec37[0] = fSlow24 + dsp->fRec37[1] * (float)(dsp->fVec24[1] >= fSlow24);
			dsp->iRec38[0] = iSlow25 * (dsp->iRec38[1] + 1);
			float fTemp75 = fmaxf(0.0f, fminf(dsp->fConst7 * dsp->fRec37[0], 1.0f) - dsp->fConst8 * (float)(dsp->iRec38[0]));
			dsp->fVbargraph7 = (FAUSTFLOAT)(fTemp75);
			dsp->fRec4[0] = dsp->fRec0[1] * (0.0f - 4.0f * fmaxf(0.0f, fminf(dsp->fRec5[0], 0.999999f))) + fTemp1 * dsp->fRec4[1] + (0.0f - dsp->fConst4 * (dsp->fVec2[(dsp->IOTA0 - iTemp10) & 4095] * (fTemp11 + (1.0f - fTemp9)) - fTemp8 + (fTemp9 - fTemp11) * dsp->fVec2[(dsp->IOTA0 - (iTemp10 + 1)) & 4095])) * fTemp12 + dsp->fConst4 * ((fTemp17 - dsp->fVec5[(dsp->IOTA0 - iTemp19) & 4095] * (fTemp20 + (1.0f - fTemp18)) - (fTemp18 - fTemp20) * dsp->fVec5[(dsp->IOTA0 - (iTemp19 + 1)) & 4095]) * fTemp21 + (fTemp26 - dsp->fVec8[(dsp->IOTA0 - iTemp28) & 4095] * (fTemp29 + (1.0f - fTemp27)) - (fTemp27 - fTemp29) * dsp->fVec8[(dsp->IOTA0 - (iTemp28 + 1)) & 4095]) * fTemp30 + (fTemp35 - dsp->fVec11[(dsp->IOTA0 - iTemp37) & 4095] * (fTemp38 + (1.0f - fTemp36)) - (fTemp36 - fTemp38) * dsp->fVec11[(dsp->IOTA0 - (iTemp37 + 1)) & 4095]) * fTemp39 + (fTemp44 - dsp->fVec14[(dsp->IOTA0 - iTemp46) & 4095] * (fTemp47 + (1.0f - fTemp45)) - (fTemp45 - fTemp47) * dsp->fVec14[(dsp->IOTA0 - (iTemp46 + 1)) & 4095]) * fTemp48 + (fTemp53 - dsp->fVec17[(dsp->IOTA0 - iTemp55) & 4095] * (fTemp56 + (1.0f - fTemp54)) - (fTemp54 - fTemp56) * dsp->fVec17[(dsp->IOTA0 - (iTemp55 + 1)) & 4095]) * fTemp57 + (fTemp62 - dsp->fVec20[(dsp->IOTA0 - iTemp64) & 4095] * (fTemp65 + (1.0f - fTemp63)) - (fTemp63 - fTemp65) * dsp->fVec20[(dsp->IOTA0 - (iTemp64 + 1)) & 4095]) * fTemp66 + (fTemp71 - dsp->fVec23[(dsp->IOTA0 - iTemp73) & 4095] * (fTemp74 + (1.0f - fTemp72)) - (fTemp72 - fTemp74) * dsp->fVec23[(dsp->IOTA0 - (iTemp73 + 1)) & 4095]) * fTemp75);
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
			dsp->fRec20[1] = dsp->fRec20[0];
			dsp->fRec19[1] = dsp->fRec19[0];
			dsp->fVec10[1] = dsp->fVec10[0];
			dsp->fVec12[1] = dsp->fVec12[0];
			dsp->fRec21[1] = dsp->fRec21[0];
			dsp->iRec22[1] = dsp->iRec22[0];
			dsp->fRec24[1] = dsp->fRec24[0];
			dsp->fRec23[1] = dsp->fRec23[0];
			dsp->fVec13[1] = dsp->fVec13[0];
			dsp->fVec15[1] = dsp->fVec15[0];
			dsp->fRec25[1] = dsp->fRec25[0];
			dsp->iRec26[1] = dsp->iRec26[0];
			dsp->fRec28[1] = dsp->fRec28[0];
			dsp->fRec27[1] = dsp->fRec27[0];
			dsp->fVec16[1] = dsp->fVec16[0];
			dsp->fVec18[1] = dsp->fVec18[0];
			dsp->fRec29[1] = dsp->fRec29[0];
			dsp->iRec30[1] = dsp->iRec30[0];
			dsp->fRec32[1] = dsp->fRec32[0];
			dsp->fRec31[1] = dsp->fRec31[0];
			dsp->fVec19[1] = dsp->fVec19[0];
			dsp->fVec21[1] = dsp->fVec21[0];
			dsp->fRec33[1] = dsp->fRec33[0];
			dsp->iRec34[1] = dsp->iRec34[0];
			dsp->fRec36[1] = dsp->fRec36[0];
			dsp->fRec35[1] = dsp->fRec35[0];
			dsp->fVec22[1] = dsp->fVec22[0];
			dsp->fVec24[1] = dsp->fVec24[0];
			dsp->fRec37[1] = dsp->fRec37[0];
			dsp->iRec38[1] = dsp->iRec38[0];
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
