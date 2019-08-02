//
// Created by Juneseok Byun on 2019-05-26.
//

#ifndef BINARYFLAVORDJ_DECKMODULEWINDOW_H
#define BINARYFLAVORDJ_DECKMODULEWINDOW_H

#include <string>
#include <QtWidgets>
#include <Modules/DeckModule.h>

namespace Bfdj
{
    class DeckModuleWindow : public QMainWindow
    {
        Q_OBJECT
    public:
        explicit DeckModuleWindow(QWidget *parent);

        void InitDeckWindow();
        void InitDeckWindowLayout();

        void Play();
        void Cue();

    private:
        DeckModule* m_parentDeckModule;
    };
}


#endif //BINARYFLAVORDJ_DECKMODULEWINDOW_H
