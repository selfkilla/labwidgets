#ifndef AREA_H
#define AREA_H

#include "figure.h"
#include <QWidget>

class Area : public QWidget
{
    int myTimer; // идентификатор таймера
    float alpha; // угол поворота
public:
    Area(QWidget *parent = 0); //конструткор
    ~Area(); //деструктор
    MyLine *myline; // класс линии
    MyRect *myrect; // класс прямоугольника
protected:
    void paintEvent(QPaintEvent *event); //событие перерисовки
    void timerEvent(QTimerEvent *event); //событие таймера
    void showEvent(QShowEvent *event); // событие начала
    void hideEvent(QHideEvent *event); // событие конца
};

#endif // AREA_H
