//
// Created by Juneseok Byun on 2019-05-14.
//

#ifndef BINARYFLAVORDJ_WINDOWMANAGER_H
#define BINARYFLAVORDJ_WINDOWMANAGER_H

#include <ModuleWindows/MixerModuleWindow.h>

#include <string>
#include <vector>

namespace Binaryflavordj
{
    class WindowManager
    {
    public:
        WindowManager(const WindowManager& other) = delete;
        ~WindowManager() = delete;


    private:
        WindowManager() = default;
    };
}

#endif //BINARYFLAVORDJ_WINDOWMANAGER_H
