#include <math.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
// #include "square-diode-lfo.h"
// #include "square-diode.h"
#include "moog-poly-3.h"

#define NUM_VOICES 3

struct voice_s {
    bool on;
    uint8_t note;
    float *pitch;
    float *gain;
    float *gate;
};

struct voice_s voices[NUM_VOICES];

int get_next_voice( void ){
    for(int i = 0 ; i < NUM_VOICES; i++)
    {
        if((!voices[i].on) || (*voices[i].gain == 0.0f))
            return i;
    }
    return -1;
}

int get_voice_by_note(uint8_t note){
    for(int i = 0 ; i < NUM_VOICES; i++)
    {
        if( voices[i].note == note)
            return i;
    }
    return -1;
}

mydsp dsp;

float *buf[1];
size_t buf_len;

void dsp_init(size_t buf_size){
    size_t cnt = buf_size / 2;
    initmydsp(&dsp, 32000);
    buf[0] = (float *)malloc(cnt * sizeof(float));
    buf_len = cnt;

    voices[0].on = false;
    voices[0].note = 0;
    voices[0].pitch = &dsp.fHslider2;
    voices[0].gain = &dsp.fVbargraph0;
    voices[0].gate = &dsp.fButton0;

    voices[1].on = false;
    voices[1].note = 0;
    voices[1].pitch = &dsp.fHslider3;
    voices[1].gain = &dsp.fVbargraph1;
    voices[1].gate = &dsp.fButton1;

    voices[2].on = false;
    voices[2].note = 0;
    voices[2].pitch = &dsp.fHslider4;
    voices[2].gain = &dsp.fVbargraph2;
    voices[2].gate = &dsp.fButton2;
}

void dsp_run(int16_t *dest){
    computemydsp(&dsp, buf_len, NULL, buf);
    for(int i=0;i<buf_len;i++){
        float val = buf[0][i];
        int16_t i16 = val * 32767;
        uint16_t u16 = (uint16_t)i16;
        size_t index = i * 2;
        dest[ index ] = u16;
        dest[ index + 1 ] = u16;
    }
}

void play(uint8_t note){
    int ret = get_next_voice();
    if(ret == -1)
        return
    voices[ret].on = true;
    voices[ret].note = note;
    *voices[ret].pitch = note_to_freq(note);
    *voices[ret].gate = 1.0f;
}

void stop(uint8_t note){
    int ret = get_voice_by_note(note);
    if(ret == -1 )
        return
    voices[ret].on = false;
    *voices[ret].gate = 0.0f;
}

float note_to_freq(int note) {
    float a = 440; //frequency of A (coomon value is 440Hz)
    return (a / 32) * pow(2, ((note - 9) / 12.0));
}

// void set_note(uint8_t note){
//     float hz = note_to_freq(note);
//     dsp.fEntry1 = hz;
// }

void set_filter1(uint8_t val){
    float freq = ((float)val / 127.0f) * 0.8;
    dsp.fHslider0 = freq;
}

void set_filter2(uint8_t val){
    float freq = ((float)val / 127.0f) * 0.1;
    dsp.fHslider1 = freq;
}

void set_filter3(uint8_t val){
    float freq = ((float)val / 127.0f) * 40;
    dsp.fHslider2 = freq;
}