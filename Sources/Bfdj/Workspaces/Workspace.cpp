//
// Created by Juneseok Byun on 2019-08-09.
//
#include <Workspaces/Workspace.hpp>

namespace Bfdj
{
    void Workspace::CreateHub()
    {
        auto* newHub = new Hub();
        HubsOnWorkspace.push_back(newHub);
    }

    void Workspace::CreateMixer()
    {
        auto* newMixer = new MixerModule();
        mixerModulesOnWorkspace.push_back(newMixer);
    }

    void Workspace::CreateDeck()
    {
        auto* newDeck = new DeckModule();
        deckModulesOnWorkspace.push_back(newDeck);
    }

    void Workspace::AddDeckModule(Bfdj::DeckModule &deck)
    {
        deckModulesOnWorkspace.push_back(&deck);
    }
}
