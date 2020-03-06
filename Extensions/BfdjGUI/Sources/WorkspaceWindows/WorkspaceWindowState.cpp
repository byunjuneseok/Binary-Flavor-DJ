#include <QtWidgets>
#include <WorkspaceWindows/WorkspaceWindowState.hpp>

namespace BfdjGUI
{
    WorkspaceWindowState::WorkspaceWindowState(Bfdj::Workspace* newWorkspace, QWidget* parent)
    : QWidget(parent), parentWorkspace(newWorkspace)
    {
        numberHubs = newWorkspace->GetHubsOnWorkspace().size();
        numberMixers = newWorkspace->GetMixerModulesOnWorkspace().size();
        numberDecks = newWorkspace->GetDeckModulesOnWorkspace().size();
    }

    void WorkspaceWindowState::InitWidget() {

    }
}