//
// Created by Juneseok Byun on 2019-08-12.
//

#include <QtWidgets>
#include <WorkspaceWindows/WorkspaceWindow.hpp>
#include <WorkspaceWindows/WorkspaceWindowState.hpp>
#include <ModuleWindows/HubWindow.hpp>
#include <ModuleWindows/MixerModuleWindow.hpp>
#include <ModuleWindows/DeckModuleWindow.hpp>

namespace BfdjGUI
{
    WorkspaceWindow::WorkspaceWindow(QWidget* parent, Bfdj::Workspace* newWorkspace)
    : QMainWindow(parent), parentWorkspace(newWorkspace), currentWorkspaceWindowState(new WorkspaceWindowState(newWorkspace))
    {
        InitDeckWindow();
        InitDeckWindowLayout();
    }

    void WorkspaceWindow::InitDeckWindow()
    {
        setWindowTitle(QString::fromStdString("Binary Flavor DJ"));
        resize(800, 600);
    }

    void WorkspaceWindow::InitDeckWindowLayout()
    {
        auto *widget = new QWidget(this);
        auto *gridLayout = new QGridLayout(widget);
        setCentralWidget(widget);
        widget->setLayout(gridLayout);
        gridLayout->addWidget(currentWorkspaceWindowState, 1, 0);
        gridLayout->addWidget(stateText, 0, 0);
        gridLayout->addWidget(buttonCreateHub, 3, 0);
        gridLayout->addWidget(buttonCreateMixerModule, 3, 1);
        gridLayout->addWidget(buttonCreateDeckModule, 3, 2);
        connect(buttonCreateHub, SIGNAL(released()), this, SLOT(HandleButtonCreateHub()));
        connect(buttonCreateMixerModule, SIGNAL(released()), this, SLOT(HandleButtonCreateMixerModule()));
        connect(buttonCreateDeckModule, SIGNAL(released()), this, SLOT(HandleButtonCreateDeckModule()));
    }

    void WorkspaceWindow::UpdateState() {
        stateText->setText("a");
    }

    BfdjGUI::HubWindow* WorkspaceWindow::CreateHubWindow() {
        if (parentWorkspace->excessOfHubCapacity()) {
            return nullptr;
        }
        auto newHub = parentWorkspace->CreateHub();
        auto newHubWindow = new HubWindow(this, newHub);
        return newHubWindow;
    }

    BfdjGUI::MixerModuleWindow* WorkspaceWindow::CreateMixerModuleWindow() {
        if (parentWorkspace->excessOfMixerModuleCapacity()) {
            return nullptr;
        }
        auto newMixerModule = parentWorkspace->CreateMixer();
        auto newMixerModuleWindow = new MixerModuleWindow(this, newMixerModule);
        return newMixerModuleWindow;
    }

    BfdjGUI::DeckModuleWindow* WorkspaceWindow::CreateDeckModuleWindow() {
        if (parentWorkspace->excessOfDeckModuleCapacity()) {
            return nullptr;
        }
        auto newDeckModule = parentWorkspace->CreateDeck();
        auto newDeckModuleWindow = new DeckModuleWindow(this, newDeckModule);
        return newDeckModuleWindow;
    }


    void WorkspaceWindow::HandleButtonCreateHub() {
        auto newHubWindow = CreateHubWindow();
        if (newHubWindow) {
            UpdateState();
            newHubWindow->show();
        }
    }

    void WorkspaceWindow::HandleButtonCreateMixerModule() {
        auto newMixerModuleWindow = CreateMixerModuleWindow();
        if (newMixerModuleWindow) {
            UpdateState();
            newMixerModuleWindow->show();
        }
    }

    void WorkspaceWindow::HandleButtonCreateDeckModule() {
        auto newDeckModuleWindow = CreateDeckModuleWindow();
        if (newDeckModuleWindow) {
            UpdateState();
            newDeckModuleWindow->show();
        }
    }
}