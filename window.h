#ifndef WINDOW_H
#define WINDOW_H

#include <QtGui>
#include <QPushButton>
#include "area.h"

class Window : public QWidget
{
protected:
    Area * area; //область отображения рисунка
    QPushButton * btn; //кнопка "выход"
public:
    Window(); //конструктор
};

#endif // WINDOW_H
