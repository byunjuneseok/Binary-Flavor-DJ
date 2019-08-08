//
// Created by Juneseok Byun on 2019-05-12.
//

#include <Modules/MixerModule.hpp>
#include <Modules/MixerChannelModule.hpp>
#include <iostream>

namespace Bfdj
{
    // to-do
    bool MixerModule::AssignDeck(int deckNumber, Bfdj::DeckModule* DeckToAssign)
    {
        if(ValidateDeckNumber(deckNumber))
        {
            if (m_channelModules[deckNumber])
            {
                return false;
            }
            else
            {
                m_channelModules[deckNumber] = new MixerChannelModule(DeckToAssign);
                return true;
            }
        }
        else
        {
            return false;
        }
    }

    bool MixerModule::ValidateDeckNumber(int testNumber)
    {
        return !(testNumber > 3 || testNumber < 0);
    }

    Bfdj::MixerChannelModule* MixerModule::GetChannelModulePointer(int deckNumber) const
    {
        return m_channelModules[deckNumber];
    }
}
