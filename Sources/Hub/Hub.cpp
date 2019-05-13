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

    bool Hub::AssignDeck(int deckNumber, Binaryflavordj::DeckModule& newDeck)
    {
        if (this->m_decklist[deckNumber - 1])
        {
            return false;
        }
        else
        {
            this->m_decklist[deckNumber - 1] = &newDeck;
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
        if (this->m_mixer)
        {
            std::cout << "Mixer Name : " << m_mixer->GetName() << std::endl;
        }
        else
        {
            std::cout << "No Mixer!" << std::endl;
        }
        for (int i = 0; i < 4; i++)
        {
            if (this->m_decklist[i])
            {
                std::cout << "DECK #" << i + 1 <<  ": " <<
                this->m_decklist[i]->GetName() << std::endl;
            }
            else
            {
                std::cout << "DECK #" << i + 1 <<  ": empty" << std::endl;
            }
        }
    }
}