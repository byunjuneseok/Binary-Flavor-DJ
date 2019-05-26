//
// Created by Juneseok Byun on 2019-05-10.
//

#ifndef BINARY_FLAVOR_DJ_DECKMODULE_H
#define BINARY_FLAVOR_DJ_DECKMODULE_H

#include <Modules/Module.h>
#include <string>

namespace Bfdj
{
    class DeckModule : public Module
    {
    public:
        DeckModule() = default;
        ~DeckModule() override = default;

        void Play();
        void Cue();

    protected:
        int m_deck_number = 0;

    private:
        bool playState = false;
    };
}

#endif //BINARY_FLAVOR_DJ_DECK_H
