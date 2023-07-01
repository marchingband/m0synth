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
	int fSampleRate;
	float fConst0;
	float fConst1;
	int iVec0[2];
	float fConst2;
	FAUSTFLOAT fHslider1;
	FAUSTFLOAT fHslider2;
	FAUSTFLOAT fHslider3;
	FAUSTFLOAT fHslider4;
	FAUSTFLOAT fHslider5;
	float fRec6[2];
	float fVec1[2];
	int iRec8[2];
	float fRec7[2];
	float fRec5[2];
	float fVec2[2];
	int IOTA0;
	float fVec3[4096];
	float fConst3;
	FAUSTFLOAT fHslider6;
	FAUSTFLOAT fHslider7;
	float fRec9[2];
	float fVec4[2];
	float fVec5[4096];
	FAUSTFLOAT fHslider8;
	FAUSTFLOAT fHslider9;
	FAUSTFLOAT fHslider10;
	float fRec10[2];
	float fVec6[2];
	FAUSTFLOAT fHslider11;
	FAUSTFLOAT fHslider12;
	float fRec11[2];
	float fVec7[2];
	float fConst4;
	FAUSTFLOAT fHslider13;
	FAUSTFLOAT fHslider14;
	FAUSTFLOAT fHslider15;
	FAUSTFLOAT fHslider16;
	FAUSTFLOAT fHslider17;
	FAUSTFLOAT fButton0;
	float fVec8[2];
	FAUSTFLOAT fHslider18;
	FAUSTFLOAT fHslider19;
	float fRec12[2];
	int iRec13[2];
	FAUSTFLOAT fHslider20;
	float fRec4[2];
	float fRec3[2];
	float fRec2[2];
	float fRec1[2];
	float fRec0[2];
	FAUSTFLOAT fHslider21;
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
	m->declare(m->metaInterface, "envelopes.lib/ar:author", "Yann Orlarey, Stéphane Letz");
	m->declare(m->metaInterface, "envelopes.lib/asre:author", "Julius O. Smith III, revised by Stephane Letz");
	m->declare(m->metaInterface, "envelopes.lib/asre:licence", "STK-4.3");
	m->declare(m->metaInterface, "envelopes.lib/author", "GRAME");
	m->declare(m->metaInterface, "envelopes.lib/copyright", "GRAME");
	m->declare(m->metaInterface, "envelopes.lib/license", "LGPL with exception");
	m->declare(m->metaInterface, "envelopes.lib/name", "Faust Envelope Library");
	m->declare(m->metaInterface, "envelopes.lib/version", "0.2");
	m->declare(m->metaInterface, "filename", "mg1.dsp");
	m->declare(m->metaInterface, "filters.lib/lowpass0_highpass1", "MIT-style STK-4.3 license");
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
	dsp->fHslider0 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider1 = (FAUSTFLOAT)(2.0f);
	dsp->fHslider2 = (FAUSTFLOAT)(1e+02f);
	dsp->fHslider3 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider4 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider5 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider6 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider7 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider8 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider9 = (FAUSTFLOAT)(0.5f);
	dsp->fHslider10 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider11 = (FAUSTFLOAT)(0.5f);
	dsp->fHslider12 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider13 = (FAUSTFLOAT)(1e+03f);
	dsp->fHslider14 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider15 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider16 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider17 = (FAUSTFLOAT)(0.0f);
	dsp->fButton0 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider18 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider19 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider20 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider21 = (FAUSTFLOAT)(1.0f);
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
			dsp->fVec1[l2] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l3;
		for (l3 = 0; l3 < 2; l3 = l3 + 1) {
			dsp->iRec8[l3] = 0;
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
			dsp->fRec5[l5] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; l6 < 2; l6 = l6 + 1) {
			dsp->fVec2[l6] = 0.0f;
		}
	}
	dsp->IOTA0 = 0;
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; l7 < 4096; l7 = l7 + 1) {
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
			dsp->fVec4[l9] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l10;
		for (l10 = 0; l10 < 4096; l10 = l10 + 1) {
			dsp->fVec5[l10] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l11;
		for (l11 = 0; l11 < 2; l11 = l11 + 1) {
			dsp->fRec10[l11] = 0.0f;
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
			dsp->fVec7[l14] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; l15 < 2; l15 = l15 + 1) {
			dsp->fVec8[l15] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l16;
		for (l16 = 0; l16 < 2; l16 = l16 + 1) {
			dsp->fRec12[l16] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l17;
		for (l17 = 0; l17 < 2; l17 = l17 + 1) {
			dsp->iRec13[l17] = 0;
		}
	}
	/* C99 loop */
	{
		int l18;
		for (l18 = 0; l18 < 2; l18 = l18 + 1) {
			dsp->fRec4[l18] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l19;
		for (l19 = 0; l19 < 2; l19 = l19 + 1) {
			dsp->fRec3[l19] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; l20 < 2; l20 = l20 + 1) {
			dsp->fRec2[l20] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; l21 < 2; l21 = l21 + 1) {
			dsp->fRec1[l21] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; l22 < 2; l22 = l22 + 1) {
			dsp->fRec0[l22] = 0.0f;
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
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider1, "midi", "11");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "0-oct", &dsp->fHslider1, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider12, "midi", "10");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "0-shape", &dsp->fHslider12, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider11, "midi", "12");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "0-vol", &dsp->fHslider11, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider6, "midi", "16");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "1-det", &dsp->fHslider6, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-5e+01f, (FAUSTFLOAT)5e+01f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider7, "midi", "14");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "1-oct", &dsp->fHslider7, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider10, "midi", "13");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "1-shape", &dsp->fHslider10, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider9, "midi", "15");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "1-vol", &dsp->fHslider9, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider15, "midi", "4");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "asr->vcf", &dsp->fHslider15, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1e+01f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider19, "midi", "1");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "asr-attack", &dsp->fHslider19, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)5.0f, (FAUSTFLOAT)0.01f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider18, "midi", "2");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "asr-release", &dsp->fHslider18, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)5.0f, (FAUSTFLOAT)0.01f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider16, "midi", "5");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "asr-s-in", &dsp->fHslider16, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider17, "midi", "3");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "asr-src", &dsp->fHslider17, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider0, "midi", "18");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "bell-vol", &dsp->fHslider0, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fButton0, "gate", "");
	ui_interface->addButton(ui_interface->uiInterface, "gate", &dsp->fButton0);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider3, "midi", "8");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo->pitch", &dsp->fHslider3, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider14, "midi", "9");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo->vcf", &dsp->fHslider14, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider5, "midi", "6");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo-freq", &dsp->fHslider5, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.01f, (FAUSTFLOAT)2e+01f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider4, "midi", "7");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo-wav", &dsp->fHslider4, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider8, "midi", "17");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "noise-vol", &dsp->fHslider8, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider2, "pitch", "");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "pitch", &dsp->fHslider2, (FAUSTFLOAT)1e+02f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)127.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider21, "midi", "21");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "vca-sel", &dsp->fHslider21, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider13, "midi", "19");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "vcf-freq", &dsp->fHslider13, (FAUSTFLOAT)1e+03f, (FAUSTFLOAT)2e+01f, (FAUSTFLOAT)6e+03f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider20, "midi", "20");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "vcf-res", &dsp->fHslider20, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
}

