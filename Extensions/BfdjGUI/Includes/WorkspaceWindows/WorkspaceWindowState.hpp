//
// Created by Juneseok Byun on 2020/03/03.
//

#ifndef BINARYFLAVORDJ_WORKSPACEWINDOWSTATE_HPP
#define BINARYFLAVORDJ_WORKSPACEWINDOWSTATE_HPP

#include <string>
#include <QtWidgets>
#include <Workspaces/Workspace.hpp>

namespace BfdjGUI
{
    class WorkspaceWindowState : public QWidget
    {
        Q_OBJECT
    public:
        explicit WorkspaceWindowState(Bfdj::Workspace* newWorkspace, QWidget* parent = nullptr);
        void InitWidget();
    protected:
        Bfdj::Workspace* const parentWorkspace;
    private slots:
    private:
        int numberHubs;
        int numberMixers;
        int numberDecks;
    };
}

#endif //BINARYFLAVORDJ_WORKSPACEWINDOWSTATE_HPP
