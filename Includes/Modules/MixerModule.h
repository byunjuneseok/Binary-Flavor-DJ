//
// Created by Juneseok Byun on 2019-05-10.
//

#ifndef BINARY_FLAVOR_DJ_MIXER_H
#define BINARY_FLAVOR_DJ_MIXER_H

#include <string>

#include <Modules/Module.h>
#include <Modules/DeckModule.h>


namespace Binaryflavordj
{
    class MixerModule : public Module
    {
    public:
        MixerModule() = default;
        ~MixerModule() override = default;

    };
}
#endif //BINARY_FLAVOR_DJ_MIXER_H
