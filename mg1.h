/* ------------------------------------------------------------
name: "mg1"
Code generated with Faust 2.59.9 (https://faust.grame.fr)
Compilation options: -lang c -ct 1 -es 1 -mcd 16 -fx -ftz 0
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
	fixpoint_t fConst0;
	fixpoint_t fConst1;
	int iVec0[2];
	fixpoint_t fConst2;
	FAUSTFLOAT fHslider1;
	FAUSTFLOAT fHslider2;
	FAUSTFLOAT fHslider3;
	FAUSTFLOAT fHslider4;
	FAUSTFLOAT fHslider5;
	fixpoint_t fRec6[2];
	fixpoint_t fVec1[2];
	int iRec8[2];
	fixpoint_t fRec7[2];
	fixpoint_t fRec5[2];
	fixpoint_t fVec2[2];
	int IOTA0;
	fixpoint_t fVec3[4096];
	fixpoint_t fConst3;
	FAUSTFLOAT fHslider6;
	FAUSTFLOAT fHslider7;
	fixpoint_t fRec9[2];
	fixpoint_t fVec4[2];
	fixpoint_t fVec5[4096];
	FAUSTFLOAT fHslider8;
	FAUSTFLOAT fHslider9;
	FAUSTFLOAT fHslider10;
	fixpoint_t fRec10[2];
	fixpoint_t fVec6[2];
	FAUSTFLOAT fHslider11;
	FAUSTFLOAT fHslider12;
	fixpoint_t fRec11[2];
	fixpoint_t fVec7[2];
	fixpoint_t fConst4;
	FAUSTFLOAT fHslider13;
	FAUSTFLOAT fHslider14;
	FAUSTFLOAT fHslider15;
	FAUSTFLOAT fHslider16;
	FAUSTFLOAT fHslider17;
	FAUSTFLOAT fButton0;
	fixpoint_t fVec8[2];
	FAUSTFLOAT fHslider18;
	FAUSTFLOAT fHslider19;
	fixpoint_t fRec12[2];
	int iRec13[2];
	FAUSTFLOAT fHslider20;
	fixpoint_t fRec4[2];
	fixpoint_t fRec3[2];
	fixpoint_t fRec2[2];
	fixpoint_t fRec1[2];
	fixpoint_t fRec0[2];
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
	m->declare(m->metaInterface, "compile_options", "-lang c -ct 1 -es 1 -mcd 16 -fx -ftz 0");
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
	dsp->fHslider0 = (FAUSTFLOAT)(0.0);
	dsp->fHslider1 = (FAUSTFLOAT)(2.0);
	dsp->fHslider2 = (FAUSTFLOAT)(1e+02);
	dsp->fHslider3 = (FAUSTFLOAT)(0.0);
	dsp->fHslider4 = (FAUSTFLOAT)(0.0);
	dsp->fHslider5 = (FAUSTFLOAT)(1.0);
	dsp->fHslider6 = (FAUSTFLOAT)(0.0);
	dsp->fHslider7 = (FAUSTFLOAT)(1.0);
	dsp->fHslider8 = (FAUSTFLOAT)(0.0);
	dsp->fHslider9 = (FAUSTFLOAT)(0.5);
	dsp->fHslider10 = (FAUSTFLOAT)(0.0);
	dsp->fHslider11 = (FAUSTFLOAT)(0.5);
	dsp->fHslider12 = (FAUSTFLOAT)(0.0);
	dsp->fHslider13 = (FAUSTFLOAT)(1e+03);
	dsp->fHslider14 = (FAUSTFLOAT)(0.0);
	dsp->fHslider15 = (FAUSTFLOAT)(0.0);
	dsp->fHslider16 = (FAUSTFLOAT)(0.0);
	dsp->fHslider17 = (FAUSTFLOAT)(0.0);
	dsp->fButton0 = (FAUSTFLOAT)(0.0);
	dsp->fHslider18 = (FAUSTFLOAT)(0.0);
	dsp->fHslider19 = (FAUSTFLOAT)(0.0);
	dsp->fHslider20 = (FAUSTFLOAT)(0.0);
	dsp->fHslider21 = (FAUSTFLOAT)(1.0);
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
			dsp->fRec6[l1] = 0;
		}
	}
	/* C99 loop */
	{
		int l2;
		for (l2 = 0; l2 < 2; l2 = l2 + 1) {
			dsp->fVec1[l2] = 0;
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
			dsp->fRec7[l4] = 0;
		}
	}
	/* C99 loop */
	{
		int l5;
		for (l5 = 0; l5 < 2; l5 = l5 + 1) {
			dsp->fRec5[l5] = 0;
		}
	}
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; l6 < 2; l6 = l6 + 1) {
			dsp->fVec2[l6] = 0;
		}
	}
	dsp->IOTA0 = 0;
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; l7 < 4096; l7 = l7 + 1) {
			dsp->fVec3[l7] = 0;
		}
	}
	/* C99 loop */
	{
		int l8;
		for (l8 = 0; l8 < 2; l8 = l8 + 1) {
			dsp->fRec9[l8] = 0;
		}
	}
	/* C99 loop */
	{
		int l9;
		for (l9 = 0; l9 < 2; l9 = l9 + 1) {
			dsp->fVec4[l9] = 0;
		}
	}
	/* C99 loop */
	{
		int l10;
		for (l10 = 0; l10 < 4096; l10 = l10 + 1) {
			dsp->fVec5[l10] = 0;
		}
	}
	/* C99 loop */
	{
		int l11;
		for (l11 = 0; l11 < 2; l11 = l11 + 1) {
			dsp->fRec10[l11] = 0;
		}
	}
	/* C99 loop */
	{
		int l12;
		for (l12 = 0; l12 < 2; l12 = l12 + 1) {
			dsp->fVec6[l12] = 0;
		}
	}
	/* C99 loop */
	{
		int l13;
		for (l13 = 0; l13 < 2; l13 = l13 + 1) {
			dsp->fRec11[l13] = 0;
		}
	}
	/* C99 loop */
	{
		int l14;
		for (l14 = 0; l14 < 2; l14 = l14 + 1) {
			dsp->fVec7[l14] = 0;
		}
	}
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; l15 < 2; l15 = l15 + 1) {
			dsp->fVec8[l15] = 0;
		}
	}
	/* C99 loop */
	{
		int l16;
		for (l16 = 0; l16 < 2; l16 = l16 + 1) {
			dsp->fRec12[l16] = 0;
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
			dsp->fRec4[l18] = 0;
		}
	}
	/* C99 loop */
	{
		int l19;
		for (l19 = 0; l19 < 2; l19 = l19 + 1) {
			dsp->fRec3[l19] = 0;
		}
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; l20 < 2; l20 = l20 + 1) {
			dsp->fRec2[l20] = 0;
		}
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; l21 < 2; l21 = l21 + 1) {
			dsp->fRec1[l21] = 0;
		}
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; l22 < 2; l22 = l22 + 1) {
			dsp->fRec0[l22] = 0;
		}
	}
}

