//
// Created by Juneseok Byun on 2019-06-02.
//

#ifndef BINARYFLAVORDJ_HUBWINDOW_H
#define BINARYFLAVORDJ_HUBWINDOW_H

#include <string>
#include <QtWidgets>


namespace Bfdj
{
    class HubWindow : public QMainWindow
    {
        Q_OBJECT
    public:
        explicit HubWindow(QWidget *parent);

        void InitDeckWindow();
        void InitDeckWindowLayout();

    private:
    };
}


#endif //BINARYFLAVORDJ_HUBWINDOW_H
