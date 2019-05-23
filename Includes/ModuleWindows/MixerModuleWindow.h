//
// Created by Juneseok Byun on 2019-05-12.
//

#ifndef BINARY_FLAVOR_DJ_MIXERWINDOW_H
#define BINARY_FLAVOR_DJ_MIXERWINDOW_H

#include <ModuleWindows/ModuleWindow.h>

namespace Binaryflavordj
{
class MixerModuleWindow : public ModuleWindow
{
public:
    MixerModuleWindow() = default;
    ~MixerModuleWindow() override = default;

    void Start() override;

    void Input() override;

    void Update() override;

    void Finish() override;

private:
};
}

#endif //BINARY_FLAVOR_DJ_MIXERWINDOW_H
