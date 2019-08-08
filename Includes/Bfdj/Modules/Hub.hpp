//
// Created by Juneseok Byun on 2019-05-12.
//

#ifndef BINARY_FLAVOR_DJ_HUB_HPP
#define BINARY_FLAVOR_DJ_HUB_HPP

#include <QtWidgets/QMainWindow>

#include <Modules/MixerModule.hpp>
#include <Modules/DeckModule.hpp>

#include <ModuleWindows/HubWindow.hpp>


namespace Bfdj
{
    class Hub : public Module
    {
    public:
        Hub();
        ~Hub() = default;

        bool AssignMixer(Bfdj::MixerModule& newMixer);

        bool AssignDeck(int deckNumber, Bfdj::DeckModule* newDeck);

        bool CheckDeckState() const;

        void PrintState() const;

    protected:
        Bfdj::DeckModule* m_decklist[4] = {nullptr};
        Bfdj::MixerModule* m_mixer = nullptr;

    private:
        Bfdj::HubWindow* m_WindowObject;
    };
}

#endif //BINARY_FLAVOR_DJ_HUB_H
