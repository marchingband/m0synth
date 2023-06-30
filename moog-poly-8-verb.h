/* ------------------------------------------------------------
name: "moog poly 8 verb"
Code generated with Faust 2.59.9 (https://faust.grame.fr)
Compilation options: -lang c -ct 1 -es 1 -mcd 16 -single -ftz 0
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
#include <dsp.h>

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
	FAUSTFLOAT fButton1;
	float fVec4[2];
	float fRec9[2];
	float fConst10;
	int iRec10[2];
	FAUSTFLOAT fHslider2;
	float fRec5[2];
	float fRec4[2];
	float fRec3[2];
	float fRec2[2];
	float fRec1[2];
	FAUSTFLOAT fVslider1;
	float fRec11[2];
	FAUSTFLOAT fVslider2;
	float fRec23[2];
	float fRec22[3];
	FAUSTFLOAT fVslider3;
	float fRec24[2];
	float fVec5[256];
	float fRec20[2];
	float fVec6[128];
	float fRec18[2];
	FAUSTFLOAT fVslider4;
	float fRec25[2];
	float fVec7[512];
	float fRec16[2];
	float fVec8[512];
	float fRec14[2];
	FAUSTFLOAT fVslider5;
	float fRec26[2];
	FAUSTFLOAT fVslider6;
	float fRec30[2];
	FAUSTFLOAT fVslider7;
	float fRec33[2];
	float fVec9[1024];
	float fRec31[2];
	float fVec10[8192];
	float fRec29[2];
	FAUSTFLOAT fVslider8;
	float fRec34[2];
	float fVec11[4096];
	float fRec27[2];
	float fVec12[4096];
	float fRec12[2];
	float fVec13[1024];
	float fRec38[2];
	float fVec14[8192];
	float fRec37[2];
	float fVec15[2048];
	float fRec35[2];
	float fVec16[2048];
	float fRec13[2];
} mydsp;

mydsp* newmydsp() { 
	mydsp* dsp = (mydsp*)calloc(1, sizeof(mydsp));
	return dsp;
}

void deletemydsp(mydsp* dsp) { 
	free(dsp);
}

void metadatamydsp(MetaGlue* m) { 
	m->declare(m->metaInterface, "basics.lib/name", "Faust Basic Element Library");
	m->declare(m->metaInterface, "basics.lib/tabulateNd", "Copyright (C) 2023 Bart Brouns <bart@magnetophon.nl>");
	m->declare(m->metaInterface, "basics.lib/version", "0.10");
	m->declare(m->metaInterface, "compile_options", "-lang c -ct 1 -es 1 -mcd 16 -single -ftz 0");
	m->declare(m->metaInterface, "demos.lib/dattorro_rev_demo:author", "Jakob Zerbian");
	m->declare(m->metaInterface, "demos.lib/dattorro_rev_demo:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "demos.lib/name", "Faust Demos Library");
	m->declare(m->metaInterface, "demos.lib/version", "0.1");
	m->declare(m->metaInterface, "envelopes.lib/asr:author", "Yann Orlarey, Stéphane Letz");
	m->declare(m->metaInterface, "envelopes.lib/author", "GRAME");
	m->declare(m->metaInterface, "envelopes.lib/copyright", "GRAME");
	m->declare(m->metaInterface, "envelopes.lib/license", "LGPL with exception");
	m->declare(m->metaInterface, "envelopes.lib/name", "Faust Envelope Library");
	m->declare(m->metaInterface, "envelopes.lib/version", "0.2");
	m->declare(m->metaInterface, "filename", "moog-poly-8-verb.dsp");
	m->declare(m->metaInterface, "filters.lib/lowpass0_highpass1", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/name", "Faust Filters Library");
	m->declare(m->metaInterface, "filters.lib/pole:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/pole:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/pole:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/version", "0.3");
	m->declare(m->metaInterface, "maths.lib/author", "GRAME");
	m->declare(m->metaInterface, "maths.lib/copyright", "GRAME");
	m->declare(m->metaInterface, "maths.lib/license", "LGPL with exception");
	m->declare(m->metaInterface, "maths.lib/name", "Faust Math Library");
	m->declare(m->metaInterface, "maths.lib/version", "2.6");
	m->declare(m->metaInterface, "name", "moog poly 8 verb");
	m->declare(m->metaInterface, "options", "[midi:on]");
	m->declare(m->metaInterface, "oscillators.lib/lf_sawpos:author", "Bart Brouns, revised by Stéphane Letz");
	m->declare(m->metaInterface, "oscillators.lib/lf_sawpos:licence", "STK-4.3");
	m->declare(m->metaInterface, "oscillators.lib/name", "Faust Oscillator Library");
	m->declare(m->metaInterface, "oscillators.lib/sawN:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "oscillators.lib/sawN:license", "STK-4.3");
	m->declare(m->metaInterface, "oscillators.lib/version", "0.4");
	m->declare(m->metaInterface, "platform.lib/name", "Generic Platform Library");
	m->declare(m->metaInterface, "platform.lib/version", "0.3");
	m->declare(m->metaInterface, "reverbs.lib/dattorro_rev:author", "Jakob Zerbian");
	m->declare(m->metaInterface, "reverbs.lib/dattorro_rev:licence", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "reverbs.lib/name", "Faust Reverb Library");
	m->declare(m->metaInterface, "reverbs.lib/version", "0.2");
	m->declare(m->metaInterface, "routes.lib/name", "Faust Signal Routing Library");
	m->declare(m->metaInterface, "routes.lib/version", "0.2");
	m->declare(m->metaInterface, "signals.lib/name", "Faust Signal Routing Library");
	m->declare(m->metaInterface, "signals.lib/version", "0.3");
	m->declare(m->metaInterface, "vaeffects.lib/moog_vcf:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "vaeffects.lib/moog_vcf:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "vaeffects.lib/moog_vcf:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "vaeffects.lib/name", "Faust Virtual Analog Filter Effect Library");
	m->declare(m->metaInterface, "vaeffects.lib/version", "0.2");
}

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
	dsp->fButton1 = (FAUSTFLOAT)(0.0f);
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
			dsp->fVec4[l8] = 0.0f;
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
			dsp->iRec10[l10] = 0;
		}
	}
	/* C99 loop */
	{
		int l11;
		for (l11 = 0; l11 < 2; l11 = l11 + 1) {
			dsp->fRec5[l11] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l12;
		for (l12 = 0; l12 < 2; l12 = l12 + 1) {
			dsp->fRec4[l12] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l13;
		for (l13 = 0; l13 < 2; l13 = l13 + 1) {
			dsp->fRec3[l13] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l14;
		for (l14 = 0; l14 < 2; l14 = l14 + 1) {
			dsp->fRec2[l14] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; l15 < 2; l15 = l15 + 1) {
			dsp->fRec1[l15] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l16;
		for (l16 = 0; l16 < 2; l16 = l16 + 1) {
			dsp->fRec11[l16] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l17;
		for (l17 = 0; l17 < 2; l17 = l17 + 1) {
			dsp->fRec23[l17] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l18;
		for (l18 = 0; l18 < 3; l18 = l18 + 1) {
			dsp->fRec22[l18] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l19;
		for (l19 = 0; l19 < 2; l19 = l19 + 1) {
			dsp->fRec24[l19] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; l20 < 256; l20 = l20 + 1) {
			dsp->fVec5[l20] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; l21 < 2; l21 = l21 + 1) {
			dsp->fRec20[l21] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; l22 < 128; l22 = l22 + 1) {
			dsp->fVec6[l22] = 0.0f;
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
			dsp->fRec25[l24] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; l25 < 512; l25 = l25 + 1) {
			dsp->fVec7[l25] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; l26 < 2; l26 = l26 + 1) {
			dsp->fRec16[l26] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; l27 < 512; l27 = l27 + 1) {
			dsp->fVec8[l27] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l28;
		for (l28 = 0; l28 < 2; l28 = l28 + 1) {
			dsp->fRec14[l28] = 0.0f;
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
		for (l30 = 0; l30 < 2; l30 = l30 + 1) {
			dsp->fRec30[l30] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l31;
		for (l31 = 0; l31 < 2; l31 = l31 + 1) {
			dsp->fRec33[l31] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l32;
		for (l32 = 0; l32 < 1024; l32 = l32 + 1) {
			dsp->fVec9[l32] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l33;
		for (l33 = 0; l33 < 2; l33 = l33 + 1) {
			dsp->fRec31[l33] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l34;
		for (l34 = 0; l34 < 8192; l34 = l34 + 1) {
			dsp->fVec10[l34] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l35;
		for (l35 = 0; l35 < 2; l35 = l35 + 1) {
			dsp->fRec29[l35] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l36;
		for (l36 = 0; l36 < 2; l36 = l36 + 1) {
			dsp->fRec34[l36] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l37;
		for (l37 = 0; l37 < 4096; l37 = l37 + 1) {
			dsp->fVec11[l37] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l38;
		for (l38 = 0; l38 < 2; l38 = l38 + 1) {
			dsp->fRec27[l38] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l39;
		for (l39 = 0; l39 < 4096; l39 = l39 + 1) {
			dsp->fVec12[l39] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l40;
		for (l40 = 0; l40 < 2; l40 = l40 + 1) {
			dsp->fRec12[l40] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l41;
		for (l41 = 0; l41 < 1024; l41 = l41 + 1) {
			dsp->fVec13[l41] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l42;
		for (l42 = 0; l42 < 2; l42 = l42 + 1) {
			dsp->fRec38[l42] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l43;
		for (l43 = 0; l43 < 8192; l43 = l43 + 1) {
			dsp->fVec14[l43] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l44;
		for (l44 = 0; l44 < 2; l44 = l44 + 1) {
			dsp->fRec37[l44] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l45;
		for (l45 = 0; l45 < 2048; l45 = l45 + 1) {
			dsp->fVec15[l45] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l46;
		for (l46 = 0; l46 < 2; l46 = l46 + 1) {
			dsp->fRec35[l46] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l47;
		for (l47 = 0; l47 < 2048; l47 = l47 + 1) {
			dsp->fVec16[l47] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l48;
		for (l48 = 0; l48 < 2; l48 = l48 + 1) {
			dsp->fRec13[l48] = 0.0f;
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

void buildUserInterfacemydsp(mydsp* dsp, UIGlue* ui_interface) {
	ui_interface->openVerticalBox(ui_interface->uiInterface, "moog poly 8 verb");
	ui_interface->declare(ui_interface->uiInterface, 0, "0", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "Dattorro Reverb");
	ui_interface->declare(ui_interface->uiInterface, 0, "0", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "Input");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider2, "1", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider2, "style", "knob");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider2, "tooltip", "lowpass-like filter, 0 = no signal, 1 = no filtering");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "Prefilter", &dsp->fVslider2, (FAUSTFLOAT)0.7f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider3, "2", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider3, "style", "knob");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider3, "tooltip", "diffusion factor, influences reverb color and density");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "Diffusion 1", &dsp->fVslider3, (FAUSTFLOAT)0.625f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider4, "3", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider4, "style", "knob");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider4, "tooltip", "diffusion factor, influences reverb color and density");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "Diffusion 2", &dsp->fVslider4, (FAUSTFLOAT)0.625f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "1", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "Feedback");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider7, "1", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider7, "style", "knob");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider7, "tooltip", "diffusion factor, influences reverb color and density");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "Diffusion 1", &dsp->fVslider7, (FAUSTFLOAT)0.625f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider8, "2", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider8, "style", "knob");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider8, "tooltip", "diffusion factor, influences reverb color and density");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "Diffusion 2", &dsp->fVslider8, (FAUSTFLOAT)0.625f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider5, "3", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider5, "style", "knob");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider5, "tooltip", "decay length, 1 = infinite");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "Decay Rate", &dsp->fVslider5, (FAUSTFLOAT)0.7f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider6, "4", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider6, "style", "knob");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider6, "tooltip", "dampening in feedback network");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "Damping", &dsp->fVslider6, (FAUSTFLOAT)0.625f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "2", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "Output");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider1, "1", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider1, "style", "knob");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider1, "tooltip", "-1 = dry, 1 = wet");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "Dry/Wet Mix", &dsp->fVslider1, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.01f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider0, "2", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider0, "style", "knob");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider0, "tooltip", "Output Gain");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider0, "unit", "dB");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "Level", &dsp->fVslider0, (FAUSTFLOAT)-6.0f, (FAUSTFLOAT)-7e+01f, (FAUSTFLOAT)4e+01f, (FAUSTFLOAT)0.1f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->addVerticalBargraph(ui_interface->uiInterface, "adsr_0", &dsp->fVbargraph0, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fEntry0, "midi", "1");
	ui_interface->addNumEntry(ui_interface->uiInterface, "cv_0", &dsp->fEntry0, (FAUSTFLOAT)1e+02f, (FAUSTFLOAT)2e+01f, (FAUSTFLOAT)2e+04f, (FAUSTFLOAT)0.1f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider1, "midi", "3");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "freq", &dsp->fHslider1, (FAUSTFLOAT)1e+03f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)2e+03f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fButton1, "midi", "12");
	ui_interface->addButton(ui_interface->uiInterface, "gate_f_0", &dsp->fButton1);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fButton0, "midi", "11");
	ui_interface->addButton(ui_interface->uiInterface, "gate_v_0", &dsp->fButton0);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider0, "midi", "4");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "mix", &dsp->fHslider0, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider2, "midi", "2");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "res", &dsp->fHslider2, (FAUSTFLOAT)0.2f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
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
	float fSlow17 = (float)(dsp->fButton1);
	int iSlow18 = fSlow17 == 0.0f;
	float fSlow19 = 0.0f - 4.0f * fmaxf(0.0f, fminf((float)(dsp->fHslider2), 0.999999f));
	float fSlow20 = dsp->fConst1 * (float)(dsp->fVslider1);
	float fSlow21 = dsp->fConst1 * (float)(dsp->fVslider2);
	float fSlow22 = dsp->fConst1 * (float)(dsp->fVslider3);
	float fSlow23 = dsp->fConst1 * (float)(dsp->fVslider4);
	float fSlow24 = dsp->fConst1 * (float)(dsp->fVslider5);
	float fSlow25 = dsp->fConst1 * (float)(dsp->fVslider6);
	float fSlow26 = dsp->fConst1 * (float)(dsp->fVslider7);
	float fSlow27 = dsp->fConst1 * (float)(dsp->fVslider8);
	float fSlow28 = 0.15f * fSlow1;
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
			float fTemp3 = fmaxf(0.0f, fminf(dsp->fConst6 * dsp->fRec7[0], 1.0f) - dsp->fConst7 * (float)(dsp->iRec8[0]));
			dsp->fVbargraph0 = (FAUSTFLOAT)(fTemp3);
			dsp->fVec4[0] = fSlow17;
			dsp->fRec9[0] = fSlow17 + dsp->fRec9[1] * (float)(dsp->fVec4[1] >= fSlow17);
			dsp->iRec10[0] = iSlow18 * (dsp->iRec10[1] + 1);
			float fTemp4 = dsp->fConst8 * (fSlow16 + 3e+03f * fmaxf(0.0f, fminf(dsp->fConst9 * dsp->fRec9[0], 1.0f) - dsp->fConst10 * (float)(dsp->iRec10[0])));
			float fTemp5 = 1.0f - fTemp4;
			dsp->fRec5[0] = (fTemp2 - (fSlow10 * dsp->fVec2[(dsp->IOTA0 - iSlow11) & 4095] + fSlow12 * dsp->fVec2[(dsp->IOTA0 - iSlow13) & 4095])) * fTemp3 + fTemp5 * dsp->fRec5[1] + fSlow19 * dsp->fRec1[1];
			dsp->fRec4[0] = dsp->fRec5[0] + fTemp5 * dsp->fRec4[1];
			dsp->fRec3[0] = dsp->fRec4[0] + fTemp5 * dsp->fRec3[1];
			dsp->fRec2[0] = dsp->fRec3[0] + dsp->fRec2[1] * fTemp5;
			dsp->fRec1[0] = dsp->fRec2[0] * mydsp_faustpower4_f(fTemp4);
			dsp->fRec11[0] = fSlow20 + dsp->fConst2 * dsp->fRec11[1];
			float fTemp6 = dsp->fRec11[0] + 1.0f;
			float fTemp7 = fSlow2 * dsp->fRec1[0] * (1.0f - 0.5f * fTemp6);
			dsp->fRec23[0] = fSlow21 + dsp->fConst2 * dsp->fRec23[1];
			dsp->fRec22[0] = (1.0f - dsp->fRec23[0]) * dsp->fRec22[2] + fSlow2 * dsp->fRec1[0] * dsp->fRec23[0];
			dsp->fRec24[0] = fSlow22 + dsp->fConst2 * dsp->fRec24[1];
			float fTemp8 = dsp->fRec22[0] - dsp->fRec24[0] * dsp->fRec20[1];
			dsp->fVec5[dsp->IOTA0 & 255] = fTemp8;
			dsp->fRec20[0] = dsp->fVec5[(dsp->IOTA0 - 142) & 255];
			float fRec21 = dsp->fRec24[0] * fTemp8;
			float fTemp9 = fRec21 + dsp->fRec20[1] - dsp->fRec24[0] * dsp->fRec18[1];
			dsp->fVec6[dsp->IOTA0 & 127] = fTemp9;
			dsp->fRec18[0] = dsp->fVec6[(dsp->IOTA0 - 107) & 127];
			float fRec19 = dsp->fRec24[0] * fTemp9;
			dsp->fRec25[0] = fSlow23 + dsp->fConst2 * dsp->fRec25[1];
			float fTemp10 = fRec19 + dsp->fRec18[1] - dsp->fRec25[0] * dsp->fRec16[1];
			dsp->fVec7[dsp->IOTA0 & 511] = fTemp10;
			dsp->fRec16[0] = dsp->fVec7[(dsp->IOTA0 - 379) & 511];
			float fRec17 = dsp->fRec25[0] * fTemp10;
			float fTemp11 = fRec17 + dsp->fRec16[1] - dsp->fRec25[0] * dsp->fRec14[1];
			dsp->fVec8[dsp->IOTA0 & 511] = fTemp11;
			dsp->fRec14[0] = dsp->fVec8[(dsp->IOTA0 - 277) & 511];
			float fRec15 = dsp->fRec25[0] * fTemp11;
			dsp->fRec26[0] = fSlow24 + dsp->fConst2 * dsp->fRec26[1];
			dsp->fRec30[0] = fSlow25 + dsp->fConst2 * dsp->fRec30[1];
			float fTemp12 = 1.0f - dsp->fRec30[0];
			dsp->fRec33[0] = fSlow26 + dsp->fConst2 * dsp->fRec33[1];
			float fTemp13 = dsp->fRec33[0] * dsp->fRec31[1] + dsp->fRec13[1];
			dsp->fVec9[dsp->IOTA0 & 1023] = fTemp13;
			dsp->fRec31[0] = dsp->fVec9[(dsp->IOTA0 - 908) & 1023];
			float fRec32 = 0.0f - dsp->fRec33[0] * fTemp13;
			dsp->fVec10[dsp->IOTA0 & 8191] = fRec32 + dsp->fRec31[1];
			dsp->fRec29[0] = dsp->fRec30[0] * dsp->fRec29[1] + fTemp12 * dsp->fVec10[(dsp->IOTA0 - 4217) & 8191];
			dsp->fRec34[0] = fSlow27 + dsp->fConst2 * dsp->fRec34[1];
			float fTemp14 = dsp->fRec29[0] * dsp->fRec26[0] - dsp->fRec34[0] * dsp->fRec27[1];
			dsp->fVec11[dsp->IOTA0 & 4095] = fTemp14;
			dsp->fRec27[0] = dsp->fVec11[(dsp->IOTA0 - 2656) & 4095];
			float fRec28 = dsp->fRec34[0] * fTemp14;
			dsp->fVec12[dsp->IOTA0 & 4095] = fRec28 + dsp->fRec27[1];
			dsp->fRec12[0] = fRec15 + dsp->fRec26[0] * dsp->fVec12[(dsp->IOTA0 - 2656) & 4095] + dsp->fRec14[1];
			float fTemp15 = dsp->fRec33[0] * dsp->fRec38[1] + dsp->fRec12[1];
			dsp->fVec13[dsp->IOTA0 & 1023] = fTemp15;
			dsp->fRec38[0] = dsp->fVec13[(dsp->IOTA0 - 672) & 1023];
			float fRec39 = 0.0f - dsp->fRec33[0] * fTemp15;
			dsp->fVec14[dsp->IOTA0 & 8191] = fRec39 + dsp->fRec38[1];
			dsp->fRec37[0] = dsp->fRec30[0] * dsp->fRec37[1] + fTemp12 * dsp->fVec14[(dsp->IOTA0 - 4453) & 8191];
			float fTemp16 = dsp->fRec26[0] * dsp->fRec37[0] - dsp->fRec34[0] * dsp->fRec35[1];
			dsp->fVec15[dsp->IOTA0 & 2047] = fTemp16;
			dsp->fRec35[0] = dsp->fVec15[(dsp->IOTA0 - 1800) & 2047];
			float fRec36 = dsp->fRec34[0] * fTemp16;
			dsp->fVec16[dsp->IOTA0 & 2047] = fRec36 + dsp->fRec35[1];
			dsp->fRec13[0] = fRec15 + dsp->fRec14[1] + dsp->fRec26[0] * dsp->fVec16[(dsp->IOTA0 - 1800) & 2047];
			float fTemp17 = fSlow28 * dsp->fRec1[0];
			output0[i0] = (FAUSTFLOAT)(dsp->fRec0[0] * (fTemp7 + 0.5f * fTemp6 * dsp->fRec12[0]) + fTemp17);
			output1[i0] = (FAUSTFLOAT)(fTemp17 + dsp->fRec0[0] * (fTemp7 + 0.5f * fTemp6 * dsp->fRec13[0]));
			dsp->iVec0[1] = dsp->iVec0[0];
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->fVec1[1] = dsp->fVec1[0];
			dsp->IOTA0 = dsp->IOTA0 + 1;
			dsp->fVec3[1] = dsp->fVec3[0];
			dsp->fRec7[1] = dsp->fRec7[0];
			dsp->iRec8[1] = dsp->iRec8[0];
			dsp->fVec4[1] = dsp->fVec4[0];
			dsp->fRec9[1] = dsp->fRec9[0];
			dsp->iRec10[1] = dsp->iRec10[0];
			dsp->fRec5[1] = dsp->fRec5[0];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->fRec3[1] = dsp->fRec3[0];
			dsp->fRec2[1] = dsp->fRec2[0];
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->fRec11[1] = dsp->fRec11[0];
			dsp->fRec23[1] = dsp->fRec23[0];
			dsp->fRec22[2] = dsp->fRec22[1];
			dsp->fRec22[1] = dsp->fRec22[0];
			dsp->fRec24[1] = dsp->fRec24[0];
			dsp->fRec20[1] = dsp->fRec20[0];
			dsp->fRec18[1] = dsp->fRec18[0];
			dsp->fRec25[1] = dsp->fRec25[0];
			dsp->fRec16[1] = dsp->fRec16[0];
			dsp->fRec14[1] = dsp->fRec14[0];
			dsp->fRec26[1] = dsp->fRec26[0];
			dsp->fRec30[1] = dsp->fRec30[0];
			dsp->fRec33[1] = dsp->fRec33[0];
			dsp->fRec31[1] = dsp->fRec31[0];
			dsp->fRec29[1] = dsp->fRec29[0];
			dsp->fRec34[1] = dsp->fRec34[0];
			dsp->fRec27[1] = dsp->fRec27[0];
			dsp->fRec12[1] = dsp->fRec12[0];
			dsp->fRec38[1] = dsp->fRec38[0];
			dsp->fRec37[1] = dsp->fRec37[0];
			dsp->fRec35[1] = dsp->fRec35[0];
			dsp->fRec13[1] = dsp->fRec13[0];
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
