//
// Created by Juneseok Byun on 2019-05-12.
//
#include <iostream>
#include <Modules/Hub.hpp>
#include <Modules/MixerModule.hpp>
#include <Modules/DeckModule.hpp>
#include <QtWidgets>
#include <ModuleWindows/HubWindow.hpp>

namespace Bfdj
{

    bool Hub::CreateMixer()
    {
        mixer = new MixerModule;
        return mixer != nullptr;
    }

    bool Hub::CreateDeck(int deckNumber)
    {
        if(ValidateDeckNumber(deckNumber))
        {
            decklist[deckNumber] = new DeckModule;
            return true;
        }
        else
        {
            return false;
        }
    }

    bool Hub::DetachMixer()
    {
        return mixer = nullptr;
    }

    bool Hub::DetachDeck(int deckNumber)
    {
        return decklist[deckNumber] = nullptr;
    }

    bool Hub::AssignMixer(Bfdj::MixerModule& newMixer)
    {
        if (mixer)
        {
            return false;
        }
        else
        {
            mixer = &newMixer;
            return true;
        }
    }

    bool Hub::AssignDeck(int deckNumber, Bfdj::DeckModule& newDeck)
    {
        if (decklist[deckNumber])
        {
            return false;
        }
        else
        {
            this->decklist[deckNumber] = &newDeck;
            return true;
        }
    }

    MixerModule* Hub::GetMixer() const
    {
        return mixer;
    }

    DeckModule* Hub::GetDeck(int deckNumber) const
    {
        return decklist[deckNumber];
    }

    bool Hub::CheckDeckState() const
    {
        int failFlag = 0;

        for (int i = 0; i < 4; i++)
        {
            if (decklist[i] == nullptr)
            {
                if (decklist[i] == nullptr)
                {
                    std::cout << "Deck number " << i << ": identified! (nullptr)" << std::endl;
                }
                else
                {
                    std::cout << "Deck number " << i << ": failed to sync!" << std::endl;
                    failFlag++;
                }
            }
            else if (mixer->GetChannelModulePointer(i) == nullptr)
            {
                std::cout << "Deck number " << i << ": failed to sync!" << std::endl;
                failFlag++;
            }
            else
            {
                if (decklist[i] != mixer->GetChannelModulePointer(i)->GetParentDeckPointer())
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
        if (this->mixer)
        {
            std::cout << "Mixer Name : " << mixer->GetName() << std::endl;
        }
        else
        {
            std::cout << "No Mixer!" << std::endl;
        }
        for (int i = 0; i < 4; i++)
        {
            if (this->decklist[i])
            {
                std::cout << "DECK #" << i + 1 << ": " <<
                          this->decklist[i]->GetName() << std::endl;
            }
            else
            {
                std::cout << "DECK #" << i + 1 <<  ": empty" << std::endl;
            }
        }
    }

    bool Hub::ValidateDeckNumber(int deckNumber)
    {
        if (deckNumber > 0 && deckNumber <= 4)
        {
            return decklist[deckNumber] == nullptr;
        }
        else{
            return false;
        }
    }
}