//
// Created by Juneseok Byun on 2019-05-12.
//

#include <Modules/MixerModule.h>
#include <Modules/MixerChannelModule.h>
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

            }
        }
    }

    bool MixerModule::ValidateDeckNumber(int testNumber)
    {
        return !(testNumber > 3 || testNumber < 0);
    }
}