void computemydsp(mydsp* dsp, int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
	FAUSTFLOAT* output0 = outputs[0];
	float fSlow0 = (float)(dsp->fHslider0);
	int iSlow1 = (int)((float)(dsp->fHslider1));
	int iSlow2 = iSlow1 >= 2;
	int iSlow3 = iSlow1 >= 1;
	float fSlow4 = powf(2.0f, 0.083333336f * ((float)(dsp->fHslider2) + -69.0f));
	float fSlow5 = 1.1e+02f * fSlow4;
	float fSlow6 = (float)(dsp->fHslider3);
	float fSlow7 = (float)(dsp->fHslider4);
	int iSlow8 = fSlow7 >= 2.0f;
	int iSlow9 = fSlow7 >= 1.0f;
	float fSlow10 = dsp->fConst2 * (float)(dsp->fHslider5);
	float fSlow11 = 2.2e+02f * fSlow4;
	float fSlow12 = 4.4e+02f * fSlow4;
	float fSlow13 = powf(2.0f, 0.00083333335f * (float)(dsp->fHslider6));
	int iSlow14 = (int)((float)(dsp->fHslider7));
	int iSlow15 = iSlow14 >= 2;
	int iSlow16 = iSlow14 >= 1;
	float fSlow17 = 8.8e+02f * fSlow4;
	float fSlow18 = 4.656613e-10f * (float)(dsp->fHslider8);
	float fSlow19 = (float)(dsp->fHslider9);
	int iSlow20 = (int)((float)(dsp->fHslider10)) >= 1;
	float fSlow21 = (float)(dsp->fHslider11);
	int iSlow22 = (int)((float)(dsp->fHslider12)) >= 1;
	float fSlow23 = (float)(dsp->fHslider13);
	float fSlow24 = (float)(dsp->fHslider14);
	float fSlow25 = (float)(dsp->fHslider15);
	int iSlow26 = (float)(dsp->fHslider16) >= 1.0f;
	int iSlow27 = (float)(dsp->fHslider17) >= 1.0f;
	float fSlow28 = (float)(dsp->fButton0);
	float fSlow29 = (float)(dsp->fHslider18);
	float fSlow30 = (float)(dsp->fHslider19);
	float fSlow31 = fmaxf(1.0f, dsp->fConst0 * fSlow30);
	float fSlow32 = 1.0f / fSlow31;
	float fSlow33 = 1.0f / fmaxf(1.0f, dsp->fConst0 * fSlow29);
	float fSlow34 = 0.0f - 4.0f * fmaxf(0.0f, fminf((float)(dsp->fHslider20), 0.999999f));
	float fSlow35 = (float)(dsp->fHslider21);
	int iSlow36 = fSlow35 >= 2.0f;
	int iSlow37 = fSlow35 >= 1.0f;
	/* C99 loop */
	{
		int i0;
		for (i0 = 0; i0 < count; i0 = i0 + 1) {
			dsp->iVec0[0] = 1;
			float fTemp0 = (float)(dsp->iVec0[1]);
			int iTemp1 = 1 - dsp->iVec0[1];
			float fTemp2 = ((iTemp1) ? 0.0f : fSlow10 + dsp->fRec6[1]);
			dsp->fRec6[0] = fTemp2 - floorf(fTemp2);
			float fTemp3 = (float)(dsp->fRec6[0] <= 0.5f);
			dsp->fVec1[0] = fTemp3;
			int iTemp4 = (dsp->fVec1[1] <= 0.0f) & (fTemp3 > 0.0f);
			dsp->iRec8[0] = 1103515245 * dsp->iRec8[1] + 12345;
			float fTemp5 = (float)(dsp->iRec8[0]);
			dsp->fRec7[0] = dsp->fRec7[1] * (float)(1 - iTemp4) + 4.656613e-10f * fTemp5 * (float)(iTemp4);
			float fTemp6 = ((iSlow8) ? dsp->fRec7[0] : ((iSlow9) ? fTemp3 : 2.0f * (1.0f - fabsf(2.0f * dsp->fRec6[0] + -1.0f)) + -1.0f));
			float fTemp7 = fSlow6 * fTemp6 + 1.0f;
			float fTemp8 = fSlow11 * fTemp7;
			float fTemp9 = fSlow12 * fTemp7;
			float fTemp10 = ((iSlow2) ? fTemp9 : ((iSlow3) ? fTemp8 : fSlow5 * fTemp7));
			float fTemp11 = fmaxf(fTemp10, 23.44895f);
			float fTemp12 = fmaxf(2e+01f, fabsf(fTemp11));
			float fTemp13 = ((iTemp1) ? 0.0f : dsp->fRec5[1] + dsp->fConst2 * fTemp12);
			dsp->fRec5[0] = fTemp13 - floorf(fTemp13);
			float fTemp14 = mydsp_faustpower2_f(2.0f * dsp->fRec5[0] + -1.0f);
			dsp->fVec2[0] = fTemp14;
			float fTemp15 = fTemp0 * (fTemp14 - dsp->fVec2[1]) / fTemp12;
			dsp->fVec3[dsp->IOTA0 & 4095] = fTemp15;
			float fTemp16 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst3 / fTemp11));
			int iTemp17 = (int)(fTemp16);
			float fTemp18 = floorf(fTemp16);
			float fTemp19 = dsp->fConst1 * (fTemp15 - dsp->fVec3[(dsp->IOTA0 - iTemp17) & 4095] * (fTemp18 + (1.0f - fTemp16)) - (fTemp16 - fTemp18) * dsp->fVec3[(dsp->IOTA0 - (iTemp17 + 1)) & 4095]);
			float fTemp20 = fSlow13 * ((iSlow15) ? fSlow17 * fTemp7 : ((iSlow16) ? fTemp9 : fTemp8));
			float fTemp21 = fmaxf(fTemp20, 23.44895f);
			float fTemp22 = fmaxf(2e+01f, fabsf(fTemp21));
			float fTemp23 = ((iTemp1) ? 0.0f : dsp->fRec9[1] + dsp->fConst2 * fTemp22);
			dsp->fRec9[0] = fTemp23 - floorf(fTemp23);
			float fTemp24 = mydsp_faustpower2_f(2.0f * dsp->fRec9[0] + -1.0f);
			dsp->fVec4[0] = fTemp24;
			float fTemp25 = fTemp0 * (fTemp24 - dsp->fVec4[1]) / fTemp22;
			dsp->fVec5[dsp->IOTA0 & 4095] = fTemp25;
			float fTemp26 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst3 / fTemp21));
			int iTemp27 = (int)(fTemp26);
			float fTemp28 = floorf(fTemp26);
			float fTemp29 = dsp->fConst1 * (fTemp25 - dsp->fVec5[(dsp->IOTA0 - iTemp27) & 4095] * (fTemp28 + (1.0f - fTemp26)) - (fTemp26 - fTemp28) * dsp->fVec5[(dsp->IOTA0 - (iTemp27 + 1)) & 4095]);
			float fTemp30 = fmaxf(2e+01f, fabsf(fTemp20));
			float fTemp31 = ((iTemp1) ? 0.0f : dsp->fRec10[1] + dsp->fConst2 * fTemp30);
			dsp->fRec10[0] = fTemp31 - floorf(fTemp31);
			float fTemp32 = mydsp_faustpower2_f(2.0f * dsp->fRec10[0] + -1.0f);
			dsp->fVec6[0] = fTemp32;
			float fTemp33 = fmaxf(2e+01f, fabsf(fTemp10));
			float fTemp34 = ((iTemp1) ? 0.0f : dsp->fRec11[1] + dsp->fConst2 * fTemp33);
			dsp->fRec11[0] = fTemp34 - floorf(fTemp34);
			float fTemp35 = mydsp_faustpower2_f(2.0f * dsp->fRec11[0] + -1.0f);
			dsp->fVec7[0] = fTemp35;
			float fTemp36 = ((iSlow27) ? fTemp3 : fSlow28);
			dsp->fVec8[0] = fTemp36;
			int iTemp37 = fTemp36 > 0.0f;
			float fTemp38 = 0.1447178f * ((iTemp37) ? fSlow30 : fSlow29);
			int iTemp39 = fabsf(fTemp38) < 1.1920929e-07f;
			float fTemp40 = ((iTemp39) ? 0.0f : expf(0.0f - dsp->fConst2 / ((iTemp39) ? 1.0f : fTemp38)));
			dsp->fRec12[0] = (1.0f - fTemp40) * ((iTemp37) ? (float)(iTemp37) : 0.0f) + fTemp40 * dsp->fRec12[1];
			dsp->iRec13[0] = (dsp->iRec13[1] + (dsp->iRec13[1] > 0)) * (fTemp36 <= dsp->fVec8[1]) + (fTemp36 > dsp->fVec8[1]);
			float fTemp41 = (float)(dsp->iRec13[0]);
			float fTemp42 = ((iSlow26) ? fmaxf(0.0f, fminf(fSlow32 * fTemp41, fSlow33 * (fSlow31 - fTemp41) + 1.0f)) : dsp->fRec12[0]);
			float fTemp43 = dsp->fConst4 * (fSlow23 * (fSlow24 * fTemp6 + 1.0f) * (fSlow25 * fTemp42 + 1.0f) + fTemp9);
			float fTemp44 = 1.0f - fTemp43;
			dsp->fRec4[0] = fSlow0 * (float)((int)(fTemp19) ^ (int)(fTemp29)) + fSlow18 * fTemp5 + fSlow19 * ((iSlow20) ? dsp->fConst1 * (fTemp0 * (fTemp32 - dsp->fVec6[1]) / fTemp30) : fTemp29) + fSlow21 * ((iSlow22) ? dsp->fConst1 * (fTemp0 * (fTemp35 - dsp->fVec7[1]) / fTemp33) : fTemp19) + fTemp44 * dsp->fRec4[1] + fSlow34 * dsp->fRec0[1];
			dsp->fRec3[0] = dsp->fRec4[0] + fTemp44 * dsp->fRec3[1];
			dsp->fRec2[0] = dsp->fRec3[0] + fTemp44 * dsp->fRec2[1];
			dsp->fRec1[0] = dsp->fRec2[0] + dsp->fRec1[1] * fTemp44;
			dsp->fRec0[0] = dsp->fRec1[0] * mydsp_faustpower4_f(fTemp43);
			output0[i0] = (FAUSTFLOAT)(dsp->fRec0[0] * ((iSlow36) ? fSlow28 : ((iSlow37) ? fTemp42 : 1.0f)));
			dsp->iVec0[1] = dsp->iVec0[0];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->fVec1[1] = dsp->fVec1[0];
			dsp->iRec8[1] = dsp->iRec8[0];
			dsp->fRec7[1] = dsp->fRec7[0];
			dsp->fRec5[1] = dsp->fRec5[0];
			dsp->fVec2[1] = dsp->fVec2[0];
			dsp->IOTA0 = dsp->IOTA0 + 1;
			dsp->fRec9[1] = dsp->fRec9[0];
			dsp->fVec4[1] = dsp->fVec4[0];
			dsp->fRec10[1] = dsp->fRec10[0];
			dsp->fVec6[1] = dsp->fVec6[0];
			dsp->fRec11[1] = dsp->fRec11[0];
			dsp->fVec7[1] = dsp->fVec7[0];
			dsp->fVec8[1] = dsp->fVec8[0];
			dsp->fRec12[1] = dsp->fRec12[0];
			dsp->iRec13[1] = dsp->iRec13[0];
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