void instanceConstantsmydsp(mydsp* dsp, int sample_rate) {
	dsp->fSampleRate = sample_rate;
	dsp->fConst0 = fminfx((fixpoint_t)1.92e+05, fmaxfx((fixpoint_t)1.0, (fixpoint_t)(dsp->fSampleRate)));
	dsp->fConst1 = (fixpoint_t)0.25 * dsp->fConst0;
	dsp->fConst2 = (fixpoint_t)1.0 / dsp->fConst0;
	dsp->fConst3 = (fixpoint_t)0.5 * dsp->fConst0;
	dsp->fConst4 = (fixpoint_t)6.2831855 / dsp->fConst0;
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
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "0-oct", &dsp->fHslider1, (FAUSTFLOAT)2.0, (FAUSTFLOAT)0.0, (FAUSTFLOAT)2.0, (FAUSTFLOAT)1.0);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider12, "midi", "10");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "0-shape", &dsp->fHslider12, (FAUSTFLOAT)0.0, (FAUSTFLOAT)0.0, (FAUSTFLOAT)1.0, (FAUSTFLOAT)1.0);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider11, "midi", "12");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "0-vol", &dsp->fHslider11, (FAUSTFLOAT)0.5, (FAUSTFLOAT)0.0, (FAUSTFLOAT)1.0, (FAUSTFLOAT)0.001);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider6, "midi", "16");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "1-det", &dsp->fHslider6, (FAUSTFLOAT)0.0, (FAUSTFLOAT)-5e+01, (FAUSTFLOAT)5e+01, (FAUSTFLOAT)0.0001);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider7, "midi", "14");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "1-oct", &dsp->fHslider7, (FAUSTFLOAT)1.0, (FAUSTFLOAT)0.0, (FAUSTFLOAT)2.0, (FAUSTFLOAT)1.0);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider10, "midi", "13");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "1-shape", &dsp->fHslider10, (FAUSTFLOAT)0.0, (FAUSTFLOAT)0.0, (FAUSTFLOAT)1.0, (FAUSTFLOAT)1.0);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider9, "midi", "15");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "1-vol", &dsp->fHslider9, (FAUSTFLOAT)0.5, (FAUSTFLOAT)0.0, (FAUSTFLOAT)1.0, (FAUSTFLOAT)0.001);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider15, "midi", "4");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "asr->vcf", &dsp->fHslider15, (FAUSTFLOAT)0.0, (FAUSTFLOAT)0.0, (FAUSTFLOAT)1e+01, (FAUSTFLOAT)0.001);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider19, "midi", "1");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "asr-attack", &dsp->fHslider19, (FAUSTFLOAT)0.0, (FAUSTFLOAT)0.0, (FAUSTFLOAT)5.0, (FAUSTFLOAT)0.01);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider18, "midi", "2");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "asr-release", &dsp->fHslider18, (FAUSTFLOAT)0.0, (FAUSTFLOAT)0.0, (FAUSTFLOAT)5.0, (FAUSTFLOAT)0.01);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider16, "midi", "5");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "asr-s-in", &dsp->fHslider16, (FAUSTFLOAT)0.0, (FAUSTFLOAT)0.0, (FAUSTFLOAT)1.0, (FAUSTFLOAT)1.0);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider17, "midi", "3");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "asr-src", &dsp->fHslider17, (FAUSTFLOAT)0.0, (FAUSTFLOAT)0.0, (FAUSTFLOAT)1.0, (FAUSTFLOAT)1.0);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider0, "midi", "18");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "bell-vol", &dsp->fHslider0, (FAUSTFLOAT)0.0, (FAUSTFLOAT)0.0, (FAUSTFLOAT)1.0, (FAUSTFLOAT)0.001);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fButton0, "gate", "");
	ui_interface->addButton(ui_interface->uiInterface, "gate", &dsp->fButton0);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider3, "midi", "8");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo->pitch", &dsp->fHslider3, (FAUSTFLOAT)0.0, (FAUSTFLOAT)0.0, (FAUSTFLOAT)1.0, (FAUSTFLOAT)0.001);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider14, "midi", "9");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo->vcf", &dsp->fHslider14, (FAUSTFLOAT)0.0, (FAUSTFLOAT)0.0, (FAUSTFLOAT)1.0, (FAUSTFLOAT)0.001);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider5, "midi", "6");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo-freq", &dsp->fHslider5, (FAUSTFLOAT)1.0, (FAUSTFLOAT)0.01, (FAUSTFLOAT)2e+01, (FAUSTFLOAT)0.001);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider4, "midi", "7");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo-wav", &dsp->fHslider4, (FAUSTFLOAT)0.0, (FAUSTFLOAT)0.0, (FAUSTFLOAT)2.0, (FAUSTFLOAT)1.0);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider8, "midi", "17");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "noise-vol", &dsp->fHslider8, (FAUSTFLOAT)0.0, (FAUSTFLOAT)0.0, (FAUSTFLOAT)1.0, (FAUSTFLOAT)0.001);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider2, "pitch", "");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "pitch", &dsp->fHslider2, (FAUSTFLOAT)1e+02, (FAUSTFLOAT)0.0, (FAUSTFLOAT)127.0, (FAUSTFLOAT)1.0);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider21, "midi", "21");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "vca-sel", &dsp->fHslider21, (FAUSTFLOAT)1.0, (FAUSTFLOAT)0.0, (FAUSTFLOAT)2.0, (FAUSTFLOAT)1.0);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider13, "midi", "19");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "vcf-freq", &dsp->fHslider13, (FAUSTFLOAT)1e+03, (FAUSTFLOAT)2e+01, (FAUSTFLOAT)6e+03, (FAUSTFLOAT)1.0);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider20, "midi", "20");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "vcf-res", &dsp->fHslider20, (FAUSTFLOAT)0.0, (FAUSTFLOAT)0.0, (FAUSTFLOAT)1.0, (FAUSTFLOAT)0.001);
	ui_interface->closeBox(ui_interface->uiInterface);
}

