//
// Created by Juneseok Byun on 2019-08-08.
//


#include <WorkspaceWindows/WorkspaceWindow.hpp>
#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    BfdjGUI::WorkspaceWindow w(nullptr);
    w.show();

    return app.exec();
}