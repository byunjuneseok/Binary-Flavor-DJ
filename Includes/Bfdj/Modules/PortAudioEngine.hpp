//
// Created by Juneseok Byun on 2019-08-09.
//

#ifndef BINARYFLAVORDJ_PORTAUDIOENGINE_HPP
#define BINARYFLAVORDJ_PORTAUDIOENGINE_HPP

#include <portaudiocpp/PortAudioCpp.hxx>

namespace Bfdj
{
    class paTestData
    {
    public:
        float left_phase;
        float right_phase;
    };

    class PaStream
    {
    public:
        int PaStreamCallback(const void *inputBuffer,
                             void *outputBuffer,
                             unsigned long framesPerBuffer,
                             const PaStreamCallbackTimeInfo* timeInfo,
                             PaStreamCallbackFlags statusFlags,
                             void *userData);

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

#endif //BINARYFLAVORDJ_PORTAUDIOENGINE_HPP
