//
// Created by Juneseok Byun on 2019-06-02.
//

#ifndef BINARYFLAVORDJ_HUBWINDOW_HPP
#define BINARYFLAVORDJ_HUBWINDOW_HPP

#include <string>
#include <QtWidgets>
#include <Modules/Hub.hpp>

namespace BfdjGUI
{
    class HubWindow : public QMainWindow
    {
        Q_OBJECT
    public:
        explicit HubWindow(QWidget* parent, Bfdj::Hub* newHub);
        void InitDeckWindow();
        void InitDeckWindowLayout();
    protected:
        Bfdj::Hub* parentHub;
    private:
    };
}


#endif //BINARYFLAVORDJ_HUBWINDOW_H
