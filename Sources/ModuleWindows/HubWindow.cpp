//
// Created by Juneseok Byun on 2019-06-02.
//

#include <ModuleWindows/HubWindow.h>
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
        resize(600, 800);
    }

    void HubWindow::InitDeckWindowLayout()
    {
        QWidget* widget = new QWidget(this);
        auto *gridLayout = new QGridLayout(widget);
        setCentralWidget(widget);
        widget->setLayout(gridLayout);

        auto *headBox = new QGroupBox("Information:", widget);
        gridLayout->addWidget(headBox, 0, 0);

    }

}