void computemydsp(mydsp* dsp, int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
	FAUSTFLOAT* output0 = outputs[0];
	fixpoint_t fSlow0 = (fixpoint_t)(dsp->fHslider0);
	int iSlow1 = (int)((fixpoint_t)(dsp->fHslider1));
	int iSlow2 = iSlow1 >= 2;
	int iSlow3 = iSlow1 >= 1;
	fixpoint_t fSlow4 = powfx((fixpoint_t)2.0, (fixpoint_t)0.083333336 * ((fixpoint_t)(dsp->fHslider2) + (fixpoint_t)-69.0));
	fixpoint_t fSlow5 = (fixpoint_t)1.1e+02 * fSlow4;
	fixpoint_t fSlow6 = (fixpoint_t)(dsp->fHslider3);
	fixpoint_t fSlow7 = (fixpoint_t)(dsp->fHslider4);
	int iSlow8 = fSlow7 >= (fixpoint_t)2.0;
	int iSlow9 = fSlow7 >= (fixpoint_t)1.0;
	fixpoint_t fSlow10 = dsp->fConst2 * (fixpoint_t)(dsp->fHslider5);
	fixpoint_t fSlow11 = (fixpoint_t)2.2e+02 * fSlow4;
	fixpoint_t fSlow12 = (fixpoint_t)4.4e+02 * fSlow4;
	fixpoint_t fSlow13 = powfx((fixpoint_t)2.0, (fixpoint_t)0.00083333335 * (fixpoint_t)(dsp->fHslider6));
	int iSlow14 = (int)((fixpoint_t)(dsp->fHslider7));
	int iSlow15 = iSlow14 >= 2;
	int iSlow16 = iSlow14 >= 1;
	fixpoint_t fSlow17 = (fixpoint_t)8.8e+02 * fSlow4;
	fixpoint_t fSlow18 = (fixpoint_t)4.656613e-10 * (fixpoint_t)(dsp->fHslider8);
	fixpoint_t fSlow19 = (fixpoint_t)(dsp->fHslider9);
	int iSlow20 = (int)((fixpoint_t)(dsp->fHslider10)) >= 1;
	fixpoint_t fSlow21 = (fixpoint_t)(dsp->fHslider11);
	int iSlow22 = (int)((fixpoint_t)(dsp->fHslider12)) >= 1;
	fixpoint_t fSlow23 = (fixpoint_t)(dsp->fHslider13);
	fixpoint_t fSlow24 = (fixpoint_t)(dsp->fHslider14);
	fixpoint_t fSlow25 = (fixpoint_t)(dsp->fHslider15);
	int iSlow26 = (fixpoint_t)(dsp->fHslider16) >= (fixpoint_t)1.0;
	int iSlow27 = (fixpoint_t)(dsp->fHslider17) >= (fixpoint_t)1.0;
	fixpoint_t fSlow28 = (fixpoint_t)((fixpoint_t)(dsp->fButton0));
	fixpoint_t fSlow29 = (fixpoint_t)(dsp->fHslider18);
	fixpoint_t fSlow30 = (fixpoint_t)(fSlow29);
	fixpoint_t fSlow31 = (fixpoint_t)(dsp->fHslider19);
	fixpoint_t fSlow32 = (fixpoint_t)(fSlow31);
	fixpoint_t fSlow33 = fmaxfx((fixpoint_t)1.0, dsp->fConst0 * fSlow31);
	fixpoint_t fSlow34 = (fixpoint_t)1.0 / fSlow33;
	fixpoint_t fSlow35 = (fixpoint_t)1.0 / fmaxfx((fixpoint_t)1.0, dsp->fConst0 * fSlow29);
	fixpoint_t fSlow36 = (fixpoint_t)0.0 - (fixpoint_t)4.0 * fmaxfx((fixpoint_t)0.0, fminfx((fixpoint_t)(dsp->fHslider20), (fixpoint_t)0.999999));
	fixpoint_t fSlow37 = (fixpoint_t)(dsp->fHslider21);
	int iSlow38 = fSlow37 >= (fixpoint_t)2.0;
	int iSlow39 = fSlow37 >= (fixpoint_t)1.0;
	/* C99 loop */
	{
		int i0;
		for (i0 = 0; i0 < count; i0 = i0 + 1) {
			dsp->iVec0[0] = 1;
			fixpoint_t fTemp0 = (fixpoint_t)(dsp->iVec0[1]);
			int iTemp1 = 1 - dsp->iVec0[1];
			fixpoint_t fTemp2 = ((iTemp1) ? (fixpoint_t)0.0 : (fixpoint_t)(fSlow10 + dsp->fRec6[1]));
			dsp->fRec6[0] = fTemp2 - floorfx(fTemp2);
			fixpoint_t fTemp3 = (fixpoint_t)(dsp->fRec6[0] <= (fixpoint_t)0.5);
			dsp->fVec1[0] = fTemp3;
			fixpoint_t fTemp4 = (fixpoint_t)(fTemp3);
			int iTemp5 = (dsp->fVec1[1] <= (fixpoint_t)0.0) & (fTemp3 > (fixpoint_t)0.0);
			dsp->iRec8[0] = 1103515245 * dsp->iRec8[1] + 12345;
			fixpoint_t fTemp6 = (fixpoint_t)(dsp->iRec8[0]);
			dsp->fRec7[0] = dsp->fRec7[1] * (fixpoint_t)(1 - iTemp5) + (fixpoint_t)4.656613e-10 * fTemp6 * (fixpoint_t)(iTemp5);
			fixpoint_t fTemp7 = ((iSlow8) ? (fixpoint_t)(dsp->fRec7[0]) : (fixpoint_t)(((iSlow9) ? fTemp4 : (fixpoint_t)((fixpoint_t)2.0 * ((fixpoint_t)1.0 - fabsfx((fixpoint_t)2.0 * dsp->fRec6[0] + (fixpoint_t)-1.0)) + (fixpoint_t)-1.0))));
			fixpoint_t fTemp8 = fSlow6 * fTemp7 + (fixpoint_t)1.0;
			fixpoint_t fTemp9 = (fixpoint_t)(fSlow11 * fTemp8);
			fixpoint_t fTemp10 = fSlow12 * fTemp8;
			fixpoint_t fTemp11 = (fixpoint_t)(fTemp10);
			fixpoint_t fTemp12 = ((iSlow2) ? fTemp11 : (fixpoint_t)(((iSlow3) ? fTemp9 : (fixpoint_t)(fSlow5 * fTemp8))));
			fixpoint_t fTemp13 = fmaxfx(fTemp12, (fixpoint_t)23.44895);
			fixpoint_t fTemp14 = fmaxfx((fixpoint_t)2e+01, fabsfx(fTemp13));
			fixpoint_t fTemp15 = ((iTemp1) ? (fixpoint_t)0.0 : (fixpoint_t)(dsp->fRec5[1] + dsp->fConst2 * fTemp14));
			dsp->fRec5[0] = fTemp15 - floorfx(fTemp15);
			fixpoint_t fTemp16 = powfx((fixpoint_t)2.0 * dsp->fRec5[0] + (fixpoint_t)-1.0, (fixpoint_t)2.0);
			dsp->fVec2[0] = fTemp16;
			fixpoint_t fTemp17 = fTemp0 * (fTemp16 - dsp->fVec2[1]) / fTemp14;
			dsp->fVec3[dsp->IOTA0 & 4095] = fTemp17;
			fixpoint_t fTemp18 = fmaxfx((fixpoint_t)0.0, fminfx((fixpoint_t)2047.0, dsp->fConst3 / fTemp13));
			int iTemp19 = (int)(fTemp18);
			fixpoint_t fTemp20 = floorfx(fTemp18);
			fixpoint_t fTemp21 = dsp->fConst1 * (fTemp17 - dsp->fVec3[(dsp->IOTA0 - iTemp19) & 4095] * (fTemp20 + ((fixpoint_t)1.0 - fTemp18)) - (fTemp18 - fTemp20) * dsp->fVec3[(dsp->IOTA0 - (iTemp19 + 1)) & 4095]);
			fixpoint_t fTemp22 = fSlow13 * ((iSlow15) ? (fixpoint_t)(fSlow17 * fTemp8) : (fixpoint_t)(((iSlow16) ? fTemp11 : fTemp9)));
			fixpoint_t fTemp23 = fmaxfx(fTemp22, (fixpoint_t)23.44895);
			fixpoint_t fTemp24 = fmaxfx((fixpoint_t)2e+01, fabsfx(fTemp23));
			fixpoint_t fTemp25 = ((iTemp1) ? (fixpoint_t)0.0 : (fixpoint_t)(dsp->fRec9[1] + dsp->fConst2 * fTemp24));
			dsp->fRec9[0] = fTemp25 - floorfx(fTemp25);
			fixpoint_t fTemp26 = powfx((fixpoint_t)2.0 * dsp->fRec9[0] + (fixpoint_t)-1.0, (fixpoint_t)2.0);
			dsp->fVec4[0] = fTemp26;
			fixpoint_t fTemp27 = fTemp0 * (fTemp26 - dsp->fVec4[1]) / fTemp24;
			dsp->fVec5[dsp->IOTA0 & 4095] = fTemp27;
			fixpoint_t fTemp28 = fmaxfx((fixpoint_t)0.0, fminfx((fixpoint_t)2047.0, dsp->fConst3 / fTemp23));
			int iTemp29 = (int)(fTemp28);
			fixpoint_t fTemp30 = floorfx(fTemp28);
			fixpoint_t fTemp31 = dsp->fConst1 * (fTemp27 - dsp->fVec5[(dsp->IOTA0 - iTemp29) & 4095] * (fTemp30 + ((fixpoint_t)1.0 - fTemp28)) - (fTemp28 - fTemp30) * dsp->fVec5[(dsp->IOTA0 - (iTemp29 + 1)) & 4095]);
			fixpoint_t fTemp32 = fmaxfx((fixpoint_t)2e+01, fabsfx(fTemp22));
			fixpoint_t fTemp33 = ((iTemp1) ? (fixpoint_t)0.0 : (fixpoint_t)(dsp->fRec10[1] + dsp->fConst2 * fTemp32));
			dsp->fRec10[0] = fTemp33 - floorfx(fTemp33);
			fixpoint_t fTemp34 = powfx((fixpoint_t)2.0 * dsp->fRec10[0] + (fixpoint_t)-1.0, (fixpoint_t)2.0);
			dsp->fVec6[0] = fTemp34;
			fixpoint_t fTemp35 = fmaxfx((fixpoint_t)2e+01, fabsfx(fTemp12));
			fixpoint_t fTemp36 = ((iTemp1) ? (fixpoint_t)0.0 : (fixpoint_t)(dsp->fRec11[1] + dsp->fConst2 * fTemp35));
			dsp->fRec11[0] = fTemp36 - floorfx(fTemp36);
			fixpoint_t fTemp37 = powfx((fixpoint_t)2.0 * dsp->fRec11[0] + (fixpoint_t)-1.0, (fixpoint_t)2.0);
			dsp->fVec7[0] = fTemp37;
			fixpoint_t fTemp38 = ((iSlow27) ? fTemp4 : fSlow28);
			dsp->fVec8[0] = fTemp38;
			int iTemp39 = fTemp38 > (fixpoint_t)0.0;
			fixpoint_t fTemp40 = (fixpoint_t)0.1447178 * ((iTemp39) ? fSlow32 : fSlow30);
			int iTemp41 = fabsfx(fTemp40) < (fixpoint_t)2.220446e-16;
			fixpoint_t fTemp42 = ((iTemp41) ? (fixpoint_t)0.0 : (fixpoint_t)(expfx((fixpoint_t)0.0 - dsp->fConst2 / ((iTemp41) ? (fixpoint_t)1.0 : (fixpoint_t)(fTemp40)))));
			dsp->fRec12[0] = ((fixpoint_t)1.0 - fTemp42) * ((iTemp39) ? (fixpoint_t)((fixpoint_t)(iTemp39)) : (fixpoint_t)0.0) + fTemp42 * dsp->fRec12[1];
			dsp->iRec13[0] = (dsp->iRec13[1] + (dsp->iRec13[1] > 0)) * (fTemp38 <= dsp->fVec8[1]) + (fTemp38 > dsp->fVec8[1]);
			fixpoint_t fTemp43 = (fixpoint_t)(dsp->iRec13[0]);
			fixpoint_t fTemp44 = ((iSlow26) ? (fixpoint_t)(fmaxfx((fixpoint_t)0.0, fminfx(fSlow34 * fTemp43, fSlow35 * (fSlow33 - fTemp43) + (fixpoint_t)1.0))) : (fixpoint_t)(dsp->fRec12[0]));
			fixpoint_t fTemp45 = dsp->fConst4 * (fSlow23 * (fSlow24 * fTemp7 + (fixpoint_t)1.0) * (fSlow25 * fTemp44 + (fixpoint_t)1.0) + fTemp10);
			fixpoint_t fTemp46 = (fixpoint_t)1.0 - fTemp45;
			dsp->fRec4[0] = fSlow0 * (fixpoint_t)((int)(fTemp21) ^ (int)(fTemp31)) + fSlow18 * fTemp6 + fSlow19 * ((iSlow20) ? (fixpoint_t)(dsp->fConst1 * (fTemp0 * (fTemp34 - dsp->fVec6[1]) / fTemp32)) : (fixpoint_t)(fTemp31)) + fSlow21 * ((iSlow22) ? (fixpoint_t)(dsp->fConst1 * (fTemp0 * (fTemp37 - dsp->fVec7[1]) / fTemp35)) : (fixpoint_t)(fTemp21)) + fTemp46 * dsp->fRec4[1] + fSlow36 * dsp->fRec0[1];
			dsp->fRec3[0] = dsp->fRec4[0] + fTemp46 * dsp->fRec3[1];
			dsp->fRec2[0] = dsp->fRec3[0] + fTemp46 * dsp->fRec2[1];
			dsp->fRec1[0] = dsp->fRec2[0] + dsp->fRec1[1] * fTemp46;
			dsp->fRec0[0] = dsp->fRec1[0] * powfx(fTemp45, (fixpoint_t)4.0);
			output0[i0] = (FAUSTFLOAT)(dsp->fRec0[0] * ((iSlow38) ? fSlow28 : (fixpoint_t)(((iSlow39) ? (fixpoint_t)(fTemp44) : (fixpoint_t)1.0))));
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
