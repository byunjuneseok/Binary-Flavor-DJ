//
// Created by Juneseok Byun on 2019-05-10.
//

#ifndef BINARY_FLAVOR_DJ_MIXERMODULE_HPP
#define BINARY_FLAVOR_DJ_MIXERMODULE_HPP

#include <string>

#include <Modules/Module.hpp>
#include <Modules/MixerChannelModule.hpp>
#include <Modules/DeckModule.hpp>


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

        Bfdj::MixerChannelModule* GetChannelModulePointer(int deckNumber) const;

    private:
        Bfdj::MixerChannelModule* m_channelModules[4] = {nullptr};

    };
}
#endif //BINARY_FLAVOR_DJ_MIXER_H
