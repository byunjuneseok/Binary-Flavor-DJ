//
// Created by Juneseok Byun on 2019-05-10.
//

#ifndef BINARY_FLAVOR_DJ_DECK_H
#define BINARY_FLAVOR_DJ_DECK_H

#include <Modules/Module.h>
#include <string>

namespace Binaryflavordj
{
    class DeckModule : public Module
    {
    public:
        DeckModule() = default;
        ~DeckModule() override = default;

    protected:
        int m_deck_number = 0;
    };
}

#endif //BINARY_FLAVOR_DJ_DECK_H
