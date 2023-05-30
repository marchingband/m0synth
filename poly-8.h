/* ------------------------------------------------------------
name: "poly 8"
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
	FAUSTFLOAT fEntry0;
	int iVec0[2];
	float fConst2;
	float fRec5[2];
	float fVec1[2];
	int IOTA0;
	float fVec2[4096];
	float fConst3;
	float fConst4;
	FAUSTFLOAT fButton0;
	float fVec3[2];
	float fRec6[2];
	float fConst5;
	int iRec7[2];
	FAUSTFLOAT fVbargraph0;
	float fConst6;
	FAUSTFLOAT fHslider0;
	float fConst7;
	float fConst8;
	FAUSTFLOAT fHslider1;
	float fRec4[2];
	float fRec3[2];
	float fRec2[2];
	float fRec1[2];
	float fRec0[2];
	FAUSTFLOAT fEntry1;
	FAUSTFLOAT fButton1;
	float fVec4[2];
	float fRec13[2];
	int iRec14[2];
	float fRec15[2];
	float fVec5[2];
	float fVec6[4096];
	FAUSTFLOAT fVbargraph1;
	float fRec12[2];
	float fRec11[2];
	float fRec10[2];
	float fRec9[2];
	float fRec8[2];
	FAUSTFLOAT fEntry2;
	FAUSTFLOAT fButton2;
	float fVec7[2];
	float fRec21[2];
	int iRec22[2];
	float fRec23[2];
	float fVec8[2];
	float fVec9[4096];
	FAUSTFLOAT fVbargraph2;
	float fRec20[2];
	float fRec19[2];
	float fRec18[2];
	float fRec17[2];
	float fRec16[2];
	FAUSTFLOAT fEntry3;
	float fRec29[2];
	float fVec10[2];
	float fVec11[4096];
	FAUSTFLOAT fButton3;
	float fVec12[2];
	float fRec30[2];
	int iRec31[2];
	FAUSTFLOAT fVbargraph3;
	float fRec28[2];
	float fRec27[2];
	float fRec26[2];
	float fRec25[2];
	float fRec24[2];
	FAUSTFLOAT fEntry4;
	float fRec37[2];
	float fVec13[2];
	float fVec14[4096];
	FAUSTFLOAT fButton4;
	float fVec15[2];
	float fRec38[2];
	int iRec39[2];
	FAUSTFLOAT fVbargraph4;
	float fRec36[2];
	float fRec35[2];
	float fRec34[2];
	float fRec33[2];
	float fRec32[2];
	FAUSTFLOAT fEntry5;
	float fRec45[2];
	float fVec16[2];
	float fVec17[4096];
	FAUSTFLOAT fButton5;
	float fVec18[2];
	float fRec46[2];
	int iRec47[2];
	FAUSTFLOAT fVbargraph5;
	float fRec44[2];
	float fRec43[2];
	float fRec42[2];
	float fRec41[2];
	float fRec40[2];
	FAUSTFLOAT fEntry6;
	float fRec53[2];
	float fVec19[2];
	float fVec20[4096];
	FAUSTFLOAT fButton6;
	float fVec21[2];
	float fRec54[2];
	int iRec55[2];
	FAUSTFLOAT fVbargraph6;
	float fRec52[2];
	float fRec51[2];
	float fRec50[2];
	float fRec49[2];
	float fRec48[2];
	FAUSTFLOAT fEntry7;
	float fRec61[2];
	float fVec22[2];
	float fVec23[4096];
	FAUSTFLOAT fButton7;
	float fVec24[2];
	float fRec62[2];
	int iRec63[2];
	FAUSTFLOAT fVbargraph7;
	float fRec60[2];
	float fRec59[2];
	float fRec58[2];
	float fRec57[2];
	float fRec56[2];
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
	dsp->fEntry0 = (FAUSTFLOAT)(8e+02f);
	dsp->fButton0 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider0 = (FAUSTFLOAT)(1e+03f);
	dsp->fHslider1 = (FAUSTFLOAT)(0.2f);
	dsp->fEntry1 = (FAUSTFLOAT)(7e+02f);
	dsp->fButton1 = (FAUSTFLOAT)(0.0f);
	dsp->fEntry2 = (FAUSTFLOAT)(3e+02f);
	dsp->fButton2 = (FAUSTFLOAT)(0.0f);
	dsp->fEntry3 = (FAUSTFLOAT)(2e+02f);
	dsp->fButton3 = (FAUSTFLOAT)(0.0f);
	dsp->fEntry4 = (FAUSTFLOAT)(1e+02f);
	dsp->fButton4 = (FAUSTFLOAT)(0.0f);
	dsp->fEntry5 = (FAUSTFLOAT)(6e+02f);
	dsp->fButton5 = (FAUSTFLOAT)(0.0f);
	dsp->fEntry6 = (FAUSTFLOAT)(4e+02f);
	dsp->fButton6 = (FAUSTFLOAT)(0.0f);
	dsp->fEntry7 = (FAUSTFLOAT)(5e+02f);
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
			dsp->fVec1[l2] = 0.0f;
		}
	}
	dsp->IOTA0 = 0;
	/* C99 loop */
	{
		int l3;
		for (l3 = 0; l3 < 4096; l3 = l3 + 1) {
			dsp->fVec2[l3] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l4;
		for (l4 = 0; l4 < 2; l4 = l4 + 1) {
			dsp->fVec3[l4] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l5;
		for (l5 = 0; l5 < 2; l5 = l5 + 1) {
			dsp->fRec6[l5] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; l6 < 2; l6 = l6 + 1) {
			dsp->iRec7[l6] = 0;
		}
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; l7 < 2; l7 = l7 + 1) {
			dsp->fRec4[l7] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l8;
		for (l8 = 0; l8 < 2; l8 = l8 + 1) {
			dsp->fRec3[l8] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l9;
		for (l9 = 0; l9 < 2; l9 = l9 + 1) {
			dsp->fRec2[l9] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l10;
		for (l10 = 0; l10 < 2; l10 = l10 + 1) {
			dsp->fRec1[l10] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l11;
		for (l11 = 0; l11 < 2; l11 = l11 + 1) {
			dsp->fRec0[l11] = 0.0f;
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
		for (l13 = 0; l13 < 2; l13 = l13 + 1) {
			dsp->fRec13[l13] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l14;
		for (l14 = 0; l14 < 2; l14 = l14 + 1) {
			dsp->iRec14[l14] = 0;
		}
	}
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; l15 < 2; l15 = l15 + 1) {
			dsp->fRec15[l15] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l16;
		for (l16 = 0; l16 < 2; l16 = l16 + 1) {
			dsp->fVec5[l16] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l17;
		for (l17 = 0; l17 < 4096; l17 = l17 + 1) {
			dsp->fVec6[l17] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l18;
		for (l18 = 0; l18 < 2; l18 = l18 + 1) {
			dsp->fRec12[l18] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l19;
		for (l19 = 0; l19 < 2; l19 = l19 + 1) {
			dsp->fRec11[l19] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; l20 < 2; l20 = l20 + 1) {
			dsp->fRec10[l20] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; l21 < 2; l21 = l21 + 1) {
			dsp->fRec9[l21] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; l22 < 2; l22 = l22 + 1) {
			dsp->fRec8[l22] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l23;
		for (l23 = 0; l23 < 2; l23 = l23 + 1) {
			dsp->fVec7[l23] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l24;
		for (l24 = 0; l24 < 2; l24 = l24 + 1) {
			dsp->fRec21[l24] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; l25 < 2; l25 = l25 + 1) {
			dsp->iRec22[l25] = 0;
		}
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; l26 < 2; l26 = l26 + 1) {
			dsp->fRec23[l26] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; l27 < 2; l27 = l27 + 1) {
			dsp->fVec8[l27] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l28;
		for (l28 = 0; l28 < 4096; l28 = l28 + 1) {
			dsp->fVec9[l28] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l29;
		for (l29 = 0; l29 < 2; l29 = l29 + 1) {
			dsp->fRec20[l29] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l30;
		for (l30 = 0; l30 < 2; l30 = l30 + 1) {
			dsp->fRec19[l30] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l31;
		for (l31 = 0; l31 < 2; l31 = l31 + 1) {
			dsp->fRec18[l31] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l32;
		for (l32 = 0; l32 < 2; l32 = l32 + 1) {
			dsp->fRec17[l32] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l33;
		for (l33 = 0; l33 < 2; l33 = l33 + 1) {
			dsp->fRec16[l33] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l34;
		for (l34 = 0; l34 < 2; l34 = l34 + 1) {
			dsp->fRec29[l34] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l35;
		for (l35 = 0; l35 < 2; l35 = l35 + 1) {
			dsp->fVec10[l35] = 0.0f;
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
			dsp->fVec12[l37] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l38;
		for (l38 = 0; l38 < 2; l38 = l38 + 1) {
			dsp->fRec30[l38] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l39;
		for (l39 = 0; l39 < 2; l39 = l39 + 1) {
			dsp->iRec31[l39] = 0;
		}
	}
	/* C99 loop */
	{
		int l40;
		for (l40 = 0; l40 < 2; l40 = l40 + 1) {
			dsp->fRec28[l40] = 0.0f;
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
			dsp->fRec26[l42] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l43;
		for (l43 = 0; l43 < 2; l43 = l43 + 1) {
			dsp->fRec25[l43] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l44;
		for (l44 = 0; l44 < 2; l44 = l44 + 1) {
			dsp->fRec24[l44] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l45;
		for (l45 = 0; l45 < 2; l45 = l45 + 1) {
			dsp->fRec37[l45] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l46;
		for (l46 = 0; l46 < 2; l46 = l46 + 1) {
			dsp->fVec13[l46] = 0.0f;
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
			dsp->fVec15[l48] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l49;
		for (l49 = 0; l49 < 2; l49 = l49 + 1) {
			dsp->fRec38[l49] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l50;
		for (l50 = 0; l50 < 2; l50 = l50 + 1) {
			dsp->iRec39[l50] = 0;
		}
	}
	/* C99 loop */
	{
		int l51;
		for (l51 = 0; l51 < 2; l51 = l51 + 1) {
			dsp->fRec36[l51] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l52;
		for (l52 = 0; l52 < 2; l52 = l52 + 1) {
			dsp->fRec35[l52] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l53;
		for (l53 = 0; l53 < 2; l53 = l53 + 1) {
			dsp->fRec34[l53] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l54;
		for (l54 = 0; l54 < 2; l54 = l54 + 1) {
			dsp->fRec33[l54] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l55;
		for (l55 = 0; l55 < 2; l55 = l55 + 1) {
			dsp->fRec32[l55] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l56;
		for (l56 = 0; l56 < 2; l56 = l56 + 1) {
			dsp->fRec45[l56] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l57;
		for (l57 = 0; l57 < 2; l57 = l57 + 1) {
			dsp->fVec16[l57] = 0.0f;
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
			dsp->fVec18[l59] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l60;
		for (l60 = 0; l60 < 2; l60 = l60 + 1) {
			dsp->fRec46[l60] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l61;
		for (l61 = 0; l61 < 2; l61 = l61 + 1) {
			dsp->iRec47[l61] = 0;
		}
	}
	/* C99 loop */
	{
		int l62;
		for (l62 = 0; l62 < 2; l62 = l62 + 1) {
			dsp->fRec44[l62] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l63;
		for (l63 = 0; l63 < 2; l63 = l63 + 1) {
			dsp->fRec43[l63] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l64;
		for (l64 = 0; l64 < 2; l64 = l64 + 1) {
			dsp->fRec42[l64] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l65;
		for (l65 = 0; l65 < 2; l65 = l65 + 1) {
			dsp->fRec41[l65] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l66;
		for (l66 = 0; l66 < 2; l66 = l66 + 1) {
			dsp->fRec40[l66] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l67;
		for (l67 = 0; l67 < 2; l67 = l67 + 1) {
			dsp->fRec53[l67] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l68;
		for (l68 = 0; l68 < 2; l68 = l68 + 1) {
			dsp->fVec19[l68] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l69;
		for (l69 = 0; l69 < 4096; l69 = l69 + 1) {
			dsp->fVec20[l69] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l70;
		for (l70 = 0; l70 < 2; l70 = l70 + 1) {
			dsp->fVec21[l70] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l71;
		for (l71 = 0; l71 < 2; l71 = l71 + 1) {
			dsp->fRec54[l71] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l72;
		for (l72 = 0; l72 < 2; l72 = l72 + 1) {
			dsp->iRec55[l72] = 0;
		}
	}
	/* C99 loop */
	{
		int l73;
		for (l73 = 0; l73 < 2; l73 = l73 + 1) {
			dsp->fRec52[l73] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l74;
		for (l74 = 0; l74 < 2; l74 = l74 + 1) {
			dsp->fRec51[l74] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l75;
		for (l75 = 0; l75 < 2; l75 = l75 + 1) {
			dsp->fRec50[l75] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l76;
		for (l76 = 0; l76 < 2; l76 = l76 + 1) {
			dsp->fRec49[l76] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l77;
		for (l77 = 0; l77 < 2; l77 = l77 + 1) {
			dsp->fRec48[l77] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l78;
		for (l78 = 0; l78 < 2; l78 = l78 + 1) {
			dsp->fRec61[l78] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l79;
		for (l79 = 0; l79 < 2; l79 = l79 + 1) {
			dsp->fVec22[l79] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l80;
		for (l80 = 0; l80 < 4096; l80 = l80 + 1) {
			dsp->fVec23[l80] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l81;
		for (l81 = 0; l81 < 2; l81 = l81 + 1) {
			dsp->fVec24[l81] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l82;
		for (l82 = 0; l82 < 2; l82 = l82 + 1) {
			dsp->fRec62[l82] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l83;
		for (l83 = 0; l83 < 2; l83 = l83 + 1) {
			dsp->iRec63[l83] = 0;
		}
	}
	/* C99 loop */
	{
		int l84;
		for (l84 = 0; l84 < 2; l84 = l84 + 1) {
			dsp->fRec60[l84] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l85;
		for (l85 = 0; l85 < 2; l85 = l85 + 1) {
			dsp->fRec59[l85] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l86;
		for (l86 = 0; l86 < 2; l86 = l86 + 1) {
			dsp->fRec58[l86] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l87;
		for (l87 = 0; l87 < 2; l87 = l87 + 1) {
			dsp->fRec57[l87] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l88;
		for (l88 = 0; l88 < 2; l88 = l88 + 1) {
			dsp->fRec56[l88] = 0.0f;
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
	dsp->fConst7 = 1.0f / fmaxf(1.0f, fConst0);
	dsp->fConst8 = 1.0f / fmaxf(1.0f, 1.5f * fConst0);
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
	float fSlow0 = (float)(dsp->fEntry0);
	float fSlow1 = fmaxf(fSlow0, 23.44895f);
	float fSlow2 = fmaxf(2e+01f, fabsf(fSlow1));
	float fSlow3 = dsp->fConst1 / fSlow2;
	float fSlow4 = dsp->fConst2 * fSlow2;
	float fSlow5 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst3 / fSlow1));
	float fSlow6 = floorf(fSlow5);
	float fSlow7 = fSlow6 + (1.0f - fSlow5);
	int iSlow8 = (int)(fSlow5);
	float fSlow9 = fSlow5 - fSlow6;
	int iSlow10 = iSlow8 + 1;
	float fSlow11 = (float)(dsp->fButton0);
	int iSlow12 = fSlow11 == 0.0f;
	float fSlow13 = (float)(dsp->fHslider0);
	float fSlow14 = fSlow0 + fSlow13;
	float fSlow15 = 0.0f - 4.0f * fmaxf(0.0f, fminf((float)(dsp->fHslider1), 0.999999f));
	float fSlow16 = (float)(dsp->fEntry1);
	float fSlow17 = fSlow13 + fSlow16;
	float fSlow18 = (float)(dsp->fButton1);
	int iSlow19 = fSlow18 == 0.0f;
	float fSlow20 = fmaxf(fSlow16, 23.44895f);
	float fSlow21 = fmaxf(2e+01f, fabsf(fSlow20));
	float fSlow22 = dsp->fConst1 / fSlow21;
	float fSlow23 = dsp->fConst2 * fSlow21;
	float fSlow24 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst3 / fSlow20));
	float fSlow25 = floorf(fSlow24);
	float fSlow26 = fSlow25 + (1.0f - fSlow24);
	int iSlow27 = (int)(fSlow24);
	float fSlow28 = fSlow24 - fSlow25;
	int iSlow29 = iSlow27 + 1;
	float fSlow30 = (float)(dsp->fEntry2);
	float fSlow31 = fSlow13 + fSlow30;
	float fSlow32 = (float)(dsp->fButton2);
	int iSlow33 = fSlow32 == 0.0f;
	float fSlow34 = fmaxf(fSlow30, 23.44895f);
	float fSlow35 = fmaxf(2e+01f, fabsf(fSlow34));
	float fSlow36 = dsp->fConst1 / fSlow35;
	float fSlow37 = dsp->fConst2 * fSlow35;
	float fSlow38 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst3 / fSlow34));
	float fSlow39 = floorf(fSlow38);
	float fSlow40 = fSlow39 + (1.0f - fSlow38);
	int iSlow41 = (int)(fSlow38);
	float fSlow42 = fSlow38 - fSlow39;
	int iSlow43 = iSlow41 + 1;
	float fSlow44 = (float)(dsp->fEntry3);
	float fSlow45 = fmaxf(fSlow44, 23.44895f);
	float fSlow46 = fmaxf(2e+01f, fabsf(fSlow45));
	float fSlow47 = dsp->fConst1 / fSlow46;
	float fSlow48 = dsp->fConst2 * fSlow46;
	float fSlow49 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst3 / fSlow45));
	float fSlow50 = floorf(fSlow49);
	float fSlow51 = fSlow50 + (1.0f - fSlow49);
	int iSlow52 = (int)(fSlow49);
	float fSlow53 = fSlow49 - fSlow50;
	int iSlow54 = iSlow52 + 1;
	float fSlow55 = (float)(dsp->fButton3);
	int iSlow56 = fSlow55 == 0.0f;
	float fSlow57 = fSlow13 + fSlow44;
	float fSlow58 = (float)(dsp->fEntry4);
	float fSlow59 = fmaxf(fSlow58, 23.44895f);
	float fSlow60 = fmaxf(2e+01f, fabsf(fSlow59));
	float fSlow61 = dsp->fConst1 / fSlow60;
	float fSlow62 = dsp->fConst2 * fSlow60;
	float fSlow63 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst3 / fSlow59));
	float fSlow64 = floorf(fSlow63);
	float fSlow65 = fSlow64 + (1.0f - fSlow63);
	int iSlow66 = (int)(fSlow63);
	float fSlow67 = fSlow63 - fSlow64;
	int iSlow68 = iSlow66 + 1;
	float fSlow69 = (float)(dsp->fButton4);
	int iSlow70 = fSlow69 == 0.0f;
	float fSlow71 = fSlow13 + fSlow58;
	float fSlow72 = (float)(dsp->fEntry5);
	float fSlow73 = fmaxf(fSlow72, 23.44895f);
	float fSlow74 = fmaxf(2e+01f, fabsf(fSlow73));
	float fSlow75 = dsp->fConst1 / fSlow74;
	float fSlow76 = dsp->fConst2 * fSlow74;
	float fSlow77 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst3 / fSlow73));
	float fSlow78 = floorf(fSlow77);
	float fSlow79 = fSlow78 + (1.0f - fSlow77);
	int iSlow80 = (int)(fSlow77);
	float fSlow81 = fSlow77 - fSlow78;
	int iSlow82 = iSlow80 + 1;
	float fSlow83 = (float)(dsp->fButton5);
	int iSlow84 = fSlow83 == 0.0f;
	float fSlow85 = fSlow13 + fSlow72;
	float fSlow86 = (float)(dsp->fEntry6);
	float fSlow87 = fmaxf(fSlow86, 23.44895f);
	float fSlow88 = fmaxf(2e+01f, fabsf(fSlow87));
	float fSlow89 = dsp->fConst1 / fSlow88;
	float fSlow90 = dsp->fConst2 * fSlow88;
	float fSlow91 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst3 / fSlow87));
	float fSlow92 = floorf(fSlow91);
	float fSlow93 = fSlow92 + (1.0f - fSlow91);
	int iSlow94 = (int)(fSlow91);
	float fSlow95 = fSlow91 - fSlow92;
	int iSlow96 = iSlow94 + 1;
	float fSlow97 = (float)(dsp->fButton6);
	int iSlow98 = fSlow97 == 0.0f;
	float fSlow99 = fSlow13 + fSlow86;
	float fSlow100 = (float)(dsp->fEntry7);
	float fSlow101 = fmaxf(fSlow100, 23.44895f);
	float fSlow102 = fmaxf(2e+01f, fabsf(fSlow101));
	float fSlow103 = dsp->fConst1 / fSlow102;
	float fSlow104 = dsp->fConst2 * fSlow102;
	float fSlow105 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst3 / fSlow101));
	float fSlow106 = floorf(fSlow105);
	float fSlow107 = fSlow106 + (1.0f - fSlow105);
	int iSlow108 = (int)(fSlow105);
	float fSlow109 = fSlow105 - fSlow106;
	int iSlow110 = iSlow108 + 1;
	float fSlow111 = (float)(dsp->fButton7);
	int iSlow112 = fSlow111 == 0.0f;
	float fSlow113 = fSlow13 + fSlow100;
	/* C99 loop */
	{
		int i0;
		for (i0 = 0; i0 < count; i0 = i0 + 1) {
			dsp->iVec0[0] = 1;
			float fTemp0 = (float)(dsp->iVec0[1]);
			int iTemp1 = 1 - dsp->iVec0[1];
			float fTemp2 = ((iTemp1) ? 0.0f : fSlow4 + dsp->fRec5[1]);
			dsp->fRec5[0] = fTemp2 - floorf(fTemp2);
			float fTemp3 = mydsp_faustpower2_f(2.0f * dsp->fRec5[0] + -1.0f);
			dsp->fVec1[0] = fTemp3;
			float fTemp4 = fSlow3 * fTemp0 * (fTemp3 - dsp->fVec1[1]);
			dsp->fVec2[dsp->IOTA0 & 4095] = fTemp4;
			dsp->fVec3[0] = fSlow11;
			dsp->fRec6[0] = fSlow11 + dsp->fRec6[1] * (float)(dsp->fVec3[1] >= fSlow11);
			dsp->iRec7[0] = iSlow12 * (dsp->iRec7[1] + 1);
			float fTemp5 = (float)(dsp->iRec7[0]);
			float fTemp6 = fmaxf(0.0f, fminf(dsp->fConst4 * dsp->fRec6[0], 1.0f) - dsp->fConst5 * fTemp5);
			dsp->fVbargraph0 = (FAUSTFLOAT)(fTemp6);
			float fTemp7 = dsp->fConst6 * (fSlow14 + 3e+03f * fmaxf(0.0f, fminf(dsp->fConst7 * dsp->fRec6[0], 1.0f) - dsp->fConst8 * fTemp5));
			float fTemp8 = 1.0f - fTemp7;
			dsp->fRec4[0] = (fTemp4 - (fSlow7 * dsp->fVec2[(dsp->IOTA0 - iSlow8) & 4095] + fSlow9 * dsp->fVec2[(dsp->IOTA0 - iSlow10) & 4095])) * fTemp6 + fTemp8 * dsp->fRec4[1] + fSlow15 * dsp->fRec0[1];
			dsp->fRec3[0] = dsp->fRec4[0] + fTemp8 * dsp->fRec3[1];
			dsp->fRec2[0] = dsp->fRec3[0] + fTemp8 * dsp->fRec2[1];
			dsp->fRec1[0] = dsp->fRec2[0] + dsp->fRec1[1] * fTemp8;
			dsp->fRec0[0] = dsp->fRec1[0] * mydsp_faustpower4_f(fTemp7);
			dsp->fVec4[0] = fSlow18;
			dsp->fRec13[0] = fSlow18 + dsp->fRec13[1] * (float)(dsp->fVec4[1] >= fSlow18);
			dsp->iRec14[0] = iSlow19 * (dsp->iRec14[1] + 1);
			float fTemp9 = (float)(dsp->iRec14[0]);
			float fTemp10 = dsp->fConst6 * (fSlow17 + 3e+03f * fmaxf(0.0f, fminf(dsp->fConst7 * dsp->fRec13[0], 1.0f) - dsp->fConst8 * fTemp9));
			float fTemp11 = 1.0f - fTemp10;
			float fTemp12 = ((iTemp1) ? 0.0f : fSlow23 + dsp->fRec15[1]);
			dsp->fRec15[0] = fTemp12 - floorf(fTemp12);
			float fTemp13 = mydsp_faustpower2_f(2.0f * dsp->fRec15[0] + -1.0f);
			dsp->fVec5[0] = fTemp13;
			float fTemp14 = fSlow22 * fTemp0 * (fTemp13 - dsp->fVec5[1]);
			dsp->fVec6[dsp->IOTA0 & 4095] = fTemp14;
			float fTemp15 = fmaxf(0.0f, fminf(dsp->fConst4 * dsp->fRec13[0], 1.0f) - dsp->fConst5 * fTemp9);
			dsp->fVbargraph1 = (FAUSTFLOAT)(fTemp15);
			dsp->fRec12[0] = fSlow15 * dsp->fRec8[1] + fTemp11 * dsp->fRec12[1] + (fTemp14 - (fSlow26 * dsp->fVec6[(dsp->IOTA0 - iSlow27) & 4095] + fSlow28 * dsp->fVec6[(dsp->IOTA0 - iSlow29) & 4095])) * fTemp15;
			dsp->fRec11[0] = dsp->fRec12[0] + fTemp11 * dsp->fRec11[1];
			dsp->fRec10[0] = dsp->fRec11[0] + fTemp11 * dsp->fRec10[1];
			dsp->fRec9[0] = dsp->fRec10[0] + dsp->fRec9[1] * fTemp11;
			dsp->fRec8[0] = dsp->fRec9[0] * mydsp_faustpower4_f(fTemp10);
			dsp->fVec7[0] = fSlow32;
			dsp->fRec21[0] = fSlow32 + dsp->fRec21[1] * (float)(dsp->fVec7[1] >= fSlow32);
			dsp->iRec22[0] = iSlow33 * (dsp->iRec22[1] + 1);
			float fTemp16 = (float)(dsp->iRec22[0]);
			float fTemp17 = dsp->fConst6 * (fSlow31 + 3e+03f * fmaxf(0.0f, fminf(dsp->fConst7 * dsp->fRec21[0], 1.0f) - dsp->fConst8 * fTemp16));
			float fTemp18 = 1.0f - fTemp17;
			float fTemp19 = ((iTemp1) ? 0.0f : fSlow37 + dsp->fRec23[1]);
			dsp->fRec23[0] = fTemp19 - floorf(fTemp19);
			float fTemp20 = mydsp_faustpower2_f(2.0f * dsp->fRec23[0] + -1.0f);
			dsp->fVec8[0] = fTemp20;
			float fTemp21 = fSlow36 * fTemp0 * (fTemp20 - dsp->fVec8[1]);
			dsp->fVec9[dsp->IOTA0 & 4095] = fTemp21;
			float fTemp22 = fmaxf(0.0f, fminf(dsp->fConst4 * dsp->fRec21[0], 1.0f) - dsp->fConst5 * fTemp16);
			dsp->fVbargraph2 = (FAUSTFLOAT)(fTemp22);
			dsp->fRec20[0] = fSlow15 * dsp->fRec16[1] + fTemp18 * dsp->fRec20[1] + (fTemp21 - (fSlow40 * dsp->fVec9[(dsp->IOTA0 - iSlow41) & 4095] + fSlow42 * dsp->fVec9[(dsp->IOTA0 - iSlow43) & 4095])) * fTemp22;
			dsp->fRec19[0] = dsp->fRec20[0] + fTemp18 * dsp->fRec19[1];
			dsp->fRec18[0] = dsp->fRec19[0] + fTemp18 * dsp->fRec18[1];
			dsp->fRec17[0] = dsp->fRec18[0] + dsp->fRec17[1] * fTemp18;
			dsp->fRec16[0] = dsp->fRec17[0] * mydsp_faustpower4_f(fTemp17);
			float fTemp23 = ((iTemp1) ? 0.0f : fSlow48 + dsp->fRec29[1]);
			dsp->fRec29[0] = fTemp23 - floorf(fTemp23);
			float fTemp24 = mydsp_faustpower2_f(2.0f * dsp->fRec29[0] + -1.0f);
			dsp->fVec10[0] = fTemp24;
			float fTemp25 = fSlow47 * fTemp0 * (fTemp24 - dsp->fVec10[1]);
			dsp->fVec11[dsp->IOTA0 & 4095] = fTemp25;
			dsp->fVec12[0] = fSlow55;
			dsp->fRec30[0] = fSlow55 + dsp->fRec30[1] * (float)(dsp->fVec12[1] >= fSlow55);
			dsp->iRec31[0] = iSlow56 * (dsp->iRec31[1] + 1);
			float fTemp26 = (float)(dsp->iRec31[0]);
			float fTemp27 = fmaxf(0.0f, fminf(dsp->fConst4 * dsp->fRec30[0], 1.0f) - dsp->fConst5 * fTemp26);
			dsp->fVbargraph3 = (FAUSTFLOAT)(fTemp27);
			float fTemp28 = dsp->fConst6 * (fSlow57 + 3e+03f * fmaxf(0.0f, fminf(dsp->fConst7 * dsp->fRec30[0], 1.0f) - dsp->fConst8 * fTemp26));
			float fTemp29 = 1.0f - fTemp28;
			dsp->fRec28[0] = (fTemp25 - (fSlow51 * dsp->fVec11[(dsp->IOTA0 - iSlow52) & 4095] + fSlow53 * dsp->fVec11[(dsp->IOTA0 - iSlow54) & 4095])) * fTemp27 + fTemp29 * dsp->fRec28[1] + fSlow15 * dsp->fRec24[1];
			dsp->fRec27[0] = dsp->fRec28[0] + fTemp29 * dsp->fRec27[1];
			dsp->fRec26[0] = dsp->fRec27[0] + fTemp29 * dsp->fRec26[1];
			dsp->fRec25[0] = dsp->fRec26[0] + dsp->fRec25[1] * fTemp29;
			dsp->fRec24[0] = dsp->fRec25[0] * mydsp_faustpower4_f(fTemp28);
			float fTemp30 = ((iTemp1) ? 0.0f : fSlow62 + dsp->fRec37[1]);
			dsp->fRec37[0] = fTemp30 - floorf(fTemp30);
			float fTemp31 = mydsp_faustpower2_f(2.0f * dsp->fRec37[0] + -1.0f);
			dsp->fVec13[0] = fTemp31;
			float fTemp32 = fSlow61 * fTemp0 * (fTemp31 - dsp->fVec13[1]);
			dsp->fVec14[dsp->IOTA0 & 4095] = fTemp32;
			dsp->fVec15[0] = fSlow69;
			dsp->fRec38[0] = fSlow69 + dsp->fRec38[1] * (float)(dsp->fVec15[1] >= fSlow69);
			dsp->iRec39[0] = iSlow70 * (dsp->iRec39[1] + 1);
			float fTemp33 = (float)(dsp->iRec39[0]);
			float fTemp34 = fmaxf(0.0f, fminf(dsp->fConst4 * dsp->fRec38[0], 1.0f) - dsp->fConst5 * fTemp33);
			dsp->fVbargraph4 = (FAUSTFLOAT)(fTemp34);
			float fTemp35 = dsp->fConst6 * (fSlow71 + 3e+03f * fmaxf(0.0f, fminf(dsp->fConst7 * dsp->fRec38[0], 1.0f) - dsp->fConst8 * fTemp33));
			float fTemp36 = 1.0f - fTemp35;
			dsp->fRec36[0] = (fTemp32 - (fSlow65 * dsp->fVec14[(dsp->IOTA0 - iSlow66) & 4095] + fSlow67 * dsp->fVec14[(dsp->IOTA0 - iSlow68) & 4095])) * fTemp34 + fTemp36 * dsp->fRec36[1] + fSlow15 * dsp->fRec32[1];
			dsp->fRec35[0] = dsp->fRec36[0] + fTemp36 * dsp->fRec35[1];
			dsp->fRec34[0] = dsp->fRec35[0] + fTemp36 * dsp->fRec34[1];
			dsp->fRec33[0] = dsp->fRec34[0] + dsp->fRec33[1] * fTemp36;
			dsp->fRec32[0] = dsp->fRec33[0] * mydsp_faustpower4_f(fTemp35);
			float fTemp37 = ((iTemp1) ? 0.0f : fSlow76 + dsp->fRec45[1]);
			dsp->fRec45[0] = fTemp37 - floorf(fTemp37);
			float fTemp38 = mydsp_faustpower2_f(2.0f * dsp->fRec45[0] + -1.0f);
			dsp->fVec16[0] = fTemp38;
			float fTemp39 = fSlow75 * fTemp0 * (fTemp38 - dsp->fVec16[1]);
			dsp->fVec17[dsp->IOTA0 & 4095] = fTemp39;
			dsp->fVec18[0] = fSlow83;
			dsp->fRec46[0] = fSlow83 + dsp->fRec46[1] * (float)(dsp->fVec18[1] >= fSlow83);
			dsp->iRec47[0] = iSlow84 * (dsp->iRec47[1] + 1);
			float fTemp40 = (float)(dsp->iRec47[0]);
			float fTemp41 = fmaxf(0.0f, fminf(dsp->fConst4 * dsp->fRec46[0], 1.0f) - dsp->fConst5 * fTemp40);
			dsp->fVbargraph5 = (FAUSTFLOAT)(fTemp41);
			float fTemp42 = dsp->fConst6 * (fSlow85 + 3e+03f * fmaxf(0.0f, fminf(dsp->fConst7 * dsp->fRec46[0], 1.0f) - dsp->fConst8 * fTemp40));
			float fTemp43 = 1.0f - fTemp42;
			dsp->fRec44[0] = (fTemp39 - (fSlow79 * dsp->fVec17[(dsp->IOTA0 - iSlow80) & 4095] + fSlow81 * dsp->fVec17[(dsp->IOTA0 - iSlow82) & 4095])) * fTemp41 + fTemp43 * dsp->fRec44[1] + fSlow15 * dsp->fRec40[1];
			dsp->fRec43[0] = dsp->fRec44[0] + fTemp43 * dsp->fRec43[1];
			dsp->fRec42[0] = dsp->fRec43[0] + fTemp43 * dsp->fRec42[1];
			dsp->fRec41[0] = dsp->fRec42[0] + dsp->fRec41[1] * fTemp43;
			dsp->fRec40[0] = dsp->fRec41[0] * mydsp_faustpower4_f(fTemp42);
			float fTemp44 = ((iTemp1) ? 0.0f : fSlow90 + dsp->fRec53[1]);
			dsp->fRec53[0] = fTemp44 - floorf(fTemp44);
			float fTemp45 = mydsp_faustpower2_f(2.0f * dsp->fRec53[0] + -1.0f);
			dsp->fVec19[0] = fTemp45;
			float fTemp46 = fSlow89 * fTemp0 * (fTemp45 - dsp->fVec19[1]);
			dsp->fVec20[dsp->IOTA0 & 4095] = fTemp46;
			dsp->fVec21[0] = fSlow97;
			dsp->fRec54[0] = fSlow97 + dsp->fRec54[1] * (float)(dsp->fVec21[1] >= fSlow97);
			dsp->iRec55[0] = iSlow98 * (dsp->iRec55[1] + 1);
			float fTemp47 = (float)(dsp->iRec55[0]);
			float fTemp48 = fmaxf(0.0f, fminf(dsp->fConst4 * dsp->fRec54[0], 1.0f) - dsp->fConst5 * fTemp47);
			dsp->fVbargraph6 = (FAUSTFLOAT)(fTemp48);
			float fTemp49 = dsp->fConst6 * (fSlow99 + 3e+03f * fmaxf(0.0f, fminf(dsp->fConst7 * dsp->fRec54[0], 1.0f) - dsp->fConst8 * fTemp47));
			float fTemp50 = 1.0f - fTemp49;
			dsp->fRec52[0] = (fTemp46 - (fSlow93 * dsp->fVec20[(dsp->IOTA0 - iSlow94) & 4095] + fSlow95 * dsp->fVec20[(dsp->IOTA0 - iSlow96) & 4095])) * fTemp48 + fTemp50 * dsp->fRec52[1] + fSlow15 * dsp->fRec48[1];
			dsp->fRec51[0] = dsp->fRec52[0] + fTemp50 * dsp->fRec51[1];
			dsp->fRec50[0] = dsp->fRec51[0] + fTemp50 * dsp->fRec50[1];
			dsp->fRec49[0] = dsp->fRec50[0] + dsp->fRec49[1] * fTemp50;
			dsp->fRec48[0] = dsp->fRec49[0] * mydsp_faustpower4_f(fTemp49);
			float fTemp51 = ((iTemp1) ? 0.0f : fSlow104 + dsp->fRec61[1]);
			dsp->fRec61[0] = fTemp51 - floorf(fTemp51);
			float fTemp52 = mydsp_faustpower2_f(2.0f * dsp->fRec61[0] + -1.0f);
			dsp->fVec22[0] = fTemp52;
			float fTemp53 = fSlow103 * fTemp0 * (fTemp52 - dsp->fVec22[1]);
			dsp->fVec23[dsp->IOTA0 & 4095] = fTemp53;
			dsp->fVec24[0] = fSlow111;
			dsp->fRec62[0] = fSlow111 + dsp->fRec62[1] * (float)(dsp->fVec24[1] >= fSlow111);
			dsp->iRec63[0] = iSlow112 * (dsp->iRec63[1] + 1);
			float fTemp54 = (float)(dsp->iRec63[0]);
			float fTemp55 = fmaxf(0.0f, fminf(dsp->fConst4 * dsp->fRec62[0], 1.0f) - dsp->fConst5 * fTemp54);
			dsp->fVbargraph7 = (FAUSTFLOAT)(fTemp55);
			float fTemp56 = dsp->fConst6 * (fSlow113 + 3e+03f * fmaxf(0.0f, fminf(dsp->fConst7 * dsp->fRec62[0], 1.0f) - dsp->fConst8 * fTemp54));
			float fTemp57 = 1.0f - fTemp56;
			dsp->fRec60[0] = (fTemp53 - (fSlow107 * dsp->fVec23[(dsp->IOTA0 - iSlow108) & 4095] + fSlow109 * dsp->fVec23[(dsp->IOTA0 - iSlow110) & 4095])) * fTemp55 + fTemp57 * dsp->fRec60[1] + fSlow15 * dsp->fRec56[1];
			dsp->fRec59[0] = dsp->fRec60[0] + fTemp57 * dsp->fRec59[1];
			dsp->fRec58[0] = dsp->fRec59[0] + fTemp57 * dsp->fRec58[1];
			dsp->fRec57[0] = dsp->fRec58[0] + dsp->fRec57[1] * fTemp57;
			dsp->fRec56[0] = dsp->fRec57[0] * mydsp_faustpower4_f(fTemp56);
			output0[i0] = (FAUSTFLOAT)(0.15f * (dsp->fRec0[0] + dsp->fRec8[0] + dsp->fRec16[0] + dsp->fRec24[0] + dsp->fRec32[0] + dsp->fRec40[0] + dsp->fRec48[0] + dsp->fRec56[0]));
			dsp->iVec0[1] = dsp->iVec0[0];
			dsp->fRec5[1] = dsp->fRec5[0];
			dsp->fVec1[1] = dsp->fVec1[0];
			dsp->IOTA0 = dsp->IOTA0 + 1;
			dsp->fVec3[1] = dsp->fVec3[0];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->iRec7[1] = dsp->iRec7[0];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->fRec3[1] = dsp->fRec3[0];
			dsp->fRec2[1] = dsp->fRec2[0];
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fVec4[1] = dsp->fVec4[0];
			dsp->fRec13[1] = dsp->fRec13[0];
			dsp->iRec14[1] = dsp->iRec14[0];
			dsp->fRec15[1] = dsp->fRec15[0];
			dsp->fVec5[1] = dsp->fVec5[0];
			dsp->fRec12[1] = dsp->fRec12[0];
			dsp->fRec11[1] = dsp->fRec11[0];
			dsp->fRec10[1] = dsp->fRec10[0];
			dsp->fRec9[1] = dsp->fRec9[0];
			dsp->fRec8[1] = dsp->fRec8[0];
			dsp->fVec7[1] = dsp->fVec7[0];
			dsp->fRec21[1] = dsp->fRec21[0];
			dsp->iRec22[1] = dsp->iRec22[0];
			dsp->fRec23[1] = dsp->fRec23[0];
			dsp->fVec8[1] = dsp->fVec8[0];
			dsp->fRec20[1] = dsp->fRec20[0];
			dsp->fRec19[1] = dsp->fRec19[0];
			dsp->fRec18[1] = dsp->fRec18[0];
			dsp->fRec17[1] = dsp->fRec17[0];
			dsp->fRec16[1] = dsp->fRec16[0];
			dsp->fRec29[1] = dsp->fRec29[0];
			dsp->fVec10[1] = dsp->fVec10[0];
			dsp->fVec12[1] = dsp->fVec12[0];
			dsp->fRec30[1] = dsp->fRec30[0];
			dsp->iRec31[1] = dsp->iRec31[0];
			dsp->fRec28[1] = dsp->fRec28[0];
			dsp->fRec27[1] = dsp->fRec27[0];
			dsp->fRec26[1] = dsp->fRec26[0];
			dsp->fRec25[1] = dsp->fRec25[0];
			dsp->fRec24[1] = dsp->fRec24[0];
			dsp->fRec37[1] = dsp->fRec37[0];
			dsp->fVec13[1] = dsp->fVec13[0];
			dsp->fVec15[1] = dsp->fVec15[0];
			dsp->fRec38[1] = dsp->fRec38[0];
			dsp->iRec39[1] = dsp->iRec39[0];
			dsp->fRec36[1] = dsp->fRec36[0];
			dsp->fRec35[1] = dsp->fRec35[0];
			dsp->fRec34[1] = dsp->fRec34[0];
			dsp->fRec33[1] = dsp->fRec33[0];
			dsp->fRec32[1] = dsp->fRec32[0];
			dsp->fRec45[1] = dsp->fRec45[0];
			dsp->fVec16[1] = dsp->fVec16[0];
			dsp->fVec18[1] = dsp->fVec18[0];
			dsp->fRec46[1] = dsp->fRec46[0];
			dsp->iRec47[1] = dsp->iRec47[0];
			dsp->fRec44[1] = dsp->fRec44[0];
			dsp->fRec43[1] = dsp->fRec43[0];
			dsp->fRec42[1] = dsp->fRec42[0];
			dsp->fRec41[1] = dsp->fRec41[0];
			dsp->fRec40[1] = dsp->fRec40[0];
			dsp->fRec53[1] = dsp->fRec53[0];
			dsp->fVec19[1] = dsp->fVec19[0];
			dsp->fVec21[1] = dsp->fVec21[0];
			dsp->fRec54[1] = dsp->fRec54[0];
			dsp->iRec55[1] = dsp->iRec55[0];
			dsp->fRec52[1] = dsp->fRec52[0];
			dsp->fRec51[1] = dsp->fRec51[0];
			dsp->fRec50[1] = dsp->fRec50[0];
			dsp->fRec49[1] = dsp->fRec49[0];
			dsp->fRec48[1] = dsp->fRec48[0];
			dsp->fRec61[1] = dsp->fRec61[0];
			dsp->fVec22[1] = dsp->fVec22[0];
			dsp->fVec24[1] = dsp->fVec24[0];
			dsp->fRec62[1] = dsp->fRec62[0];
			dsp->iRec63[1] = dsp->iRec63[0];
			dsp->fRec60[1] = dsp->fRec60[0];
			dsp->fRec59[1] = dsp->fRec59[0];
			dsp->fRec58[1] = dsp->fRec58[0];
			dsp->fRec57[1] = dsp->fRec57[0];
			dsp->fRec56[1] = dsp->fRec56[0];
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
