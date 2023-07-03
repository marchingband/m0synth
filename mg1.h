/* ------------------------------------------------------------
name: "mg1"
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
	FAUSTFLOAT fHslider0;
	FAUSTFLOAT fHslider1;
	int iVec0[2];
	int fSampleRate;
	float fConst0;
	float fConst1;
	float fConst2;
	FAUSTFLOAT fHslider2;
	FAUSTFLOAT fHslider3;
	FAUSTFLOAT fHslider4;
	float fRec6[2];
	FAUSTFLOAT fHslider5;
	FAUSTFLOAT fHslider6;
	FAUSTFLOAT fHslider7;
	float fRec7[2];
	float fVec1[2];
	int iRec9[2];
	float fRec8[2];
	float fRec5[2];
	float fVec2[2];
	int IOTA0;
	float fVec3[4096];
	float fConst3;
	float fRec10[2];
	float fVec4[2];
	FAUSTFLOAT fHslider8;
	float fConst4;
	float fConst5;
	FAUSTFLOAT fHslider9;
	FAUSTFLOAT fHslider10;
	FAUSTFLOAT fHslider11;
	FAUSTFLOAT fHslider12;
	FAUSTFLOAT fHslider13;
	FAUSTFLOAT fButton0;
	float fVec5[2];
	FAUSTFLOAT fHslider14;
	FAUSTFLOAT fHslider15;
	float fRec12[2];
	int iRec13[2];
	float fConst6;
	float fRec14[2];
	float fConst7;
	float fRec11[2];
	FAUSTFLOAT fHslider16;
	FAUSTFLOAT fHslider17;
	FAUSTFLOAT fHslider18;
	FAUSTFLOAT fHslider19;
	float fRec15[2];
	float fVec6[2];
	float fVec7[4096];
	float fRec16[2];
	float fVec8[2];
	FAUSTFLOAT fHslider20;
	FAUSTFLOAT fHslider21;
	float fRec4[2];
	float fRec3[2];
	float fRec2[2];
	float fRec1[2];
	float fRec0[2];
	FAUSTFLOAT fHslider22;
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
	m->declare(m->metaInterface, "envelopes.lib/asre:author", "Julius O. Smith III, revised by Stephane Letz");
	m->declare(m->metaInterface, "envelopes.lib/asre:licence", "STK-4.3");
	m->declare(m->metaInterface, "envelopes.lib/author", "GRAME");
	m->declare(m->metaInterface, "envelopes.lib/copyright", "GRAME");
	m->declare(m->metaInterface, "envelopes.lib/license", "LGPL with exception");
	m->declare(m->metaInterface, "envelopes.lib/name", "Faust Envelope Library");
	m->declare(m->metaInterface, "envelopes.lib/version", "0.2");
	m->declare(m->metaInterface, "filename", "mg1.dsp");
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
	m->declare(m->metaInterface, "name", "mg1");
	m->declare(m->metaInterface, "noises.lib/name", "Faust Noise Generator Library");
	m->declare(m->metaInterface, "noises.lib/version", "0.4");
	m->declare(m->metaInterface, "options", "[midi:on]");
	m->declare(m->metaInterface, "oscillators.lib/lf_sawpos:author", "Bart Brouns, revised by Stéphane Letz");
	m->declare(m->metaInterface, "oscillators.lib/lf_sawpos:licence", "STK-4.3");
	m->declare(m->metaInterface, "oscillators.lib/lf_triangle:author", "Bart Brouns");
	m->declare(m->metaInterface, "oscillators.lib/lf_triangle:licence", "STK-4.3");
	m->declare(m->metaInterface, "oscillators.lib/name", "Faust Oscillator Library");
	m->declare(m->metaInterface, "oscillators.lib/saw1:author", "Bart Brouns");
	m->declare(m->metaInterface, "oscillators.lib/saw1:licence", "STK-4.3");
	m->declare(m->metaInterface, "oscillators.lib/sawN:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "oscillators.lib/sawN:license", "STK-4.3");
	m->declare(m->metaInterface, "oscillators.lib/sawNp:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "oscillators.lib/sawNp:license", "STK-4.3");
	m->declare(m->metaInterface, "oscillators.lib/version", "0.4");
	m->declare(m->metaInterface, "platform.lib/name", "Generic Platform Library");
	m->declare(m->metaInterface, "platform.lib/version", "0.3");
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
	return 1;
}

void classInitmydsp(int sample_rate) {
}

void instanceResetUserInterfacemydsp(mydsp* dsp) {
	dsp->fHslider0 = (FAUSTFLOAT)(0.5f);
	dsp->fHslider1 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider2 = (FAUSTFLOAT)(2.0f);
	dsp->fHslider3 = (FAUSTFLOAT)(0.5f);
	dsp->fHslider4 = (FAUSTFLOAT)(1e+02f);
	dsp->fHslider5 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider6 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider7 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider8 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider9 = (FAUSTFLOAT)(1e+03f);
	dsp->fHslider10 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider11 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider12 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider13 = (FAUSTFLOAT)(0.0f);
	dsp->fButton0 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider14 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider15 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider16 = (FAUSTFLOAT)(0.5f);
	dsp->fHslider17 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider18 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider19 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider20 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider21 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider22 = (FAUSTFLOAT)(1.0f);
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
			dsp->fRec7[l2] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l3;
		for (l3 = 0; l3 < 2; l3 = l3 + 1) {
			dsp->fVec1[l3] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l4;
		for (l4 = 0; l4 < 2; l4 = l4 + 1) {
			dsp->iRec9[l4] = 0;
		}
	}
	/* C99 loop */
	{
		int l5;
		for (l5 = 0; l5 < 2; l5 = l5 + 1) {
			dsp->fRec8[l5] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; l6 < 2; l6 = l6 + 1) {
			dsp->fRec5[l6] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; l7 < 2; l7 = l7 + 1) {
			dsp->fVec2[l7] = 0.0f;
		}
	}
	dsp->IOTA0 = 0;
	/* C99 loop */
	{
		int l8;
		for (l8 = 0; l8 < 4096; l8 = l8 + 1) {
			dsp->fVec3[l8] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l9;
		for (l9 = 0; l9 < 2; l9 = l9 + 1) {
			dsp->fRec10[l9] = 0.0f;
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
		for (l11 = 0; l11 < 2; l11 = l11 + 1) {
			dsp->fVec5[l11] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l12;
		for (l12 = 0; l12 < 2; l12 = l12 + 1) {
			dsp->fRec12[l12] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l13;
		for (l13 = 0; l13 < 2; l13 = l13 + 1) {
			dsp->iRec13[l13] = 0;
		}
	}
	/* C99 loop */
	{
		int l14;
		for (l14 = 0; l14 < 2; l14 = l14 + 1) {
			dsp->fRec14[l14] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; l15 < 2; l15 = l15 + 1) {
			dsp->fRec11[l15] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l16;
		for (l16 = 0; l16 < 2; l16 = l16 + 1) {
			dsp->fRec15[l16] = 0.0f;
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
		for (l18 = 0; l18 < 4096; l18 = l18 + 1) {
			dsp->fVec7[l18] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l19;
		for (l19 = 0; l19 < 2; l19 = l19 + 1) {
			dsp->fRec16[l19] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; l20 < 2; l20 = l20 + 1) {
			dsp->fVec8[l20] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; l21 < 2; l21 = l21 + 1) {
			dsp->fRec4[l21] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; l22 < 2; l22 = l22 + 1) {
			dsp->fRec3[l22] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l23;
		for (l23 = 0; l23 < 2; l23 = l23 + 1) {
			dsp->fRec2[l23] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l24;
		for (l24 = 0; l24 < 2; l24 = l24 + 1) {
			dsp->fRec1[l24] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; l25 < 2; l25 = l25 + 1) {
			dsp->fRec0[l25] = 0.0f;
		}
	}
}

void instanceConstantsmydsp(mydsp* dsp, int sample_rate) {
	dsp->fSampleRate = sample_rate;
	dsp->fConst0 = fminf(1.92e+05f, fmaxf(1.0f, (float)(dsp->fSampleRate)));
	dsp->fConst1 = 0.25f * dsp->fConst0;
	dsp->fConst2 = 1.0f / dsp->fConst0;
	dsp->fConst3 = 0.5f * dsp->fConst0;
	dsp->fConst4 = 6.2831855f / dsp->fConst0;
	dsp->fConst5 = 44.1f / dsp->fConst0;
	dsp->fConst6 = 6.9077554f / dsp->fConst0;
	dsp->fConst7 = 1.0f - dsp->fConst5;
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
	ui_interface->openVerticalBox(ui_interface->uiInterface, "mg1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider2, "midi", "11");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "0-oct", &dsp->fHslider2, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider1, "midi", "10");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "0-shape", &dsp->fHslider1, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider0, "midi", "12");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "0-vol", &dsp->fHslider0, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider18, "midi", "16");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "1-det", &dsp->fHslider18, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-5e+01f, (FAUSTFLOAT)5e+01f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider19, "midi", "14");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "1-oct", &dsp->fHslider19, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider17, "midi", "13");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "1-shape", &dsp->fHslider17, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider16, "midi", "15");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "1-vol", &dsp->fHslider16, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider11, "midi", "4");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "asr->vcf", &dsp->fHslider11, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1e+01f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider15, "midi", "1");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "asr-attack", &dsp->fHslider15, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)5.0f, (FAUSTFLOAT)0.01f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider14, "midi", "2");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "asr-release", &dsp->fHslider14, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)5.0f, (FAUSTFLOAT)0.01f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider12, "midi", "22");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "asr-s-in", &dsp->fHslider12, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider13, "midi", "3");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "asr-src", &dsp->fHslider13, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider21, "midi", "18");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "bell-vol", &dsp->fHslider21, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fButton0, "gate", "");
	ui_interface->addButton(ui_interface->uiInterface, "gate", &dsp->fButton0);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider3, "midi", "5");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "glide", &dsp->fHslider3, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.9999f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider5, "midi", "8");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo->pitch", &dsp->fHslider5, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider10, "midi", "9");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo->vcf", &dsp->fHslider10, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider7, "midi", "6");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo-freq", &dsp->fHslider7, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.01f, (FAUSTFLOAT)2e+01f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider6, "midi", "7");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo-wav", &dsp->fHslider6, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider20, "midi", "17");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "noise-vol", &dsp->fHslider20, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider4, "pitch", "");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "pitch", &dsp->fHslider4, (FAUSTFLOAT)1e+02f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)127.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider22, "midi", "21");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "vca-sel", &dsp->fHslider22, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider9, "midi", "19");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "vcf-freq", &dsp->fHslider9, (FAUSTFLOAT)1e+03f, (FAUSTFLOAT)2e+01f, (FAUSTFLOAT)6e+03f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider8, "midi", "20");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "vcf-res", &dsp->fHslider8, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
}

