//
// Created by Juneseok Byun on 2019-05-26.
//

#ifndef BINARYFLAVORDJ_DECKMODULEWINDOW_HPP
#define BINARYFLAVORDJ_DECKMODULEWINDOW_HPP

#include <string>
#include <QtWidgets>
#include <Modules/DeckModule.hpp>

namespace BfdjGUI
{
    class DeckModuleWindow : public QMainWindow
    {
        Q_OBJECT
    public:
        explicit DeckModuleWindow(QWidget* parent, Bfdj::DeckModule* newDeckModule);
        void InitDeckWindow();
        void InitDeckWindowLayout();
        void Play();
        void Cue();

    private:
        Bfdj::DeckModule* parentDeckModule;
    };
}


#endif //BINARYFLAVORDJ_DECKMODULEWINDOW_H
