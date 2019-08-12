//
// Created by Juneseok Byun on 2019-08-12.
//

#ifndef BINARYFLAVORDJ_WORKSPACEWINDOW_HPP
#define BINARYFLAVORDJ_WORKSPACEWINDOW_HPP

#include <string>
#include <QtWidgets>
#include <Workspaces/Workspace.hpp>

namespace BfdjGUI
{
    class WorkspaceWindow : public QMainWindow
    {
        Q_OBJECT

    public:
        explicit WorkspaceWindow(QWidget *parent);

        void InitDeckWindow();
        void InitDeckWindowLayout();

    protected:
        Bfdj::Workspace thisWorkspace;

    private:

    };
}
#endif //BINARYFLAVORDJ_WORKSPACEWINDOW_HPP
