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
        // Initialize
        InitDeckWindow();

        // Initialize layout.
        InitDeckWindowLayout();
    }

    void WorkspaceWindow::InitDeckWindow()
    {
        setWindowTitle(QString::fromStdString("Hub"));
        resize(600, 400);
    }

    void WorkspaceWindow::InitDeckWindowLayout()
    {
        QWidget* widget = new QWidget(this);
        auto *gridLayout = new QGridLayout(widget);
        setCentralWidget(widget);
        widget->setLayout(gridLayout);

        auto *stateText = new QLabel("State", nullptr);
        gridLayout->addWidget(stateText, 0, 0);

        auto *buttonCreateHub = new QPushButton(QStringLiteral("Create Hub"));
        auto *buttonCreateMixerModule = new QPushButton(QStringLiteral("Create Mixer Module."));
        auto *buttonCreateDeckModule = new QPushButton(QStringLiteral("Create Deck Module."));

        gridLayout->addWidget(buttonCreateHub, 3, 0);
        gridLayout->addWidget(buttonCreateMixerModule, 3, 1);
        gridLayout->addWidget(buttonCreateDeckModule, 3, 2);
    }
}