//
// Created by Juneseok Byun on 2019-05-12.
//

#include <ModuleWindows/MixerModuleWindow.h>
#include <Modules/MixerModule.h>

namespace Binaryflavordj
{
void MixerModuleWindow::Start()
{
    m_flags |= ImGuiWindowFlags_NoResize;
    m_flags |= ImGuiWindowFlags_NoMove;
    m_flags |= ImGuiWindowFlags_NoCollapse;
    m_flags |= ImGuiWindowFlags_NoTitleBar;

    m_popupFlags |= ImGuiWindowFlags_AlwaysAutoResize;
    m_popupFlags |= ImGuiWindowFlags_NoTitleBar;


    ImGui::Text("Hello, world %d", 123);
}

void MixerModuleWindow::Input()
{
    // to-do
}

void MixerModuleWindow::Update()
{
    // to-do
}

void MixerModuleWindow::Finish()
{
    // to-do
}
}