//
// Created by Juneseok Byun on 2019-05-26.
//

#include <Modules/MixerModule.hpp>
#include <ModuleWindows/MixerModuleWindow.hpp>
#include <QtWidgets>
#include <string>

namespace BfdjGUI {
    MixerModuleWindow::MixerModuleWindow(QWidget* parent, Bfdj::MixerModule* newMixerModule)
            : QMainWindow(parent)
    {
        parentMixerModule = newMixerModule;
        InitMixerWindow();
    }

    void MixerModuleWindow::InitMixerWindow()
    {
        setWindowTitle(QString::fromStdString("Mixer"));
        resize(600, 800);
    }
}