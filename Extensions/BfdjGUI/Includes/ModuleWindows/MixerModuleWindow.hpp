//
// Created by Juneseok Byun on 2019-05-26.
//

#ifndef BINARYFLAVORDJ_MIXERMODULEWINDOW_HPP
#define BINARYFLAVORDJ_MIXERMODULEWINDOW_HPP

#include <string>
#include <QtWidgets>
#include <Modules/MixerModule.hpp>

namespace BfdjGUI
{
    class MixerModuleWindow : public QMainWindow
    {
        Q_OBJECT
    public:
        explicit MixerModuleWindow(QWidget* parent, Bfdj::MixerModule* newMixerModule);
        void InitMixerWindow();
    private:
        Bfdj::MixerModule* parentMixerModule;
    };
}


#endif
