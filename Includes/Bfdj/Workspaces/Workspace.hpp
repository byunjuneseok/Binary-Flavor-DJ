//
// Created by Juneseok Byun on 2019-08-09.
//

#ifndef BINARYFLAVORDJ_WORKSPACE_HPP
#define BINARYFLAVORDJ_WORKSPACE_HPP

#include <vector>
#include <Modules/Hub.hpp>
#include <Modules/MixerModule.hpp>
#include <Modules/DeckModule.hpp>

namespace Bfdj
{
    class Workspace
    {
    public:
        Workspace() = default;
        ~Workspace() = default;
        Bfdj::Hub* CreateHub();
        Bfdj::MixerModule* CreateMixer();
        Bfdj::DeckModule* CreateDeck();
        std::vector<Hub*> GetHubsOnWorkspace() const;
        std::vector<MixerModule*> GetMixerModulesOnWorkspace() const;
        std::vector<DeckModule*> GetDeckModulesOnWorkspace() const;
        bool excessOfHubCapacity() const;
        bool excessOfMixerModuleCapacity() const;
        bool excessOfDeckModuleCapacity() const;
    private:
        std::vector<Hub*> hubsOnWorkspace;
        std::vector<MixerModule*> mixerModulesOnWorkspace;
        std::vector<DeckModule*> deckModulesOnWorkspace;
    };
}

#endif //BINARYFLAVORDJ_WORKSPACE_H