void computemydsp(mydsp* dsp, int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
	FAUSTFLOAT* output0 = outputs[0];
	float fSlow0 = (float)(dsp->fHslider0);
	int iSlow1 = (int)((float)(dsp->fHslider1)) >= 1;
	int iSlow2 = (int)((float)(dsp->fHslider2));
	int iSlow3 = iSlow2 >= 2;
	int iSlow4 = iSlow2 >= 1;
	float fSlow5 = (float)(dsp->fHslider3);
	float fSlow6 = 4.4e+02f * (1.0f - fSlow5) * powf(2.0f, 0.083333336f * ((float)(dsp->fHslider4) + -69.0f));
	float fSlow7 = (float)(dsp->fHslider5);
	float fSlow8 = (float)(dsp->fHslider6);
	int iSlow9 = fSlow8 >= 2.0f;
	int iSlow10 = fSlow8 >= 1.0f;
	float fSlow11 = dsp->fConst2 * (float)(dsp->fHslider7);
	float fSlow12 = 0.0f - 4.0f * fmaxf(0.0f, fminf((float)(dsp->fHslider8), 0.999999f));
	float fSlow13 = (float)(dsp->fHslider9);
	float fSlow14 = (float)(dsp->fHslider10);
	float fSlow15 = (float)(dsp->fHslider11);
	int iSlow16 = (float)(dsp->fHslider12) >= 1.0f;
	int iSlow17 = (float)(dsp->fHslider13) >= 1.0f;
	float fSlow18 = (float)(dsp->fButton0);
	float fSlow19 = (float)(dsp->fHslider14);
	float fSlow20 = (float)(dsp->fHslider15);
	float fSlow21 = dsp->fConst0 * fSlow20;
	float fSlow22 = expf(0.0f - dsp->fConst6 / fSlow20);
	float fSlow23 = expf(0.0f - dsp->fConst6 / fSlow19);
	float fSlow24 = (float)(dsp->fHslider16);
	int iSlow25 = (int)((float)(dsp->fHslider17)) >= 1;
	float fSlow26 = powf(2.0f, 0.00083333335f * (float)(dsp->fHslider18));
	int iSlow27 = (int)((float)(dsp->fHslider19));
	int iSlow28 = iSlow27 >= 2;
	int iSlow29 = iSlow27 >= 1;
	float fSlow30 = 4.656613e-10f * (float)(dsp->fHslider20);
	float fSlow31 = (float)(dsp->fHslider21);
	float fSlow32 = (float)(dsp->fHslider22);
	int iSlow33 = fSlow32 >= 2.0f;
	int iSlow34 = fSlow32 >= 1.0f;
	/* C99 loop */
	{
		int i0;
		for (i0 = 0; i0 < count; i0 = i0 + 1) {
			dsp->iVec0[0] = 1;
			float fTemp0 = (float)(dsp->iVec0[1]);
			int iTemp1 = 1 - dsp->iVec0[1];
			dsp->fRec6[0] = fSlow6 + fSlow5 * dsp->fRec6[1];
			float fTemp2 = ((iTemp1) ? 0.0f : fSlow11 + dsp->fRec7[1]);
			dsp->fRec7[0] = fTemp2 - floorf(fTemp2);
			float fTemp3 = (float)(dsp->fRec7[0] <= 0.5f);
			dsp->fVec1[0] = fTemp3;
			int iTemp4 = (dsp->fVec1[1] <= 0.0f) & (fTemp3 > 0.0f);
			dsp->iRec9[0] = 1103515245 * dsp->iRec9[1] + 12345;
			float fTemp5 = (float)(dsp->iRec9[0]);
			dsp->fRec8[0] = dsp->fRec8[1] * (float)(1 - iTemp4) + 4.656613e-10f * fTemp5 * (float)(iTemp4);
			float fTemp6 = ((iSlow9) ? dsp->fRec8[0] : ((iSlow10) ? fTemp3 : 2.0f * (1.0f - fabsf(2.0f * dsp->fRec7[0] + -1.0f)) + -1.0f));
			float fTemp7 = dsp->fRec6[0] * (fSlow7 * fTemp6 + 1.0f);
			float fTemp8 = 0.5f * fTemp7;
			float fTemp9 = fmaxf(2e+01f, fminf(((iSlow3) ? fTemp7 : ((iSlow4) ? fTemp8 : 0.25f * fTemp7)), 1e+04f));
			float fTemp10 = fmaxf(fTemp9, 23.44895f);
			float fTemp11 = fmaxf(2e+01f, fabsf(fTemp10));
			float fTemp12 = ((iTemp1) ? 0.0f : dsp->fRec5[1] + dsp->fConst2 * fTemp11);
			dsp->fRec5[0] = fTemp12 - floorf(fTemp12);
			float fTemp13 = mydsp_faustpower2_f(2.0f * dsp->fRec5[0] + -1.0f);
			dsp->fVec2[0] = fTemp13;
			float fTemp14 = fTemp0 * (fTemp13 - dsp->fVec2[1]) / fTemp11;
			dsp->fVec3[dsp->IOTA0 & 4095] = fTemp14;
			float fTemp15 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst3 / fTemp10));
			int iTemp16 = (int)(fTemp15);
			float fTemp17 = floorf(fTemp15);
			float fTemp18 = dsp->fConst1 * (fTemp14 - dsp->fVec3[(dsp->IOTA0 - iTemp16) & 4095] * (fTemp17 + (1.0f - fTemp15)) - (fTemp15 - fTemp17) * dsp->fVec3[(dsp->IOTA0 - (iTemp16 + 1)) & 4095]);
			float fTemp19 = fmaxf(2e+01f, fabsf(fTemp9));
			float fTemp20 = ((iTemp1) ? 0.0f : dsp->fRec10[1] + dsp->fConst2 * fTemp19);
			dsp->fRec10[0] = fTemp20 - floorf(fTemp20);
			float fTemp21 = mydsp_faustpower2_f(2.0f * dsp->fRec10[0] + -1.0f);
			dsp->fVec4[0] = fTemp21;
			float fTemp22 = ((iSlow17) ? fTemp3 : fSlow18);
			dsp->fVec5[0] = fTemp22;
			int iTemp23 = fTemp22 > 0.0f;
			float fTemp24 = 0.1447178f * ((iTemp23) ? fSlow20 : fSlow19);
			int iTemp25 = fabsf(fTemp24) < 1.1920929e-07f;
			float fTemp26 = ((iTemp25) ? 0.0f : expf(0.0f - dsp->fConst2 / ((iTemp25) ? 1.0f : fTemp24)));
			dsp->fRec12[0] = (1.0f - fTemp26) * ((iTemp23) ? (float)(iTemp23) : 0.0f) + fTemp26 * dsp->fRec12[1];
			int iTemp27 = (((fTemp22 > dsp->fVec5[1]) != 0) ? 1 : dsp->iRec13[1] + 1);
			dsp->iRec13[0] = iTemp27;
			dsp->fRec14[0] = (((float)(iTemp27) >= fSlow21) ? fSlow23 * dsp->fRec14[1] : 1.0f - fSlow22 * (1.0f - dsp->fRec14[1]));
			float fTemp28 = ((iSlow16) ? dsp->fRec14[0] : dsp->fRec12[0]);
			dsp->fRec11[0] = dsp->fConst5 * fminf(fmaxf(2e+01f, fSlow13 * (fSlow14 * fTemp6 + 1.0f) * (fSlow15 * fTemp28 + 1.0f)), 2e+03f) + dsp->fConst7 * dsp->fRec11[1];
			float fTemp29 = dsp->fConst4 * (dsp->fRec11[0] + fTemp7);
			float fTemp30 = 1.0f - fTemp29;
			float fTemp31 = fmaxf(2e+01f, fminf(fSlow26 * ((iSlow28) ? 2.0f * fTemp7 : ((iSlow29) ? fTemp7 : fTemp8)), 1e+04f));
			float fTemp32 = fmaxf(fTemp31, 23.44895f);
			float fTemp33 = fmaxf(2e+01f, fabsf(fTemp32));
			float fTemp34 = ((iTemp1) ? 0.0f : dsp->fRec15[1] + dsp->fConst2 * fTemp33);
			dsp->fRec15[0] = fTemp34 - floorf(fTemp34);
			float fTemp35 = mydsp_faustpower2_f(2.0f * dsp->fRec15[0] + -1.0f);
			dsp->fVec6[0] = fTemp35;
			float fTemp36 = fTemp0 * (fTemp35 - dsp->fVec6[1]) / fTemp33;
			dsp->fVec7[dsp->IOTA0 & 4095] = fTemp36;
			float fTemp37 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst3 / fTemp32));
			int iTemp38 = (int)(fTemp37);
			float fTemp39 = floorf(fTemp37);
			float fTemp40 = dsp->fConst1 * (fTemp36 - dsp->fVec7[(dsp->IOTA0 - iTemp38) & 4095] * (fTemp39 + (1.0f - fTemp37)) - (fTemp37 - fTemp39) * dsp->fVec7[(dsp->IOTA0 - (iTemp38 + 1)) & 4095]);
			float fTemp41 = fmaxf(2e+01f, fabsf(fTemp31));
			float fTemp42 = ((iTemp1) ? 0.0f : dsp->fRec16[1] + dsp->fConst2 * fTemp41);
			dsp->fRec16[0] = fTemp42 - floorf(fTemp42);
			float fTemp43 = mydsp_faustpower2_f(2.0f * dsp->fRec16[0] + -1.0f);
			dsp->fVec8[0] = fTemp43;
			dsp->fRec4[0] = fSlow0 * ((iSlow1) ? dsp->fConst1 * (fTemp0 * (fTemp21 - dsp->fVec4[1]) / fTemp19) : fTemp18) + fSlow12 * dsp->fRec0[1] + fTemp30 * dsp->fRec4[1] + fSlow24 * ((iSlow25) ? dsp->fConst1 * (fTemp0 * (fTemp43 - dsp->fVec8[1]) / fTemp41) : fTemp40) + fSlow30 * fTemp5 + fSlow31 * (float)((int)(fTemp18) ^ (int)(fTemp40));
			dsp->fRec3[0] = dsp->fRec4[0] + fTemp30 * dsp->fRec3[1];
			dsp->fRec2[0] = dsp->fRec3[0] + fTemp30 * dsp->fRec2[1];
			dsp->fRec1[0] = dsp->fRec2[0] + dsp->fRec1[1] * fTemp30;
			dsp->fRec0[0] = dsp->fRec1[0] * mydsp_faustpower4_f(fTemp29);
			output0[i0] = (FAUSTFLOAT)(0.3f * dsp->fRec0[0] * ((iSlow33) ? fSlow18 : ((iSlow34) ? fTemp28 : 1.0f)));
			dsp->iVec0[1] = dsp->iVec0[0];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->fRec7[1] = dsp->fRec7[0];
			dsp->fVec1[1] = dsp->fVec1[0];
			dsp->iRec9[1] = dsp->iRec9[0];
			dsp->fRec8[1] = dsp->fRec8[0];
			dsp->fRec5[1] = dsp->fRec5[0];
			dsp->fVec2[1] = dsp->fVec2[0];
			dsp->IOTA0 = dsp->IOTA0 + 1;
			dsp->fRec10[1] = dsp->fRec10[0];
			dsp->fVec4[1] = dsp->fVec4[0];
			dsp->fVec5[1] = dsp->fVec5[0];
			dsp->fRec12[1] = dsp->fRec12[0];
			dsp->iRec13[1] = dsp->iRec13[0];
			dsp->fRec14[1] = dsp->fRec14[0];
			dsp->fRec11[1] = dsp->fRec11[0];
			dsp->fRec15[1] = dsp->fRec15[0];
			dsp->fVec6[1] = dsp->fVec6[0];
			dsp->fRec16[1] = dsp->fRec16[0];
			dsp->fVec8[1] = dsp->fVec8[0];
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
