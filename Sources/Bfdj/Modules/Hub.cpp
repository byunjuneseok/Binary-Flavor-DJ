//
// Created by Juneseok Byun on 2019-05-12.
//
#include <iostream>
#include <Modules/Hub.hpp>
#include <QtWidgets>
#include <ModuleWindows/HubWindow.hpp>

namespace Bfdj
{
    Hub::Hub()
    {
        m_WindowObject = new HubWindow(nullptr);
        m_WindowObject->show();
    }

    bool Hub::AssignMixer(Bfdj::MixerModule& newMixer)
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

    bool Hub::AssignDeck(int deckNumber, Bfdj::DeckModule* newDeck)
    {
        if (m_decklist[deckNumber])
        {
            return false;
        }
        else
        {
            this->m_decklist[deckNumber] = newDeck;
            return true;
        }
    }

    bool Hub::CheckDeckState() const {
        int failFlag = 0;

        for (int i = 0; i < 4; i++)
        {
            if (m_decklist[i] == nullptr)
            {
                if (m_decklist[i] == nullptr)
                {
                    std::cout << "Deck number " << i << ": identified! (nullptr)" << std::endl;
                }
                else
                {
                    std::cout << "Deck number " << i << ": failed to sync!" << std::endl;
                    failFlag++;
                }
            }
            else if (m_mixer->GetChannelModulePointer(i) == nullptr)
            {
                std::cout << "Deck number " << i << ": failed to sync!" << std::endl;
                failFlag++;
            }
            else
            {
                if (m_decklist[i] != m_mixer->GetChannelModulePointer(i)->GetParentDeckPointer())
                {
                    std::cout << "Deck number " << i << ": failed to sync!" << std::endl;
                    failFlag++;
                }
                else
                {
                    std::cout << "Deck number " << i << ": identified!" << std::endl;
                }
            }
        }
        return failFlag;
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