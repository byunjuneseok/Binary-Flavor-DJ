//
// Created by Juneseok Byun on 2019-05-10.
//

#ifndef BINARY_FLAVOR_DJ_MIXERMODULE_H
#define BINARY_FLAVOR_DJ_MIXERMODULE_H

#include <string>

#include <Modules/Module.h>
#include <Modules/MixerChannelModule.h>
#include <Modules/DeckModule.h>


namespace Bfdj
{
    class MixerModule : public Module
    {
    public:
        MixerModule() = default;
        ~MixerModule() override = default;

        bool AssignDeck(int deckNumber, Bfdj::DeckModule* deckToAssign);

        // utils
        static bool ValidateDeckNumber(int testNumber);

    protected:
        Bfdj::MixerChannelModule* m_channelModules[4] = {nullptr};

    };
}
#endif //BINARY_FLAVOR_DJ_MIXER_H
