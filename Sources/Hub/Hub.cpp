//
// Created by Juneseok Byun on 2019-05-12.
//

#include <Hub/Hub.h>

namespace Binaryflavordj
{
    bool Hub::AssignMixer(Binaryflavordj::Mixer& newMixer)
    {
        if (this->m_mixer)
        {
            return false;
        }
        else
        {
            m_mixer = &newMixer;
        }
    }

    bool Hub::ConnectDeck(int deckNumber, Binaryflavordj::Deck& newDeck)
    {
        if (this->m_decklist[deckNumber])
        {
            return false;
        }
        else
        {
            return true;
        }
    }

    bool Hub::CheckDeckState(int deckNumber) const {
        if (this->m_decklist[deckNumber])
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}