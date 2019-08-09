//
// Created by Juneseok Byun on 2019-08-09.
//

#ifndef BINARYFLAVORDJ_PORTAUDIOENGINE_HPP
#define BINARYFLAVORDJ_PORTAUDIOENGINE_HPP

#include <portaudio/bindings/cpp/include/portaudiocpp/PortAudioCpp.hxx>

namespace Bfdj
{
    class PaStream
    {
    public:
        int PaStreamCallback();

    private:
        const void* input;
        void *output;
        unsigned long frameCount;
        const PaStreamCallbackTimeInfo* timeInfo;
        PaStreamCallbackFlags statusFlags;
        void *userData;


        float leftPhase;
        float rightPhase;
    };
}



typedef int PaStreamCallback( const void *input,
                              void *output,
                              unsigned long frameCount,
                              const PaStreamCallbackTimeInfo* timeInfo,
                              PaStreamCallbackFlags statusFlags,
                              void *userData )
{
    /* Cast data passed through stream to our structure. */
    paTestData *data = (paTestData*)userData;
    float *out = (float*)outputBuffer;
    unsigned int i;
    (void) inputBuffer; /* Prevent unused variable warning. */

    for( i=0; i<framesPerBuffer; i++ )
    {
        *out++ = data->left_phase;  /* left */
        *out++ = data->right_phase;  /* right */
        /* Generate simple sawtooth phaser that ranges between -1.0 and 1.0. */
        data->left_phase += 0.01f;
        /* When signal reaches top, drop back down. */
        if( data->left_phase >= 1.0f ) data->left_phase -= 2.0f;
        /* higher pitch so we can distinguish left and right. */
        data->right_phase += 0.03f;
        if( data->right_phase >= 1.0f ) data->right_phase -= 2.0f;
    }
    return 0;
};

#endif //BINARYFLAVORDJ_PORTAUDIOENGINE_HPP
