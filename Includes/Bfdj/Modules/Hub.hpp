//
// Created by Juneseok Byun on 2019-05-12.
//

#ifndef BINARY_FLAVOR_DJ_HUB_HPP
#define BINARY_FLAVOR_DJ_HUB_HPP

#include <QtWidgets/QMainWindow>

#include <Modules/MixerModule.hpp>
#include <Modules/DeckModule.hpp>

namespace Bfdj
{
    class Hub : public Module
    {
    public:
        Hub() = default;
        ~Hub() = default;

        bool CreateMixer();
        bool CreateDeck(int deckNumber);

        bool DetachMixer();
        bool DetachDeck(int deckNumber);

        bool AssignMixer(Bfdj::MixerModule& newMixer);
        bool AssignDeck(int deckNumber, Bfdj::DeckModule& newDeck);


        // getter
        MixerModule* GetMixer() const;
        DeckModule* GetDeck(int deckNumber) const;
        bool CheckDeckState() const;
        void PrintState() const;

        // utilities
        bool ValidateDeckNumber(int deckNumber);


    protected:
        Bfdj::DeckModule* decklist[5] = {nullptr};
        Bfdj::MixerModule* mixer = nullptr;

    private:
    };
}

#endif //BINARY_FLAVOR_DJ_HUB_H
