//
// Created by Juneseok Byun on 2019-08-09.
//
#include <Workspaces/Workspace.hpp>

namespace Bfdj
{
    Bfdj::Hub* Workspace::CreateHub()
    {
        auto* newHub = new Hub();
        hubsOnWorkspace.push_back(newHub);
        return newHub;
    }

    Bfdj::MixerModule* Workspace::CreateMixer()
    {
        auto* newMixer = new MixerModule();
        mixerModulesOnWorkspace.push_back(newMixer);
        return newMixer;
    }

    Bfdj::DeckModule* Workspace::CreateDeck()
    {
        auto* newDeck = new DeckModule();
        deckModulesOnWorkspace.push_back(newDeck);
        return newDeck;
    }

    std::vector<Hub*> Workspace::GetHubsOnWorkspace() const
    {
        return hubsOnWorkspace;
    }

    std::vector<MixerModule*> Workspace::GetMixerModulesOnWorkspace() const
    {
        return mixerModulesOnWorkspace;
    }

    std::vector<DeckModule*> Workspace::GetDeckModulesOnWorkspace() const
    {
        return deckModulesOnWorkspace;
    }

    bool Workspace::excessOfHubCapacity() const
    {
        return this->hubsOnWorkspace.size() >= 2;
    };

    bool Workspace::excessOfMixerModuleCapacity() const {
        return this->mixerModulesOnWorkspace.size() >= 2;
    };

    bool Workspace::excessOfDeckModuleCapacity() const {
        return this->deckModulesOnWorkspace.size() >= 4;
    };

}
