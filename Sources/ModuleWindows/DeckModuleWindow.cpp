//
// Created by Juneseok Byun on 2019-05-26.
//

#include <Modules/DeckModule.h>
#include <ModuleWindows/DeckModuleWindow.h>
#include <QtWidgets>
#include <string>
#include <iostream>

namespace Bfdj {
    DeckModuleWindow::DeckModuleWindow(QWidget *parent, DeckModule *newDeck)
            : QMainWindow(parent), m_deckModule(newDeck) {
        if (m_deckModule == nullptr) {
            std::cout << "Invalid deck was created." << std::endl;
        }
        else {
            // Initialize
            InitDeckWindow();

            // Initialize layout.
            InitDeckWindowLayout();
        }
    }

    void DeckModuleWindow::InitDeckWindow() {
        setWindowTitle(QString::fromStdString(m_deckModule->GetName()));
        resize(600, 800);
    }

    void DeckModuleWindow::InitDeckWindowLayout() {
        // Set grid layout.
        QWidget * widget = new QWidget(this);
        auto *gridLayout = new QGridLayout(widget);
        setCentralWidget(widget);
        widget->setLayout(gridLayout);

        // set head box.
        auto *headbox = new QGroupBox("Information:", widget);
        gridLayout->addWidget(headbox, 0, 0);

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
        m_deckModule->Play();
    }

    void DeckModuleWindow::Cue()
    {
        m_deckModule->Cue();
    }
}