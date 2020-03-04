//
// Created by Juneseok Byun on 2020/03/03.
//

#ifndef BINARYFLAVORDJ_WORKSPACEWINDOWSTATE_HPP
#define BINARYFLAVORDJ_WORKSPACEWINDOWSTATE_HPP

#include <string>
#include <QtWidgets>

namespace BfdjGUI
{
    class WorkspaceWindowState : public QWidget
    {
        Q_OBJECT
    public:
        explicit WorkspaceWindowState(QWidget *parent = nullptr);
        void InitWidget();
    protected:
    private slots:
    private:
        int numberHub;
        int numberMixer;
        int numberDecks;
    };
}

#endif //BINARYFLAVORDJ_WORKSPACEWINDOWSTATE_HPP
