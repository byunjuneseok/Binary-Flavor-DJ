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
    ImGuiWindowFlags m_flags = 0;
    ImGuiWindowFlags m_popupFlags = 0;

    bool m_isOpened = true;

    float m_positionX = 0.0f;
    float m_positionY = 0.0f;

    float m_width = 0.0f;
    float m_height = 0.0f;
};
}

#endif //BINARY_FLAVOR_DJ_MIXERWINDOW_H
