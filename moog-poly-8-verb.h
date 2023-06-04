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
	FAUSTFLOAT fVslider1;
	float fRec1[2];
	float fConst3;
	FAUSTFLOAT fEntry0;
	float fConst4;
	float fRec7[2];
	float fVec1[2];
	int IOTA0;
	float fVec2[4096];
	float fConst5;
	float fConst6;
	FAUSTFLOAT fButton0;
	float fVec3[2];
	float fRec8[2];
	float fConst7;
	int iRec9[2];
	FAUSTFLOAT fVbargraph0;
	float fConst8;
	FAUSTFLOAT fHslider1;
	float fConst9;
	float fConst10;
	FAUSTFLOAT fHslider2;
	float fRec6[2];
	float fRec5[2];
	float fRec4[2];
	float fRec3[2];
	float fRec2[2];
	FAUSTFLOAT fEntry1;
	float fRec15[2];
	float fVec4[2];
	float fVec5[4096];
	FAUSTFLOAT fButton1;
	float fVec6[2];
	float fRec16[2];
	int iRec17[2];
	FAUSTFLOAT fVbargraph1;
	float fRec14[2];
	float fRec13[2];
	float fRec12[2];
	float fRec11[2];
	float fRec10[2];
	FAUSTFLOAT fEntry2;
	float fRec23[2];
	float fVec7[2];
	float fVec8[4096];
	FAUSTFLOAT fButton2;
	float fVec9[2];
	float fRec24[2];
	int iRec25[2];
	FAUSTFLOAT fVbargraph2;
	float fRec22[2];
	float fRec21[2];
	float fRec20[2];
	float fRec19[2];
	float fRec18[2];
	FAUSTFLOAT fVslider2;
	float fRec37[2];
	float fRec36[3];
	FAUSTFLOAT fVslider3;
	float fRec38[2];
	float fVec10[256];
	float fRec34[2];
	float fVec11[128];
	float fRec32[2];
	FAUSTFLOAT fVslider4;
	float fRec39[2];
	float fVec12[512];
	float fRec30[2];
	float fVec13[512];
	float fRec28[2];
	FAUSTFLOAT fVslider5;
	float fRec40[2];
	FAUSTFLOAT fVslider6;
	float fRec44[2];
	FAUSTFLOAT fVslider7;
	float fRec47[2];
	float fVec14[1024];
	float fRec45[2];
	float fVec15[8192];
	float fRec43[2];
	FAUSTFLOAT fVslider8;
	float fRec48[2];
	float fVec16[4096];
	float fRec41[2];
	float fVec17[4096];
	float fRec26[2];
	float fVec18[1024];
	float fRec52[2];
	float fVec19[8192];
	float fRec51[2];
	float fVec20[2048];
	float fRec49[2];
	float fVec21[2048];
	float fRec27[2];
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
	dsp->fVslider1 = (FAUSTFLOAT)(0.0f);
	dsp->fEntry0 = (FAUSTFLOAT)(1e+02f);
	dsp->fButton0 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider1 = (FAUSTFLOAT)(1e+03f);
	dsp->fHslider2 = (FAUSTFLOAT)(0.2f);
	dsp->fEntry1 = (FAUSTFLOAT)(2e+02f);
	dsp->fButton1 = (FAUSTFLOAT)(0.0f);
	dsp->fEntry2 = (FAUSTFLOAT)(3e+02f);
	dsp->fButton2 = (FAUSTFLOAT)(0.0f);
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
			dsp->fRec1[l2] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l3;
		for (l3 = 0; l3 < 2; l3 = l3 + 1) {
			dsp->fRec7[l3] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l4;
		for (l4 = 0; l4 < 2; l4 = l4 + 1) {
			dsp->fVec1[l4] = 0.0f;
		}
	}
	dsp->IOTA0 = 0;
	/* C99 loop */
	{
		int l5;
		for (l5 = 0; l5 < 4096; l5 = l5 + 1) {
			dsp->fVec2[l5] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; l6 < 2; l6 = l6 + 1) {
			dsp->fVec3[l6] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; l7 < 2; l7 = l7 + 1) {
			dsp->fRec8[l7] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l8;
		for (l8 = 0; l8 < 2; l8 = l8 + 1) {
			dsp->iRec9[l8] = 0;
		}
	}
	/* C99 loop */
	{
		int l9;
		for (l9 = 0; l9 < 2; l9 = l9 + 1) {
			dsp->fRec6[l9] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l10;
		for (l10 = 0; l10 < 2; l10 = l10 + 1) {
			dsp->fRec5[l10] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l11;
		for (l11 = 0; l11 < 2; l11 = l11 + 1) {
			dsp->fRec4[l11] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l12;
		for (l12 = 0; l12 < 2; l12 = l12 + 1) {
			dsp->fRec3[l12] = 0.0f;
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
			dsp->fRec15[l14] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; l15 < 2; l15 = l15 + 1) {
			dsp->fVec4[l15] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l16;
		for (l16 = 0; l16 < 4096; l16 = l16 + 1) {
			dsp->fVec5[l16] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l17;
		for (l17 = 0; l17 < 2; l17 = l17 + 1) {
			dsp->fVec6[l17] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l18;
		for (l18 = 0; l18 < 2; l18 = l18 + 1) {
			dsp->fRec16[l18] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l19;
		for (l19 = 0; l19 < 2; l19 = l19 + 1) {
			dsp->iRec17[l19] = 0;
		}
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; l20 < 2; l20 = l20 + 1) {
			dsp->fRec14[l20] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; l21 < 2; l21 = l21 + 1) {
			dsp->fRec13[l21] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; l22 < 2; l22 = l22 + 1) {
			dsp->fRec12[l22] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l23;
		for (l23 = 0; l23 < 2; l23 = l23 + 1) {
			dsp->fRec11[l23] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l24;
		for (l24 = 0; l24 < 2; l24 = l24 + 1) {
			dsp->fRec10[l24] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; l25 < 2; l25 = l25 + 1) {
			dsp->fRec23[l25] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; l26 < 2; l26 = l26 + 1) {
			dsp->fVec7[l26] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; l27 < 4096; l27 = l27 + 1) {
			dsp->fVec8[l27] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l28;
		for (l28 = 0; l28 < 2; l28 = l28 + 1) {
			dsp->fVec9[l28] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l29;
		for (l29 = 0; l29 < 2; l29 = l29 + 1) {
			dsp->fRec24[l29] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l30;
		for (l30 = 0; l30 < 2; l30 = l30 + 1) {
			dsp->iRec25[l30] = 0;
		}
	}
	/* C99 loop */
	{
		int l31;
		for (l31 = 0; l31 < 2; l31 = l31 + 1) {
			dsp->fRec22[l31] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l32;
		for (l32 = 0; l32 < 2; l32 = l32 + 1) {
			dsp->fRec21[l32] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l33;
		for (l33 = 0; l33 < 2; l33 = l33 + 1) {
			dsp->fRec20[l33] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l34;
		for (l34 = 0; l34 < 2; l34 = l34 + 1) {
			dsp->fRec19[l34] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l35;
		for (l35 = 0; l35 < 2; l35 = l35 + 1) {
			dsp->fRec18[l35] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l36;
		for (l36 = 0; l36 < 2; l36 = l36 + 1) {
			dsp->fRec37[l36] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l37;
		for (l37 = 0; l37 < 3; l37 = l37 + 1) {
			dsp->fRec36[l37] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l38;
		for (l38 = 0; l38 < 2; l38 = l38 + 1) {
			dsp->fRec38[l38] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l39;
		for (l39 = 0; l39 < 256; l39 = l39 + 1) {
			dsp->fVec10[l39] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l40;
		for (l40 = 0; l40 < 2; l40 = l40 + 1) {
			dsp->fRec34[l40] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l41;
		for (l41 = 0; l41 < 128; l41 = l41 + 1) {
			dsp->fVec11[l41] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l42;
		for (l42 = 0; l42 < 2; l42 = l42 + 1) {
			dsp->fRec32[l42] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l43;
		for (l43 = 0; l43 < 2; l43 = l43 + 1) {
			dsp->fRec39[l43] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l44;
		for (l44 = 0; l44 < 512; l44 = l44 + 1) {
			dsp->fVec12[l44] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l45;
		for (l45 = 0; l45 < 2; l45 = l45 + 1) {
			dsp->fRec30[l45] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l46;
		for (l46 = 0; l46 < 512; l46 = l46 + 1) {
			dsp->fVec13[l46] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l47;
		for (l47 = 0; l47 < 2; l47 = l47 + 1) {
			dsp->fRec28[l47] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l48;
		for (l48 = 0; l48 < 2; l48 = l48 + 1) {
			dsp->fRec40[l48] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l49;
		for (l49 = 0; l49 < 2; l49 = l49 + 1) {
			dsp->fRec44[l49] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l50;
		for (l50 = 0; l50 < 2; l50 = l50 + 1) {
			dsp->fRec47[l50] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l51;
		for (l51 = 0; l51 < 1024; l51 = l51 + 1) {
			dsp->fVec14[l51] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l52;
		for (l52 = 0; l52 < 2; l52 = l52 + 1) {
			dsp->fRec45[l52] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l53;
		for (l53 = 0; l53 < 8192; l53 = l53 + 1) {
			dsp->fVec15[l53] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l54;
		for (l54 = 0; l54 < 2; l54 = l54 + 1) {
			dsp->fRec43[l54] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l55;
		for (l55 = 0; l55 < 2; l55 = l55 + 1) {
			dsp->fRec48[l55] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l56;
		for (l56 = 0; l56 < 4096; l56 = l56 + 1) {
			dsp->fVec16[l56] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l57;
		for (l57 = 0; l57 < 2; l57 = l57 + 1) {
			dsp->fRec41[l57] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l58;
		for (l58 = 0; l58 < 4096; l58 = l58 + 1) {
			dsp->fVec17[l58] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l59;
		for (l59 = 0; l59 < 2; l59 = l59 + 1) {
			dsp->fRec26[l59] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l60;
		for (l60 = 0; l60 < 1024; l60 = l60 + 1) {
			dsp->fVec18[l60] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l61;
		for (l61 = 0; l61 < 2; l61 = l61 + 1) {
			dsp->fRec52[l61] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l62;
		for (l62 = 0; l62 < 8192; l62 = l62 + 1) {
			dsp->fVec19[l62] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l63;
		for (l63 = 0; l63 < 2; l63 = l63 + 1) {
			dsp->fRec51[l63] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l64;
		for (l64 = 0; l64 < 2048; l64 = l64 + 1) {
			dsp->fVec20[l64] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l65;
		for (l65 = 0; l65 < 2; l65 = l65 + 1) {
			dsp->fRec49[l65] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l66;
		for (l66 = 0; l66 < 2048; l66 = l66 + 1) {
			dsp->fVec21[l66] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l67;
		for (l67 = 0; l67 < 2; l67 = l67 + 1) {
			dsp->fRec27[l67] = 0.0f;
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
	float fSlow3 = dsp->fConst1 * (float)(dsp->fVslider1);
	float fSlow4 = (float)(dsp->fEntry0);
	float fSlow5 = fmaxf(fSlow4, 23.44895f);
	float fSlow6 = fmaxf(2e+01f, fabsf(fSlow5));
	float fSlow7 = dsp->fConst3 / fSlow6;
	float fSlow8 = dsp->fConst4 * fSlow6;
	float fSlow9 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst5 / fSlow5));
	float fSlow10 = floorf(fSlow9);
	float fSlow11 = fSlow10 + (1.0f - fSlow9);
	int iSlow12 = (int)(fSlow9);
	float fSlow13 = fSlow9 - fSlow10;
	int iSlow14 = iSlow12 + 1;
	float fSlow15 = (float)(dsp->fButton0);
	int iSlow16 = fSlow15 == 0.0f;
	float fSlow17 = (float)(dsp->fHslider1);
	float fSlow18 = fSlow17 + fSlow4;
	float fSlow19 = 0.0f - 4.0f * fmaxf(0.0f, fminf((float)(dsp->fHslider2), 0.999999f));
	float fSlow20 = (float)(dsp->fEntry1);
	float fSlow21 = fmaxf(fSlow20, 23.44895f);
	float fSlow22 = fmaxf(2e+01f, fabsf(fSlow21));
	float fSlow23 = dsp->fConst3 / fSlow22;
	float fSlow24 = dsp->fConst4 * fSlow22;
	float fSlow25 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst5 / fSlow21));
	float fSlow26 = floorf(fSlow25);
	float fSlow27 = fSlow26 + (1.0f - fSlow25);
	int iSlow28 = (int)(fSlow25);
	float fSlow29 = fSlow25 - fSlow26;
	int iSlow30 = iSlow28 + 1;
	float fSlow31 = (float)(dsp->fButton1);
	int iSlow32 = fSlow31 == 0.0f;
	float fSlow33 = fSlow17 + fSlow20;
	float fSlow34 = (float)(dsp->fEntry2);
	float fSlow35 = fmaxf(fSlow34, 23.44895f);
	float fSlow36 = fmaxf(2e+01f, fabsf(fSlow35));
	float fSlow37 = dsp->fConst3 / fSlow36;
	float fSlow38 = dsp->fConst4 * fSlow36;
	float fSlow39 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst5 / fSlow35));
	float fSlow40 = floorf(fSlow39);
	float fSlow41 = fSlow40 + (1.0f - fSlow39);
	int iSlow42 = (int)(fSlow39);
	float fSlow43 = fSlow39 - fSlow40;
	int iSlow44 = iSlow42 + 1;
	float fSlow45 = (float)(dsp->fButton2);
	int iSlow46 = fSlow45 == 0.0f;
	float fSlow47 = fSlow34 + fSlow17;
	float fSlow48 = dsp->fConst1 * (float)(dsp->fVslider2);
	float fSlow49 = dsp->fConst1 * (float)(dsp->fVslider3);
	float fSlow50 = dsp->fConst1 * (float)(dsp->fVslider4);
	float fSlow51 = dsp->fConst1 * (float)(dsp->fVslider5);
	float fSlow52 = dsp->fConst1 * (float)(dsp->fVslider6);
	float fSlow53 = dsp->fConst1 * (float)(dsp->fVslider7);
	float fSlow54 = dsp->fConst1 * (float)(dsp->fVslider8);
	float fSlow55 = 0.15f * fSlow1;
	/* C99 loop */
	{
		int i0;
		for (i0 = 0; i0 < count; i0 = i0 + 1) {
			dsp->iVec0[0] = 1;
			dsp->fRec0[0] = fSlow0 + dsp->fConst2 * dsp->fRec0[1];
			dsp->fRec1[0] = fSlow3 + dsp->fConst2 * dsp->fRec1[1];
			float fTemp0 = dsp->fRec1[0] + 1.0f;
			float fTemp1 = (float)(dsp->iVec0[1]);
			int iTemp2 = 1 - dsp->iVec0[1];
			float fTemp3 = ((iTemp2) ? 0.0f : fSlow8 + dsp->fRec7[1]);
			dsp->fRec7[0] = fTemp3 - floorf(fTemp3);
			float fTemp4 = mydsp_faustpower2_f(2.0f * dsp->fRec7[0] + -1.0f);
			dsp->fVec1[0] = fTemp4;
			float fTemp5 = fSlow7 * fTemp1 * (fTemp4 - dsp->fVec1[1]);
			dsp->fVec2[dsp->IOTA0 & 4095] = fTemp5;
			dsp->fVec3[0] = fSlow15;
			dsp->fRec8[0] = fSlow15 + dsp->fRec8[1] * (float)(dsp->fVec3[1] >= fSlow15);
			dsp->iRec9[0] = iSlow16 * (dsp->iRec9[1] + 1);
			float fTemp6 = (float)(dsp->iRec9[0]);
			float fTemp7 = fmaxf(0.0f, fminf(dsp->fConst6 * dsp->fRec8[0], 1.0f) - dsp->fConst7 * fTemp6);
			dsp->fVbargraph0 = (FAUSTFLOAT)(fTemp7);
			float fTemp8 = dsp->fConst8 * (fSlow18 + 3e+03f * fmaxf(0.0f, fminf(dsp->fConst9 * dsp->fRec8[0], 1.0f) - dsp->fConst10 * fTemp6));
			float fTemp9 = 1.0f - fTemp8;
			dsp->fRec6[0] = (fTemp5 - (fSlow11 * dsp->fVec2[(dsp->IOTA0 - iSlow12) & 4095] + fSlow13 * dsp->fVec2[(dsp->IOTA0 - iSlow14) & 4095])) * fTemp7 + fTemp9 * dsp->fRec6[1] + fSlow19 * dsp->fRec2[1];
			dsp->fRec5[0] = dsp->fRec6[0] + fTemp9 * dsp->fRec5[1];
			dsp->fRec4[0] = dsp->fRec5[0] + fTemp9 * dsp->fRec4[1];
			dsp->fRec3[0] = dsp->fRec4[0] + dsp->fRec3[1] * fTemp9;
			dsp->fRec2[0] = dsp->fRec3[0] * mydsp_faustpower4_f(fTemp8);
			float fTemp10 = ((iTemp2) ? 0.0f : fSlow24 + dsp->fRec15[1]);
			dsp->fRec15[0] = fTemp10 - floorf(fTemp10);
			float fTemp11 = mydsp_faustpower2_f(2.0f * dsp->fRec15[0] + -1.0f);
			dsp->fVec4[0] = fTemp11;
			float fTemp12 = fSlow23 * fTemp1 * (fTemp11 - dsp->fVec4[1]);
			dsp->fVec5[dsp->IOTA0 & 4095] = fTemp12;
			dsp->fVec6[0] = fSlow31;
			dsp->fRec16[0] = fSlow31 + dsp->fRec16[1] * (float)(dsp->fVec6[1] >= fSlow31);
			dsp->iRec17[0] = iSlow32 * (dsp->iRec17[1] + 1);
			float fTemp13 = (float)(dsp->iRec17[0]);
			float fTemp14 = fmaxf(0.0f, fminf(dsp->fConst6 * dsp->fRec16[0], 1.0f) - dsp->fConst7 * fTemp13);
			dsp->fVbargraph1 = (FAUSTFLOAT)(fTemp14);
			float fTemp15 = dsp->fConst8 * (fSlow33 + 3e+03f * fmaxf(0.0f, fminf(dsp->fConst9 * dsp->fRec16[0], 1.0f) - dsp->fConst10 * fTemp13));
			float fTemp16 = 1.0f - fTemp15;
			dsp->fRec14[0] = (fTemp12 - (fSlow27 * dsp->fVec5[(dsp->IOTA0 - iSlow28) & 4095] + fSlow29 * dsp->fVec5[(dsp->IOTA0 - iSlow30) & 4095])) * fTemp14 + fTemp16 * dsp->fRec14[1] + fSlow19 * dsp->fRec10[1];
			dsp->fRec13[0] = dsp->fRec14[0] + fTemp16 * dsp->fRec13[1];
			dsp->fRec12[0] = dsp->fRec13[0] + fTemp16 * dsp->fRec12[1];
			dsp->fRec11[0] = dsp->fRec12[0] + dsp->fRec11[1] * fTemp16;
			dsp->fRec10[0] = dsp->fRec11[0] * mydsp_faustpower4_f(fTemp15);
			float fTemp17 = ((iTemp2) ? 0.0f : fSlow38 + dsp->fRec23[1]);
			dsp->fRec23[0] = fTemp17 - floorf(fTemp17);
			float fTemp18 = mydsp_faustpower2_f(2.0f * dsp->fRec23[0] + -1.0f);
			dsp->fVec7[0] = fTemp18;
			float fTemp19 = fSlow37 * fTemp1 * (fTemp18 - dsp->fVec7[1]);
			dsp->fVec8[dsp->IOTA0 & 4095] = fTemp19;
			dsp->fVec9[0] = fSlow45;
			dsp->fRec24[0] = fSlow45 + dsp->fRec24[1] * (float)(dsp->fVec9[1] >= fSlow45);
			dsp->iRec25[0] = iSlow46 * (dsp->iRec25[1] + 1);
			float fTemp20 = (float)(dsp->iRec25[0]);
			float fTemp21 = fmaxf(0.0f, fminf(dsp->fConst6 * dsp->fRec24[0], 1.0f) - dsp->fConst7 * fTemp20);
			dsp->fVbargraph2 = (FAUSTFLOAT)(fTemp21);
			float fTemp22 = dsp->fConst8 * (fSlow47 + 3e+03f * fmaxf(0.0f, fminf(dsp->fConst9 * dsp->fRec24[0], 1.0f) - dsp->fConst10 * fTemp20));
			float fTemp23 = 1.0f - fTemp22;
			dsp->fRec22[0] = (fTemp19 - (fSlow41 * dsp->fVec8[(dsp->IOTA0 - iSlow42) & 4095] + fSlow43 * dsp->fVec8[(dsp->IOTA0 - iSlow44) & 4095])) * fTemp21 + fTemp23 * dsp->fRec22[1] + fSlow19 * dsp->fRec18[1];
			dsp->fRec21[0] = dsp->fRec22[0] + fTemp23 * dsp->fRec21[1];
			dsp->fRec20[0] = dsp->fRec21[0] + fTemp23 * dsp->fRec20[1];
			dsp->fRec19[0] = dsp->fRec20[0] + dsp->fRec19[1] * fTemp23;
			dsp->fRec18[0] = dsp->fRec19[0] * mydsp_faustpower4_f(fTemp22);
			float fTemp24 = dsp->fRec2[0] + dsp->fRec10[0] + dsp->fRec18[0];
			float fTemp25 = fSlow2 * (1.0f - 0.5f * fTemp0) * fTemp24;
			dsp->fRec37[0] = fSlow48 + dsp->fConst2 * dsp->fRec37[1];
			dsp->fRec36[0] = (1.0f - dsp->fRec37[0]) * dsp->fRec36[2] + fSlow2 * dsp->fRec37[0] * fTemp24;
			dsp->fRec38[0] = fSlow49 + dsp->fConst2 * dsp->fRec38[1];
			float fTemp26 = dsp->fRec36[0] - dsp->fRec38[0] * dsp->fRec34[1];
			dsp->fVec10[dsp->IOTA0 & 255] = fTemp26;
			dsp->fRec34[0] = dsp->fVec10[(dsp->IOTA0 - 142) & 255];
			float fRec35 = dsp->fRec38[0] * fTemp26;
			float fTemp27 = fRec35 + dsp->fRec34[1] - dsp->fRec38[0] * dsp->fRec32[1];
			dsp->fVec11[dsp->IOTA0 & 127] = fTemp27;
			dsp->fRec32[0] = dsp->fVec11[(dsp->IOTA0 - 107) & 127];
			float fRec33 = dsp->fRec38[0] * fTemp27;
			dsp->fRec39[0] = fSlow50 + dsp->fConst2 * dsp->fRec39[1];
			float fTemp28 = fRec33 + dsp->fRec32[1] - dsp->fRec39[0] * dsp->fRec30[1];
			dsp->fVec12[dsp->IOTA0 & 511] = fTemp28;
			dsp->fRec30[0] = dsp->fVec12[(dsp->IOTA0 - 379) & 511];
			float fRec31 = dsp->fRec39[0] * fTemp28;
			float fTemp29 = fRec31 + dsp->fRec30[1] - dsp->fRec39[0] * dsp->fRec28[1];
			dsp->fVec13[dsp->IOTA0 & 511] = fTemp29;
			dsp->fRec28[0] = dsp->fVec13[(dsp->IOTA0 - 277) & 511];
			float fRec29 = dsp->fRec39[0] * fTemp29;
			dsp->fRec40[0] = fSlow51 + dsp->fConst2 * dsp->fRec40[1];
			dsp->fRec44[0] = fSlow52 + dsp->fConst2 * dsp->fRec44[1];
			float fTemp30 = 1.0f - dsp->fRec44[0];
			dsp->fRec47[0] = fSlow53 + dsp->fConst2 * dsp->fRec47[1];
			float fTemp31 = dsp->fRec47[0] * dsp->fRec45[1] + dsp->fRec27[1];
			dsp->fVec14[dsp->IOTA0 & 1023] = fTemp31;
			dsp->fRec45[0] = dsp->fVec14[(dsp->IOTA0 - 908) & 1023];
			float fRec46 = 0.0f - dsp->fRec47[0] * fTemp31;
			dsp->fVec15[dsp->IOTA0 & 8191] = fRec46 + dsp->fRec45[1];
			dsp->fRec43[0] = dsp->fRec44[0] * dsp->fRec43[1] + fTemp30 * dsp->fVec15[(dsp->IOTA0 - 4217) & 8191];
			dsp->fRec48[0] = fSlow54 + dsp->fConst2 * dsp->fRec48[1];
			float fTemp32 = dsp->fRec43[0] * dsp->fRec40[0] - dsp->fRec48[0] * dsp->fRec41[1];
			dsp->fVec16[dsp->IOTA0 & 4095] = fTemp32;
			dsp->fRec41[0] = dsp->fVec16[(dsp->IOTA0 - 2656) & 4095];
			float fRec42 = dsp->fRec48[0] * fTemp32;
			dsp->fVec17[dsp->IOTA0 & 4095] = fRec42 + dsp->fRec41[1];
			dsp->fRec26[0] = dsp->fRec28[1] + fRec29 + dsp->fRec40[0] * dsp->fVec17[(dsp->IOTA0 - 2656) & 4095];
			float fTemp33 = dsp->fRec47[0] * dsp->fRec52[1] + dsp->fRec26[1];
			dsp->fVec18[dsp->IOTA0 & 1023] = fTemp33;
			dsp->fRec52[0] = dsp->fVec18[(dsp->IOTA0 - 672) & 1023];
			float fRec53 = 0.0f - dsp->fRec47[0] * fTemp33;
			dsp->fVec19[dsp->IOTA0 & 8191] = fRec53 + dsp->fRec52[1];
			dsp->fRec51[0] = dsp->fRec44[0] * dsp->fRec51[1] + fTemp30 * dsp->fVec19[(dsp->IOTA0 - 4453) & 8191];
			float fTemp34 = dsp->fRec40[0] * dsp->fRec51[0] - dsp->fRec48[0] * dsp->fRec49[1];
			dsp->fVec20[dsp->IOTA0 & 2047] = fTemp34;
			dsp->fRec49[0] = dsp->fVec20[(dsp->IOTA0 - 1800) & 2047];
			float fRec50 = dsp->fRec48[0] * fTemp34;
			dsp->fVec21[dsp->IOTA0 & 2047] = fRec50 + dsp->fRec49[1];
			dsp->fRec27[0] = dsp->fRec28[1] + fRec29 + dsp->fRec40[0] * dsp->fVec21[(dsp->IOTA0 - 1800) & 2047];
			float fTemp35 = fSlow55 * fTemp24;
			output0[i0] = (FAUSTFLOAT)(dsp->fRec0[0] * (fTemp25 + 0.5f * fTemp0 * dsp->fRec26[0]) + fTemp35);
			output1[i0] = (FAUSTFLOAT)(fTemp35 + dsp->fRec0[0] * (fTemp25 + 0.5f * fTemp0 * dsp->fRec27[0]));
			dsp->iVec0[1] = dsp->iVec0[0];
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->fRec7[1] = dsp->fRec7[0];
			dsp->fVec1[1] = dsp->fVec1[0];
			dsp->IOTA0 = dsp->IOTA0 + 1;
			dsp->fVec3[1] = dsp->fVec3[0];
			dsp->fRec8[1] = dsp->fRec8[0];
			dsp->iRec9[1] = dsp->iRec9[0];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->fRec5[1] = dsp->fRec5[0];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->fRec3[1] = dsp->fRec3[0];
			dsp->fRec2[1] = dsp->fRec2[0];
			dsp->fRec15[1] = dsp->fRec15[0];
			dsp->fVec4[1] = dsp->fVec4[0];
			dsp->fVec6[1] = dsp->fVec6[0];
			dsp->fRec16[1] = dsp->fRec16[0];
			dsp->iRec17[1] = dsp->iRec17[0];
			dsp->fRec14[1] = dsp->fRec14[0];
			dsp->fRec13[1] = dsp->fRec13[0];
			dsp->fRec12[1] = dsp->fRec12[0];
			dsp->fRec11[1] = dsp->fRec11[0];
			dsp->fRec10[1] = dsp->fRec10[0];
			dsp->fRec23[1] = dsp->fRec23[0];
			dsp->fVec7[1] = dsp->fVec7[0];
			dsp->fVec9[1] = dsp->fVec9[0];
			dsp->fRec24[1] = dsp->fRec24[0];
			dsp->iRec25[1] = dsp->iRec25[0];
			dsp->fRec22[1] = dsp->fRec22[0];
			dsp->fRec21[1] = dsp->fRec21[0];
			dsp->fRec20[1] = dsp->fRec20[0];
			dsp->fRec19[1] = dsp->fRec19[0];
			dsp->fRec18[1] = dsp->fRec18[0];
			dsp->fRec37[1] = dsp->fRec37[0];
			dsp->fRec36[2] = dsp->fRec36[1];
			dsp->fRec36[1] = dsp->fRec36[0];
			dsp->fRec38[1] = dsp->fRec38[0];
			dsp->fRec34[1] = dsp->fRec34[0];
			dsp->fRec32[1] = dsp->fRec32[0];
			dsp->fRec39[1] = dsp->fRec39[0];
			dsp->fRec30[1] = dsp->fRec30[0];
			dsp->fRec28[1] = dsp->fRec28[0];
			dsp->fRec40[1] = dsp->fRec40[0];
			dsp->fRec44[1] = dsp->fRec44[0];
			dsp->fRec47[1] = dsp->fRec47[0];
			dsp->fRec45[1] = dsp->fRec45[0];
			dsp->fRec43[1] = dsp->fRec43[0];
			dsp->fRec48[1] = dsp->fRec48[0];
			dsp->fRec41[1] = dsp->fRec41[0];
			dsp->fRec26[1] = dsp->fRec26[0];
			dsp->fRec52[1] = dsp->fRec52[0];
			dsp->fRec51[1] = dsp->fRec51[0];
			dsp->fRec49[1] = dsp->fRec49[0];
			dsp->fRec27[1] = dsp->fRec27[0];
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
