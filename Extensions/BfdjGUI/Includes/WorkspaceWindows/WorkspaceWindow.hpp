//
// Created by Juneseok Byun on 2019-08-12.
//

#ifndef BINARYFLAVORDJ_WORKSPACEWINDOW_HPP
#define BINARYFLAVORDJ_WORKSPACEWINDOW_HPP

#include <string>
#include <QtWidgets>
#include <Workspaces/Workspace.hpp>
#include <WorkspaceWindows/WorkspaceWindowState.hpp>
#include <Includes/ModuleWindows/HubWindow.hpp>
#include <Includes/ModuleWindows/MixerModuleWindow.hpp>
#include <Includes/ModuleWindows/DeckModuleWindow.hpp>

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
        Bfdj::Workspace parentWorkspace;
    private slots:
        void HandleButtonCreateHub();
        void HandleButtonCreateMixerModule();
        void HandleButtonCreateDeckModule();
    private:
        void UpdateState();
        BfdjGUI::HubWindow* CreateHubWindow();
        BfdjGUI::MixerModuleWindow* CreateMixerModuleWindow();
        BfdjGUI::DeckModuleWindow* CreateDeckModuleWindow();
        QLabel *stateText = new QLabel("Binary Flavor", nullptr);
        WorkspaceWindowState *thisStateWindow = new WorkspaceWindowState(this);
        QPushButton *buttonCreateHub = new QPushButton(QStringLiteral("Create Hub"));
        QPushButton *buttonCreateMixerModule = new QPushButton(QStringLiteral("Create Mixer Module."));
        QPushButton *buttonCreateDeckModule = new QPushButton(QStringLiteral("Create Deck Module."));
    };
}
#endif //BINARYFLAVORDJ_WORKSPACEWINDOW_HPP
