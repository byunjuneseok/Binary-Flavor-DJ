//
// Created by Juneseok Byun on 2019-08-09.
//

#ifndef BINARYFLAVORDJ_WORKSPACES_HPP
#define BINARYFLAVORDJ_WORKSPACES_HPP

#include <vector>

#include <Modules/Hub.hpp>
#include <Modules/MixerModule.hpp>
#include <Modules/DeckModule.hpp>

namespace Bfdj
{
    class Workspace
    {
    public:

    private:
        std::vector<Hub*> HubsOnWorkspace;
        std::vector<MixerModule*> mixerModulesOnWorkspace;
        std::vector<DeckModule*> deckModulesOnWorkspace;


        
    };
}


#endif //BINARYFLAVORDJ_WORKSPACES_H
