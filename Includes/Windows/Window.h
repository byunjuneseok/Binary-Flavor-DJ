//
// Created by Juneseok Byun on 2019-05-12.
//

#ifndef BINARY_FLAVOR_DJ_WINDOW_H
#define BINARY_FLAVOR_DJ_WINDOW_H

#include <imgui/imgui.h>

#include <string>

namespace Binaryflavordj
{
class Window
{
public:
    Window() = default;
    virtual ~Window() = default;

    virtual void Start() = 0;

    virtual void Input() = 0;

    virtual void Update() = 0;

    virtual void Finish() = 0;

    void SetName(std::string name)
    {
        m_name = name;
    }

    std::string GetName() const
    {
        return m_name;
    }

protected:
    std::string m_name;
};
}


#endif //BINARY_FLAVOR_DJ_WINDOW_H
