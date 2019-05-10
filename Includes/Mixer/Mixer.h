//
// Created by Juneseok Byun on 2019-05-10.
//

#ifndef BINARY_FLAVOR_DJ_MIXER_H
#define BINARY_FLAVOR_DJ_MIXER_H

#include <Deck/Deck.h>

namespace Mixer
{
class Mixer
{
public:
    Mixer() = default;

    Deck::Deck* CheckEmptyDeckNumber()
    {
        for (auto deck : m_decklist)
        {
            if (deck)
            {
                // If Deck is not empty.
            }
            else
            {
                return deck;
            }
        }
    }

protected:
    Deck::Deck* m_decklist[4] = {0};
};
}
#endif //BINARY_FLAVOR_DJ_MIXER_H
