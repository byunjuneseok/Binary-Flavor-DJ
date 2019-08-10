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

        void CreateHub();
        void CreateMixer();
        void CreateDeck();

        void AddDeckModule(DeckModule& deck);


    private:
        std::vector<Hub*> HubsOnWorkspace;
        std::vector<MixerModule*> mixerModulesOnWorkspace;
        std::vector<DeckModule*> deckModulesOnWorkspace;
    };
}

#endif //BINARYFLAVORDJ_WORKSPACE_H
