#include <QtWidgets>
#include <WorkspaceWindows/WorkspaceWindowState.hpp>

namespace BfdjGUI
{
    WorkspaceWindowState::WorkspaceWindowState(QWidget *parent)
    : QWidget(parent)
    {
        numberHub = 0;
        numberMixer = 0;
        numberDecks = 0;
    }

    void WorkspaceWindowState::InitWidget() {

    }
}