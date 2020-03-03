//
// Created by Juneseok Byun on 2019-08-12.
//

#include <QtWidgets>
#include <WorkspaceWindows/WorkspaceWindow.hpp>

namespace BfdjGUI
{
    WorkspaceWindow::WorkspaceWindow(QWidget *parent)
    : QMainWindow(parent)
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

    void WorkspaceWindow::HandleButtonCreateHub() {
        thisWorkspace.CreateHub();
        UpdateState();
    }

    void WorkspaceWindow::HandleButtonCreateMixerModule() {
        thisWorkspace.CreateMixer();
        UpdateState();
    }

    void WorkspaceWindow::HandleButtonCreateDeckModule() {
        thisWorkspace.CreateDeck();
        UpdateState();
    }
}