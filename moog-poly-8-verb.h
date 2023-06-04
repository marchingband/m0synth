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
	FAUSTFLOAT fEntry3;
	float fRec31[2];
	float fVec10[2];
	float fVec11[4096];
	FAUSTFLOAT fButton3;
	float fVec12[2];
	float fRec32[2];
	int iRec33[2];
	FAUSTFLOAT fVbargraph3;
	float fRec30[2];
	float fRec29[2];
	float fRec28[2];
	float fRec27[2];
	float fRec26[2];
	FAUSTFLOAT fEntry4;
	float fRec39[2];
	float fVec13[2];
	float fVec14[4096];
	FAUSTFLOAT fButton4;
	float fVec15[2];
	float fRec40[2];
	int iRec41[2];
	FAUSTFLOAT fVbargraph4;
	float fRec38[2];
	float fRec37[2];
	float fRec36[2];
	float fRec35[2];
	float fRec34[2];
	FAUSTFLOAT fEntry5;
	FAUSTFLOAT fButton5;
	float fVec16[2];
	float fRec47[2];
	int iRec48[2];
	float fRec49[2];
	float fVec17[2];
	float fVec18[4096];
	FAUSTFLOAT fVbargraph5;
	float fRec46[2];
	float fRec45[2];
	float fRec44[2];
	float fRec43[2];
	float fRec42[2];
	FAUSTFLOAT fEntry6;
	float fRec55[2];
	float fVec19[2];
	float fVec20[4096];
	FAUSTFLOAT fButton6;
	float fVec21[2];
	float fRec56[2];
	int iRec57[2];
	FAUSTFLOAT fVbargraph6;
	float fRec54[2];
	float fRec53[2];
	float fRec52[2];
	float fRec51[2];
	float fRec50[2];
	FAUSTFLOAT fEntry7;
	float fRec63[2];
	float fVec22[2];
	float fVec23[4096];
	FAUSTFLOAT fButton7;
	float fVec24[2];
	float fRec64[2];
	int iRec65[2];
	FAUSTFLOAT fVbargraph7;
	float fRec62[2];
	float fRec61[2];
	float fRec60[2];
	float fRec59[2];
	float fRec58[2];
	FAUSTFLOAT fVslider2;
	float fRec77[2];
	float fRec76[3];
	FAUSTFLOAT fVslider3;
	float fRec78[2];
	float fVec25[256];
	float fRec74[2];
	float fVec26[128];
	float fRec72[2];
	FAUSTFLOAT fVslider4;
	float fRec79[2];
	float fVec27[512];
	float fRec70[2];
	float fVec28[512];
	float fRec68[2];
	FAUSTFLOAT fVslider5;
	float fRec80[2];
	FAUSTFLOAT fVslider6;
	float fRec84[2];
	FAUSTFLOAT fVslider7;
	float fRec87[2];
	float fVec29[1024];
	float fRec85[2];
	float fVec30[8192];
	float fRec83[2];
	FAUSTFLOAT fVslider8;
	float fRec88[2];
	float fVec31[4096];
	float fRec81[2];
	float fVec32[4096];
	float fRec66[2];
	float fVec33[1024];
	float fRec92[2];
	float fVec34[8192];
	float fRec91[2];
	float fVec35[2048];
	float fRec89[2];
	float fVec36[2048];
	float fRec67[2];
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
	dsp->fEntry0 = (FAUSTFLOAT)(7e+02f);
	dsp->fButton0 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider1 = (FAUSTFLOAT)(1e+03f);
	dsp->fHslider2 = (FAUSTFLOAT)(0.2f);
	dsp->fEntry1 = (FAUSTFLOAT)(8e+02f);
	dsp->fButton1 = (FAUSTFLOAT)(0.0f);
	dsp->fEntry2 = (FAUSTFLOAT)(4e+02f);
	dsp->fButton2 = (FAUSTFLOAT)(0.0f);
	dsp->fEntry3 = (FAUSTFLOAT)(5e+02f);
	dsp->fButton3 = (FAUSTFLOAT)(0.0f);
	dsp->fEntry4 = (FAUSTFLOAT)(6e+02f);
	dsp->fButton4 = (FAUSTFLOAT)(0.0f);
	dsp->fEntry5 = (FAUSTFLOAT)(1e+02f);
	dsp->fButton5 = (FAUSTFLOAT)(0.0f);
	dsp->fEntry6 = (FAUSTFLOAT)(2e+02f);
	dsp->fButton6 = (FAUSTFLOAT)(0.0f);
	dsp->fEntry7 = (FAUSTFLOAT)(3e+02f);
	dsp->fButton7 = (FAUSTFLOAT)(0.0f);
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
			dsp->fRec31[l36] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l37;
		for (l37 = 0; l37 < 2; l37 = l37 + 1) {
			dsp->fVec10[l37] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l38;
		for (l38 = 0; l38 < 4096; l38 = l38 + 1) {
			dsp->fVec11[l38] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l39;
		for (l39 = 0; l39 < 2; l39 = l39 + 1) {
			dsp->fVec12[l39] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l40;
		for (l40 = 0; l40 < 2; l40 = l40 + 1) {
			dsp->fRec32[l40] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l41;
		for (l41 = 0; l41 < 2; l41 = l41 + 1) {
			dsp->iRec33[l41] = 0;
		}
	}
	/* C99 loop */
	{
		int l42;
		for (l42 = 0; l42 < 2; l42 = l42 + 1) {
			dsp->fRec30[l42] = 0.0f;
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
			dsp->fRec28[l44] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l45;
		for (l45 = 0; l45 < 2; l45 = l45 + 1) {
			dsp->fRec27[l45] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l46;
		for (l46 = 0; l46 < 2; l46 = l46 + 1) {
			dsp->fRec26[l46] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l47;
		for (l47 = 0; l47 < 2; l47 = l47 + 1) {
			dsp->fRec39[l47] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l48;
		for (l48 = 0; l48 < 2; l48 = l48 + 1) {
			dsp->fVec13[l48] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l49;
		for (l49 = 0; l49 < 4096; l49 = l49 + 1) {
			dsp->fVec14[l49] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l50;
		for (l50 = 0; l50 < 2; l50 = l50 + 1) {
			dsp->fVec15[l50] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l51;
		for (l51 = 0; l51 < 2; l51 = l51 + 1) {
			dsp->fRec40[l51] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l52;
		for (l52 = 0; l52 < 2; l52 = l52 + 1) {
			dsp->iRec41[l52] = 0;
		}
	}
	/* C99 loop */
	{
		int l53;
		for (l53 = 0; l53 < 2; l53 = l53 + 1) {
			dsp->fRec38[l53] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l54;
		for (l54 = 0; l54 < 2; l54 = l54 + 1) {
			dsp->fRec37[l54] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l55;
		for (l55 = 0; l55 < 2; l55 = l55 + 1) {
			dsp->fRec36[l55] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l56;
		for (l56 = 0; l56 < 2; l56 = l56 + 1) {
			dsp->fRec35[l56] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l57;
		for (l57 = 0; l57 < 2; l57 = l57 + 1) {
			dsp->fRec34[l57] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l58;
		for (l58 = 0; l58 < 2; l58 = l58 + 1) {
			dsp->fVec16[l58] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l59;
		for (l59 = 0; l59 < 2; l59 = l59 + 1) {
			dsp->fRec47[l59] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l60;
		for (l60 = 0; l60 < 2; l60 = l60 + 1) {
			dsp->iRec48[l60] = 0;
		}
	}
	/* C99 loop */
	{
		int l61;
		for (l61 = 0; l61 < 2; l61 = l61 + 1) {
			dsp->fRec49[l61] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l62;
		for (l62 = 0; l62 < 2; l62 = l62 + 1) {
			dsp->fVec17[l62] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l63;
		for (l63 = 0; l63 < 4096; l63 = l63 + 1) {
			dsp->fVec18[l63] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l64;
		for (l64 = 0; l64 < 2; l64 = l64 + 1) {
			dsp->fRec46[l64] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l65;
		for (l65 = 0; l65 < 2; l65 = l65 + 1) {
			dsp->fRec45[l65] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l66;
		for (l66 = 0; l66 < 2; l66 = l66 + 1) {
			dsp->fRec44[l66] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l67;
		for (l67 = 0; l67 < 2; l67 = l67 + 1) {
			dsp->fRec43[l67] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l68;
		for (l68 = 0; l68 < 2; l68 = l68 + 1) {
			dsp->fRec42[l68] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l69;
		for (l69 = 0; l69 < 2; l69 = l69 + 1) {
			dsp->fRec55[l69] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l70;
		for (l70 = 0; l70 < 2; l70 = l70 + 1) {
			dsp->fVec19[l70] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l71;
		for (l71 = 0; l71 < 4096; l71 = l71 + 1) {
			dsp->fVec20[l71] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l72;
		for (l72 = 0; l72 < 2; l72 = l72 + 1) {
			dsp->fVec21[l72] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l73;
		for (l73 = 0; l73 < 2; l73 = l73 + 1) {
			dsp->fRec56[l73] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l74;
		for (l74 = 0; l74 < 2; l74 = l74 + 1) {
			dsp->iRec57[l74] = 0;
		}
	}
	/* C99 loop */
	{
		int l75;
		for (l75 = 0; l75 < 2; l75 = l75 + 1) {
			dsp->fRec54[l75] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l76;
		for (l76 = 0; l76 < 2; l76 = l76 + 1) {
			dsp->fRec53[l76] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l77;
		for (l77 = 0; l77 < 2; l77 = l77 + 1) {
			dsp->fRec52[l77] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l78;
		for (l78 = 0; l78 < 2; l78 = l78 + 1) {
			dsp->fRec51[l78] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l79;
		for (l79 = 0; l79 < 2; l79 = l79 + 1) {
			dsp->fRec50[l79] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l80;
		for (l80 = 0; l80 < 2; l80 = l80 + 1) {
			dsp->fRec63[l80] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l81;
		for (l81 = 0; l81 < 2; l81 = l81 + 1) {
			dsp->fVec22[l81] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l82;
		for (l82 = 0; l82 < 4096; l82 = l82 + 1) {
			dsp->fVec23[l82] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l83;
		for (l83 = 0; l83 < 2; l83 = l83 + 1) {
			dsp->fVec24[l83] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l84;
		for (l84 = 0; l84 < 2; l84 = l84 + 1) {
			dsp->fRec64[l84] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l85;
		for (l85 = 0; l85 < 2; l85 = l85 + 1) {
			dsp->iRec65[l85] = 0;
		}
	}
	/* C99 loop */
	{
		int l86;
		for (l86 = 0; l86 < 2; l86 = l86 + 1) {
			dsp->fRec62[l86] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l87;
		for (l87 = 0; l87 < 2; l87 = l87 + 1) {
			dsp->fRec61[l87] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l88;
		for (l88 = 0; l88 < 2; l88 = l88 + 1) {
			dsp->fRec60[l88] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l89;
		for (l89 = 0; l89 < 2; l89 = l89 + 1) {
			dsp->fRec59[l89] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l90;
		for (l90 = 0; l90 < 2; l90 = l90 + 1) {
			dsp->fRec58[l90] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l91;
		for (l91 = 0; l91 < 2; l91 = l91 + 1) {
			dsp->fRec77[l91] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l92;
		for (l92 = 0; l92 < 3; l92 = l92 + 1) {
			dsp->fRec76[l92] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l93;
		for (l93 = 0; l93 < 2; l93 = l93 + 1) {
			dsp->fRec78[l93] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l94;
		for (l94 = 0; l94 < 256; l94 = l94 + 1) {
			dsp->fVec25[l94] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l95;
		for (l95 = 0; l95 < 2; l95 = l95 + 1) {
			dsp->fRec74[l95] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l96;
		for (l96 = 0; l96 < 128; l96 = l96 + 1) {
			dsp->fVec26[l96] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l97;
		for (l97 = 0; l97 < 2; l97 = l97 + 1) {
			dsp->fRec72[l97] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l98;
		for (l98 = 0; l98 < 2; l98 = l98 + 1) {
			dsp->fRec79[l98] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l99;
		for (l99 = 0; l99 < 512; l99 = l99 + 1) {
			dsp->fVec27[l99] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l100;
		for (l100 = 0; l100 < 2; l100 = l100 + 1) {
			dsp->fRec70[l100] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l101;
		for (l101 = 0; l101 < 512; l101 = l101 + 1) {
			dsp->fVec28[l101] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l102;
		for (l102 = 0; l102 < 2; l102 = l102 + 1) {
			dsp->fRec68[l102] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l103;
		for (l103 = 0; l103 < 2; l103 = l103 + 1) {
			dsp->fRec80[l103] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l104;
		for (l104 = 0; l104 < 2; l104 = l104 + 1) {
			dsp->fRec84[l104] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l105;
		for (l105 = 0; l105 < 2; l105 = l105 + 1) {
			dsp->fRec87[l105] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l106;
		for (l106 = 0; l106 < 1024; l106 = l106 + 1) {
			dsp->fVec29[l106] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l107;
		for (l107 = 0; l107 < 2; l107 = l107 + 1) {
			dsp->fRec85[l107] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l108;
		for (l108 = 0; l108 < 8192; l108 = l108 + 1) {
			dsp->fVec30[l108] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l109;
		for (l109 = 0; l109 < 2; l109 = l109 + 1) {
			dsp->fRec83[l109] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l110;
		for (l110 = 0; l110 < 2; l110 = l110 + 1) {
			dsp->fRec88[l110] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l111;
		for (l111 = 0; l111 < 4096; l111 = l111 + 1) {
			dsp->fVec31[l111] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l112;
		for (l112 = 0; l112 < 2; l112 = l112 + 1) {
			dsp->fRec81[l112] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l113;
		for (l113 = 0; l113 < 4096; l113 = l113 + 1) {
			dsp->fVec32[l113] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l114;
		for (l114 = 0; l114 < 2; l114 = l114 + 1) {
			dsp->fRec66[l114] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l115;
		for (l115 = 0; l115 < 1024; l115 = l115 + 1) {
			dsp->fVec33[l115] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l116;
		for (l116 = 0; l116 < 2; l116 = l116 + 1) {
			dsp->fRec92[l116] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l117;
		for (l117 = 0; l117 < 8192; l117 = l117 + 1) {
			dsp->fVec34[l117] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l118;
		for (l118 = 0; l118 < 2; l118 = l118 + 1) {
			dsp->fRec91[l118] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l119;
		for (l119 = 0; l119 < 2048; l119 = l119 + 1) {
			dsp->fVec35[l119] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l120;
		for (l120 = 0; l120 < 2; l120 = l120 + 1) {
			dsp->fRec89[l120] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l121;
		for (l121 = 0; l121 < 2048; l121 = l121 + 1) {
			dsp->fVec36[l121] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l122;
		for (l122 = 0; l122 < 2; l122 = l122 + 1) {
			dsp->fRec67[l122] = 0.0f;
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
	float fSlow33 = fSlow20 + fSlow17;
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
	float fSlow47 = fSlow17 + fSlow34;
	float fSlow48 = (float)(dsp->fEntry3);
	float fSlow49 = fmaxf(fSlow48, 23.44895f);
	float fSlow50 = fmaxf(2e+01f, fabsf(fSlow49));
	float fSlow51 = dsp->fConst3 / fSlow50;
	float fSlow52 = dsp->fConst4 * fSlow50;
	float fSlow53 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst5 / fSlow49));
	float fSlow54 = floorf(fSlow53);
	float fSlow55 = fSlow54 + (1.0f - fSlow53);
	int iSlow56 = (int)(fSlow53);
	float fSlow57 = fSlow53 - fSlow54;
	int iSlow58 = iSlow56 + 1;
	float fSlow59 = (float)(dsp->fButton3);
	int iSlow60 = fSlow59 == 0.0f;
	float fSlow61 = fSlow17 + fSlow48;
	float fSlow62 = (float)(dsp->fEntry4);
	float fSlow63 = fmaxf(fSlow62, 23.44895f);
	float fSlow64 = fmaxf(2e+01f, fabsf(fSlow63));
	float fSlow65 = dsp->fConst3 / fSlow64;
	float fSlow66 = dsp->fConst4 * fSlow64;
	float fSlow67 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst5 / fSlow63));
	float fSlow68 = floorf(fSlow67);
	float fSlow69 = fSlow68 + (1.0f - fSlow67);
	int iSlow70 = (int)(fSlow67);
	float fSlow71 = fSlow67 - fSlow68;
	int iSlow72 = iSlow70 + 1;
	float fSlow73 = (float)(dsp->fButton4);
	int iSlow74 = fSlow73 == 0.0f;
	float fSlow75 = fSlow17 + fSlow62;
	float fSlow76 = (float)(dsp->fEntry5);
	float fSlow77 = fSlow17 + fSlow76;
	float fSlow78 = (float)(dsp->fButton5);
	int iSlow79 = fSlow78 == 0.0f;
	float fSlow80 = fmaxf(fSlow76, 23.44895f);
	float fSlow81 = fmaxf(2e+01f, fabsf(fSlow80));
	float fSlow82 = dsp->fConst3 / fSlow81;
	float fSlow83 = dsp->fConst4 * fSlow81;
	float fSlow84 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst5 / fSlow80));
	float fSlow85 = floorf(fSlow84);
	float fSlow86 = fSlow85 + (1.0f - fSlow84);
	int iSlow87 = (int)(fSlow84);
	float fSlow88 = fSlow84 - fSlow85;
	int iSlow89 = iSlow87 + 1;
	float fSlow90 = (float)(dsp->fEntry6);
	float fSlow91 = fmaxf(fSlow90, 23.44895f);
	float fSlow92 = fmaxf(2e+01f, fabsf(fSlow91));
	float fSlow93 = dsp->fConst3 / fSlow92;
	float fSlow94 = dsp->fConst4 * fSlow92;
	float fSlow95 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst5 / fSlow91));
	float fSlow96 = floorf(fSlow95);
	float fSlow97 = fSlow96 + (1.0f - fSlow95);
	int iSlow98 = (int)(fSlow95);
	float fSlow99 = fSlow95 - fSlow96;
	int iSlow100 = iSlow98 + 1;
	float fSlow101 = (float)(dsp->fButton6);
	int iSlow102 = fSlow101 == 0.0f;
	float fSlow103 = fSlow17 + fSlow90;
	float fSlow104 = (float)(dsp->fEntry7);
	float fSlow105 = fmaxf(fSlow104, 23.44895f);
	float fSlow106 = fmaxf(2e+01f, fabsf(fSlow105));
	float fSlow107 = dsp->fConst3 / fSlow106;
	float fSlow108 = dsp->fConst4 * fSlow106;
	float fSlow109 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst5 / fSlow105));
	float fSlow110 = floorf(fSlow109);
	float fSlow111 = fSlow110 + (1.0f - fSlow109);
	int iSlow112 = (int)(fSlow109);
	float fSlow113 = fSlow109 - fSlow110;
	int iSlow114 = iSlow112 + 1;
	float fSlow115 = (float)(dsp->fButton7);
	int iSlow116 = fSlow115 == 0.0f;
	float fSlow117 = fSlow17 + fSlow104;
	float fSlow118 = dsp->fConst1 * (float)(dsp->fVslider2);
	float fSlow119 = dsp->fConst1 * (float)(dsp->fVslider3);
	float fSlow120 = dsp->fConst1 * (float)(dsp->fVslider4);
	float fSlow121 = dsp->fConst1 * (float)(dsp->fVslider5);
	float fSlow122 = dsp->fConst1 * (float)(dsp->fVslider6);
	float fSlow123 = dsp->fConst1 * (float)(dsp->fVslider7);
	float fSlow124 = dsp->fConst1 * (float)(dsp->fVslider8);
	float fSlow125 = 0.15f * fSlow1;
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
			float fTemp24 = ((iTemp2) ? 0.0f : fSlow52 + dsp->fRec31[1]);
			dsp->fRec31[0] = fTemp24 - floorf(fTemp24);
			float fTemp25 = mydsp_faustpower2_f(2.0f * dsp->fRec31[0] + -1.0f);
			dsp->fVec10[0] = fTemp25;
			float fTemp26 = fSlow51 * fTemp1 * (fTemp25 - dsp->fVec10[1]);
			dsp->fVec11[dsp->IOTA0 & 4095] = fTemp26;
			dsp->fVec12[0] = fSlow59;
			dsp->fRec32[0] = fSlow59 + dsp->fRec32[1] * (float)(dsp->fVec12[1] >= fSlow59);
			dsp->iRec33[0] = iSlow60 * (dsp->iRec33[1] + 1);
			float fTemp27 = (float)(dsp->iRec33[0]);
			float fTemp28 = fmaxf(0.0f, fminf(dsp->fConst6 * dsp->fRec32[0], 1.0f) - dsp->fConst7 * fTemp27);
			dsp->fVbargraph3 = (FAUSTFLOAT)(fTemp28);
			float fTemp29 = dsp->fConst8 * (fSlow61 + 3e+03f * fmaxf(0.0f, fminf(dsp->fConst9 * dsp->fRec32[0], 1.0f) - dsp->fConst10 * fTemp27));
			float fTemp30 = 1.0f - fTemp29;
			dsp->fRec30[0] = (fTemp26 - (fSlow55 * dsp->fVec11[(dsp->IOTA0 - iSlow56) & 4095] + fSlow57 * dsp->fVec11[(dsp->IOTA0 - iSlow58) & 4095])) * fTemp28 + fTemp30 * dsp->fRec30[1] + fSlow19 * dsp->fRec26[1];
			dsp->fRec29[0] = dsp->fRec30[0] + fTemp30 * dsp->fRec29[1];
			dsp->fRec28[0] = dsp->fRec29[0] + fTemp30 * dsp->fRec28[1];
			dsp->fRec27[0] = dsp->fRec28[0] + dsp->fRec27[1] * fTemp30;
			dsp->fRec26[0] = dsp->fRec27[0] * mydsp_faustpower4_f(fTemp29);
			float fTemp31 = ((iTemp2) ? 0.0f : fSlow66 + dsp->fRec39[1]);
			dsp->fRec39[0] = fTemp31 - floorf(fTemp31);
			float fTemp32 = mydsp_faustpower2_f(2.0f * dsp->fRec39[0] + -1.0f);
			dsp->fVec13[0] = fTemp32;
			float fTemp33 = fSlow65 * fTemp1 * (fTemp32 - dsp->fVec13[1]);
			dsp->fVec14[dsp->IOTA0 & 4095] = fTemp33;
			dsp->fVec15[0] = fSlow73;
			dsp->fRec40[0] = fSlow73 + dsp->fRec40[1] * (float)(dsp->fVec15[1] >= fSlow73);
			dsp->iRec41[0] = iSlow74 * (dsp->iRec41[1] + 1);
			float fTemp34 = (float)(dsp->iRec41[0]);
			float fTemp35 = fmaxf(0.0f, fminf(dsp->fConst6 * dsp->fRec40[0], 1.0f) - dsp->fConst7 * fTemp34);
			dsp->fVbargraph4 = (FAUSTFLOAT)(fTemp35);
			float fTemp36 = dsp->fConst8 * (fSlow75 + 3e+03f * fmaxf(0.0f, fminf(dsp->fConst9 * dsp->fRec40[0], 1.0f) - dsp->fConst10 * fTemp34));
			float fTemp37 = 1.0f - fTemp36;
			dsp->fRec38[0] = (fTemp33 - (fSlow69 * dsp->fVec14[(dsp->IOTA0 - iSlow70) & 4095] + fSlow71 * dsp->fVec14[(dsp->IOTA0 - iSlow72) & 4095])) * fTemp35 + fTemp37 * dsp->fRec38[1] + fSlow19 * dsp->fRec34[1];
			dsp->fRec37[0] = dsp->fRec38[0] + fTemp37 * dsp->fRec37[1];
			dsp->fRec36[0] = dsp->fRec37[0] + fTemp37 * dsp->fRec36[1];
			dsp->fRec35[0] = dsp->fRec36[0] + dsp->fRec35[1] * fTemp37;
			dsp->fRec34[0] = dsp->fRec35[0] * mydsp_faustpower4_f(fTemp36);
			dsp->fVec16[0] = fSlow78;
			dsp->fRec47[0] = fSlow78 + dsp->fRec47[1] * (float)(dsp->fVec16[1] >= fSlow78);
			dsp->iRec48[0] = iSlow79 * (dsp->iRec48[1] + 1);
			float fTemp38 = (float)(dsp->iRec48[0]);
			float fTemp39 = dsp->fConst8 * (fSlow77 + 3e+03f * fmaxf(0.0f, fminf(dsp->fConst9 * dsp->fRec47[0], 1.0f) - dsp->fConst10 * fTemp38));
			float fTemp40 = 1.0f - fTemp39;
			float fTemp41 = ((iTemp2) ? 0.0f : fSlow83 + dsp->fRec49[1]);
			dsp->fRec49[0] = fTemp41 - floorf(fTemp41);
			float fTemp42 = mydsp_faustpower2_f(2.0f * dsp->fRec49[0] + -1.0f);
			dsp->fVec17[0] = fTemp42;
			float fTemp43 = fSlow82 * fTemp1 * (fTemp42 - dsp->fVec17[1]);
			dsp->fVec18[dsp->IOTA0 & 4095] = fTemp43;
			float fTemp44 = fmaxf(0.0f, fminf(dsp->fConst6 * dsp->fRec47[0], 1.0f) - dsp->fConst7 * fTemp38);
			dsp->fVbargraph5 = (FAUSTFLOAT)(fTemp44);
			dsp->fRec46[0] = fTemp40 * dsp->fRec46[1] + fSlow19 * dsp->fRec42[1] + (fTemp43 - (fSlow86 * dsp->fVec18[(dsp->IOTA0 - iSlow87) & 4095] + fSlow88 * dsp->fVec18[(dsp->IOTA0 - iSlow89) & 4095])) * fTemp44;
			dsp->fRec45[0] = dsp->fRec46[0] + fTemp40 * dsp->fRec45[1];
			dsp->fRec44[0] = dsp->fRec45[0] + fTemp40 * dsp->fRec44[1];
			dsp->fRec43[0] = dsp->fRec44[0] + dsp->fRec43[1] * fTemp40;
			dsp->fRec42[0] = dsp->fRec43[0] * mydsp_faustpower4_f(fTemp39);
			float fTemp45 = ((iTemp2) ? 0.0f : fSlow94 + dsp->fRec55[1]);
			dsp->fRec55[0] = fTemp45 - floorf(fTemp45);
			float fTemp46 = mydsp_faustpower2_f(2.0f * dsp->fRec55[0] + -1.0f);
			dsp->fVec19[0] = fTemp46;
			float fTemp47 = fSlow93 * fTemp1 * (fTemp46 - dsp->fVec19[1]);
			dsp->fVec20[dsp->IOTA0 & 4095] = fTemp47;
			dsp->fVec21[0] = fSlow101;
			dsp->fRec56[0] = fSlow101 + dsp->fRec56[1] * (float)(dsp->fVec21[1] >= fSlow101);
			dsp->iRec57[0] = iSlow102 * (dsp->iRec57[1] + 1);
			float fTemp48 = (float)(dsp->iRec57[0]);
			float fTemp49 = fmaxf(0.0f, fminf(dsp->fConst6 * dsp->fRec56[0], 1.0f) - dsp->fConst7 * fTemp48);
			dsp->fVbargraph6 = (FAUSTFLOAT)(fTemp49);
			float fTemp50 = dsp->fConst8 * (fSlow103 + 3e+03f * fmaxf(0.0f, fminf(dsp->fConst9 * dsp->fRec56[0], 1.0f) - dsp->fConst10 * fTemp48));
			float fTemp51 = 1.0f - fTemp50;
			dsp->fRec54[0] = (fTemp47 - (fSlow97 * dsp->fVec20[(dsp->IOTA0 - iSlow98) & 4095] + fSlow99 * dsp->fVec20[(dsp->IOTA0 - iSlow100) & 4095])) * fTemp49 + fTemp51 * dsp->fRec54[1] + fSlow19 * dsp->fRec50[1];
			dsp->fRec53[0] = dsp->fRec54[0] + fTemp51 * dsp->fRec53[1];
			dsp->fRec52[0] = dsp->fRec53[0] + fTemp51 * dsp->fRec52[1];
			dsp->fRec51[0] = dsp->fRec52[0] + dsp->fRec51[1] * fTemp51;
			dsp->fRec50[0] = dsp->fRec51[0] * mydsp_faustpower4_f(fTemp50);
			float fTemp52 = ((iTemp2) ? 0.0f : fSlow108 + dsp->fRec63[1]);
			dsp->fRec63[0] = fTemp52 - floorf(fTemp52);
			float fTemp53 = mydsp_faustpower2_f(2.0f * dsp->fRec63[0] + -1.0f);
			dsp->fVec22[0] = fTemp53;
			float fTemp54 = fSlow107 * fTemp1 * (fTemp53 - dsp->fVec22[1]);
			dsp->fVec23[dsp->IOTA0 & 4095] = fTemp54;
			dsp->fVec24[0] = fSlow115;
			dsp->fRec64[0] = fSlow115 + dsp->fRec64[1] * (float)(dsp->fVec24[1] >= fSlow115);
			dsp->iRec65[0] = iSlow116 * (dsp->iRec65[1] + 1);
			float fTemp55 = (float)(dsp->iRec65[0]);
			float fTemp56 = fmaxf(0.0f, fminf(dsp->fConst6 * dsp->fRec64[0], 1.0f) - dsp->fConst7 * fTemp55);
			dsp->fVbargraph7 = (FAUSTFLOAT)(fTemp56);
			float fTemp57 = dsp->fConst8 * (fSlow117 + 3e+03f * fmaxf(0.0f, fminf(dsp->fConst9 * dsp->fRec64[0], 1.0f) - dsp->fConst10 * fTemp55));
			float fTemp58 = 1.0f - fTemp57;
			dsp->fRec62[0] = (fTemp54 - (fSlow111 * dsp->fVec23[(dsp->IOTA0 - iSlow112) & 4095] + fSlow113 * dsp->fVec23[(dsp->IOTA0 - iSlow114) & 4095])) * fTemp56 + fTemp58 * dsp->fRec62[1] + fSlow19 * dsp->fRec58[1];
			dsp->fRec61[0] = dsp->fRec62[0] + fTemp58 * dsp->fRec61[1];
			dsp->fRec60[0] = dsp->fRec61[0] + fTemp58 * dsp->fRec60[1];
			dsp->fRec59[0] = dsp->fRec60[0] + dsp->fRec59[1] * fTemp58;
			dsp->fRec58[0] = dsp->fRec59[0] * mydsp_faustpower4_f(fTemp57);
			float fTemp59 = dsp->fRec2[0] + dsp->fRec10[0] + dsp->fRec18[0] + dsp->fRec26[0] + dsp->fRec34[0] + dsp->fRec42[0] + dsp->fRec50[0] + dsp->fRec58[0];
			float fTemp60 = fSlow2 * (1.0f - 0.5f * fTemp0) * fTemp59;
			dsp->fRec77[0] = fSlow118 + dsp->fConst2 * dsp->fRec77[1];
			dsp->fRec76[0] = (1.0f - dsp->fRec77[0]) * dsp->fRec76[2] + fSlow2 * dsp->fRec77[0] * fTemp59;
			dsp->fRec78[0] = fSlow119 + dsp->fConst2 * dsp->fRec78[1];
			float fTemp61 = dsp->fRec76[0] - dsp->fRec78[0] * dsp->fRec74[1];
			dsp->fVec25[dsp->IOTA0 & 255] = fTemp61;
			dsp->fRec74[0] = dsp->fVec25[(dsp->IOTA0 - 142) & 255];
			float fRec75 = dsp->fRec78[0] * fTemp61;
			float fTemp62 = fRec75 + dsp->fRec74[1] - dsp->fRec78[0] * dsp->fRec72[1];
			dsp->fVec26[dsp->IOTA0 & 127] = fTemp62;
			dsp->fRec72[0] = dsp->fVec26[(dsp->IOTA0 - 107) & 127];
			float fRec73 = dsp->fRec78[0] * fTemp62;
			dsp->fRec79[0] = fSlow120 + dsp->fConst2 * dsp->fRec79[1];
			float fTemp63 = fRec73 + dsp->fRec72[1] - dsp->fRec79[0] * dsp->fRec70[1];
			dsp->fVec27[dsp->IOTA0 & 511] = fTemp63;
			dsp->fRec70[0] = dsp->fVec27[(dsp->IOTA0 - 379) & 511];
			float fRec71 = dsp->fRec79[0] * fTemp63;
			float fTemp64 = fRec71 + dsp->fRec70[1] - dsp->fRec79[0] * dsp->fRec68[1];
			dsp->fVec28[dsp->IOTA0 & 511] = fTemp64;
			dsp->fRec68[0] = dsp->fVec28[(dsp->IOTA0 - 277) & 511];
			float fRec69 = dsp->fRec79[0] * fTemp64;
			dsp->fRec80[0] = fSlow121 + dsp->fConst2 * dsp->fRec80[1];
			dsp->fRec84[0] = fSlow122 + dsp->fConst2 * dsp->fRec84[1];
			float fTemp65 = 1.0f - dsp->fRec84[0];
			dsp->fRec87[0] = fSlow123 + dsp->fConst2 * dsp->fRec87[1];
			float fTemp66 = dsp->fRec87[0] * dsp->fRec85[1] + dsp->fRec67[1];
			dsp->fVec29[dsp->IOTA0 & 1023] = fTemp66;
			dsp->fRec85[0] = dsp->fVec29[(dsp->IOTA0 - 908) & 1023];
			float fRec86 = 0.0f - dsp->fRec87[0] * fTemp66;
			dsp->fVec30[dsp->IOTA0 & 8191] = fRec86 + dsp->fRec85[1];
			dsp->fRec83[0] = dsp->fRec84[0] * dsp->fRec83[1] + fTemp65 * dsp->fVec30[(dsp->IOTA0 - 4217) & 8191];
			dsp->fRec88[0] = fSlow124 + dsp->fConst2 * dsp->fRec88[1];
			float fTemp67 = dsp->fRec83[0] * dsp->fRec80[0] - dsp->fRec88[0] * dsp->fRec81[1];
			dsp->fVec31[dsp->IOTA0 & 4095] = fTemp67;
			dsp->fRec81[0] = dsp->fVec31[(dsp->IOTA0 - 2656) & 4095];
			float fRec82 = dsp->fRec88[0] * fTemp67;
			dsp->fVec32[dsp->IOTA0 & 4095] = fRec82 + dsp->fRec81[1];
			dsp->fRec66[0] = dsp->fRec68[1] + fRec69 + dsp->fRec80[0] * dsp->fVec32[(dsp->IOTA0 - 2656) & 4095];
			float fTemp68 = dsp->fRec87[0] * dsp->fRec92[1] + dsp->fRec66[1];
			dsp->fVec33[dsp->IOTA0 & 1023] = fTemp68;
			dsp->fRec92[0] = dsp->fVec33[(dsp->IOTA0 - 672) & 1023];
			float fRec93 = 0.0f - dsp->fRec87[0] * fTemp68;
			dsp->fVec34[dsp->IOTA0 & 8191] = fRec93 + dsp->fRec92[1];
			dsp->fRec91[0] = dsp->fRec84[0] * dsp->fRec91[1] + fTemp65 * dsp->fVec34[(dsp->IOTA0 - 4453) & 8191];
			float fTemp69 = dsp->fRec80[0] * dsp->fRec91[0] - dsp->fRec88[0] * dsp->fRec89[1];
			dsp->fVec35[dsp->IOTA0 & 2047] = fTemp69;
			dsp->fRec89[0] = dsp->fVec35[(dsp->IOTA0 - 1800) & 2047];
			float fRec90 = dsp->fRec88[0] * fTemp69;
			dsp->fVec36[dsp->IOTA0 & 2047] = fRec90 + dsp->fRec89[1];
			dsp->fRec67[0] = fRec69 + dsp->fRec68[1] + dsp->fRec80[0] * dsp->fVec36[(dsp->IOTA0 - 1800) & 2047];
			float fTemp70 = fSlow125 * fTemp59;
			output0[i0] = (FAUSTFLOAT)(dsp->fRec0[0] * (fTemp60 + 0.5f * fTemp0 * dsp->fRec66[0]) + fTemp70);
			output1[i0] = (FAUSTFLOAT)(fTemp70 + dsp->fRec0[0] * (fTemp60 + 0.5f * fTemp0 * dsp->fRec67[0]));
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
			dsp->fRec31[1] = dsp->fRec31[0];
			dsp->fVec10[1] = dsp->fVec10[0];
			dsp->fVec12[1] = dsp->fVec12[0];
			dsp->fRec32[1] = dsp->fRec32[0];
			dsp->iRec33[1] = dsp->iRec33[0];
			dsp->fRec30[1] = dsp->fRec30[0];
			dsp->fRec29[1] = dsp->fRec29[0];
			dsp->fRec28[1] = dsp->fRec28[0];
			dsp->fRec27[1] = dsp->fRec27[0];
			dsp->fRec26[1] = dsp->fRec26[0];
			dsp->fRec39[1] = dsp->fRec39[0];
			dsp->fVec13[1] = dsp->fVec13[0];
			dsp->fVec15[1] = dsp->fVec15[0];
			dsp->fRec40[1] = dsp->fRec40[0];
			dsp->iRec41[1] = dsp->iRec41[0];
			dsp->fRec38[1] = dsp->fRec38[0];
			dsp->fRec37[1] = dsp->fRec37[0];
			dsp->fRec36[1] = dsp->fRec36[0];
			dsp->fRec35[1] = dsp->fRec35[0];
			dsp->fRec34[1] = dsp->fRec34[0];
			dsp->fVec16[1] = dsp->fVec16[0];
			dsp->fRec47[1] = dsp->fRec47[0];
			dsp->iRec48[1] = dsp->iRec48[0];
			dsp->fRec49[1] = dsp->fRec49[0];
			dsp->fVec17[1] = dsp->fVec17[0];
			dsp->fRec46[1] = dsp->fRec46[0];
			dsp->fRec45[1] = dsp->fRec45[0];
			dsp->fRec44[1] = dsp->fRec44[0];
			dsp->fRec43[1] = dsp->fRec43[0];
			dsp->fRec42[1] = dsp->fRec42[0];
			dsp->fRec55[1] = dsp->fRec55[0];
			dsp->fVec19[1] = dsp->fVec19[0];
			dsp->fVec21[1] = dsp->fVec21[0];
			dsp->fRec56[1] = dsp->fRec56[0];
			dsp->iRec57[1] = dsp->iRec57[0];
			dsp->fRec54[1] = dsp->fRec54[0];
			dsp->fRec53[1] = dsp->fRec53[0];
			dsp->fRec52[1] = dsp->fRec52[0];
			dsp->fRec51[1] = dsp->fRec51[0];
			dsp->fRec50[1] = dsp->fRec50[0];
			dsp->fRec63[1] = dsp->fRec63[0];
			dsp->fVec22[1] = dsp->fVec22[0];
			dsp->fVec24[1] = dsp->fVec24[0];
			dsp->fRec64[1] = dsp->fRec64[0];
			dsp->iRec65[1] = dsp->iRec65[0];
			dsp->fRec62[1] = dsp->fRec62[0];
			dsp->fRec61[1] = dsp->fRec61[0];
			dsp->fRec60[1] = dsp->fRec60[0];
			dsp->fRec59[1] = dsp->fRec59[0];
			dsp->fRec58[1] = dsp->fRec58[0];
			dsp->fRec77[1] = dsp->fRec77[0];
			dsp->fRec76[2] = dsp->fRec76[1];
			dsp->fRec76[1] = dsp->fRec76[0];
			dsp->fRec78[1] = dsp->fRec78[0];
			dsp->fRec74[1] = dsp->fRec74[0];
			dsp->fRec72[1] = dsp->fRec72[0];
			dsp->fRec79[1] = dsp->fRec79[0];
			dsp->fRec70[1] = dsp->fRec70[0];
			dsp->fRec68[1] = dsp->fRec68[0];
			dsp->fRec80[1] = dsp->fRec80[0];
			dsp->fRec84[1] = dsp->fRec84[0];
			dsp->fRec87[1] = dsp->fRec87[0];
			dsp->fRec85[1] = dsp->fRec85[0];
			dsp->fRec83[1] = dsp->fRec83[0];
			dsp->fRec88[1] = dsp->fRec88[0];
			dsp->fRec81[1] = dsp->fRec81[0];
			dsp->fRec66[1] = dsp->fRec66[0];
			dsp->fRec92[1] = dsp->fRec92[0];
			dsp->fRec91[1] = dsp->fRec91[0];
			dsp->fRec89[1] = dsp->fRec89[0];
			dsp->fRec67[1] = dsp->fRec67[0];
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
