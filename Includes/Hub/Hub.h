//
// Created by Juneseok Byun on 2019-05-12.
//

#ifndef BINARY_FLAVOR_DJ_HUB_H
#define BINARY_FLAVOR_DJ_HUB_H

#include <Mixer/Mixer.h>
#include <Deck/Deck.h>

namespace Binaryflavordj
{
class Hub
{
public:
    Hub() = default;
    ~Hub() = default;

    bool AssignMixer(Binaryflavordj::Mixer& newMixer);

    bool ConnectDeck(int deckNumber, Binaryflavordj::Deck& newDeck);

    bool CheckDeckState(int deckNumber) const;

protected:
    Binaryflavordj::Deck* m_decklist[4] = {nullptr};
    Binaryflavordj::Mixer* m_mixer = nullptr;
};
}

#endif //BINARY_FLAVOR_DJ_HUB_H
