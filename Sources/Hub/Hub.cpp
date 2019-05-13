//
// Created by Juneseok Byun on 2019-05-12.
//
#include <iostream>
#include <Hub/Hub.h>

namespace Binaryflavordj
{
    bool Hub::AssignMixer(Binaryflavordj::MixerModule& newMixer)
    {
        if (this->m_mixer)
        {
            return false;
        }
        else
        {
            m_mixer = &newMixer;
            return true;
        }
    }

    bool Hub::ConnectDeck(int deckNumber, Binaryflavordj::DeckModule& newDeck)
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

    void Hub::PrintState() const
    {
        std::cout << "Mixer Name : " << m_mixer->GetName() << std::endl;
    }
}