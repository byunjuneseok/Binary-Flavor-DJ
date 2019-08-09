//
// Created by Juneseok Byun on 2019-08-09.
//
#include <Workspaces/Workspace.hpp>

namespace Bfdj
{
    void Workspace::CreateHub()
    {
        Hub* newHub = new Hub();
        HubsOnWorkspace.push_back(newHub);
    }

    void Workspace::AddDeckModule(Bfdj::DeckModule &deck)
    {
        deckModulesOnWorkspace.push_back(&deck);
    }
}
