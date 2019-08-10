//
// Created by Juneseok Byun on 2019-05-26.
//

#include <Modules/DeckModule.hpp>
#include <ModuleWindows/DeckModuleWindow.hpp>
#include <QtWidgets>
#include <string>
#include <iostream>

namespace Bfdj {
    DeckModuleWindow::DeckModuleWindow(QWidget *parent)
        : QMainWindow(parent)
    {

        // Initialize
        InitDeckWindow();

        // Initialize layout.
        InitDeckWindowLayout();

    }

    void DeckModuleWindow::InitDeckWindow()
    {
        setWindowTitle(QString::fromStdString("DECK"));
        resize(600, 800);
    }

    void DeckModuleWindow::InitDeckWindowLayout()
    {
        // Set grid layout.
        QWidget* widget = new QWidget(this);
        auto *gridLayout = new QGridLayout(widget);
        setCentralWidget(widget);
        widget->setLayout(gridLayout);

        // set head box.
        auto *headBox = new QGroupBox("Information:", widget);
        gridLayout->addWidget(headBox, 0, 0);

        // need button box.
        
        // Play Button
        auto *playButton = new QPushButton(QStringLiteral("Play"));
        gridLayout->addWidget(playButton, 3, 0);
        connect(playButton, &QPushButton::clicked, this, &DeckModuleWindow::Play);

        // Cue Button
        auto *cueButton = new QPushButton(QStringLiteral("Cue"));
        gridLayout->addWidget(cueButton, 3, 1);
        connect(cueButton, &QPushButton::clicked, this, &DeckModuleWindow::Cue);
    }

    void DeckModuleWindow::Play()
    {
        parentDeckModule->Play();
    }

    void DeckModuleWindow::Cue()
    {
        parentDeckModule->Cue();
    }
}