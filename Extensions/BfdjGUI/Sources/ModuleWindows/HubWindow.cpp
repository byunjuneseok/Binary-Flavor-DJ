//
// Created by Juneseok Byun on 2019-06-02.
//
#include <ModuleWindows/HubWindow.hpp>
#include <QtWidgets>
#include <string>
#include <iostream>

namespace Bfdj
{
    HubWindow::HubWindow(QWidget *parent)
    : QMainWindow(parent)
    {
        // Initialize
        InitDeckWindow();

        // Initialize layout.
        InitDeckWindowLayout();


    }

    void HubWindow::InitDeckWindow()
    {
        setWindowTitle(QString::fromStdString("Hub"));
        resize(600, 400);
    }

    void HubWindow::InitDeckWindowLayout()
    {
        QWidget* widget = new QWidget(this);
        auto *gridLayout = new QGridLayout(widget);
        setCentralWidget(widget);
        widget->setLayout(gridLayout);

        auto *stateText = new QLabel("State", nullptr);
        gridLayout->addWidget(stateText, 0, 0);

        auto *playButton = new QPushButton(QStringLiteral("Check sync."));
        gridLayout->addWidget(playButton, 3, 0);

    }
}