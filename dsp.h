#ifndef DSP_H
#define DSP_H

typedef struct {
	UIGlue *uiInterface;
	void (*openVerticalBox)( UIGlue *uiInterface, char* key);
	void (*openHorizontalBox)( UIGlue *uiInterface, char* key);
	void (*closeBox)( UIGlue *uiInterface);
	void (*declare)( UIGlue *uiInterface, float *p, const char* key, const char* val);

	void (*addVerticalSlider)( UIGlue *uiInterface, const char *name, float *p, float init, float min, float max, float step);
	void (*addHorizontalSlider)( UIGlue *uiInterface, const char *name, float *p, float init, float min, float max, float step);
	void (*addNumEntry)( UIGlue *uiInterface, const char *name, float *p, float init, float min, float max, float step);

	void (*addVerticalBargraph)( UIGlue *uiInterface, const char *name, float *p, float f1, float f2);
	void (*addButton)( UIGlue *uiInterface, const char *name, float *p)
} UIGlue;

typedef struct {
    MetaGlue *metaInterface;
    void (*declare)(MetaGlue meta,const char *str1, const char *str2)
} MetaGlue;

#endif