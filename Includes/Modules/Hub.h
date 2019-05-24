//
// Created by Juneseok Byun on 2019-05-12.
//

#ifndef BINARY_FLAVOR_DJ_HUB_H
#define BINARY_FLAVOR_DJ_HUB_H

#include <Modules/MixerModule.h>
#include <Modules/DeckModule.h>
#include <QtWidgets/QMainWindow>

namespace Binaryflavordj
{
    class Hub : public QMainWindow
    {
        Q_OBJECT
    public:
        explicit Hub(QWidget* parent = nullptr);

        bool AssignMixer(Binaryflavordj::MixerModule& newMixer);

        bool AssignDeck(int deckNumber, Binaryflavordj::DeckModule& newDeck);

        bool CheckDeckState(int deckNumber) const;

        void PrintState() const;

    protected:
        Binaryflavordj::DeckModule* m_decklist[4] = {nullptr};
        Binaryflavordj::MixerModule* m_mixer = nullptr;

    };
}

#endif //BINARY_FLAVOR_DJ_HUB_H
