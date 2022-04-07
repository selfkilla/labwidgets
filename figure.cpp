#ifndef FIGURE_H
#define FIGURE_H
#include <QtGui>

class Figure //класс родитель Фигура
{
protected:
    int x,y,halflen,dx,dy,r;
    virtual void draw(QPainter *Painter)=0; //виртуальная функция для рисования фигур
public:
    Figure(int X,int Y,int Halflen):
        x(X),y(Y),halflen(Halflen){} //конструктор
    void move(float Alpha,QPainter *Painter);
};

class MyLine:public Figure //класс "линия"
{
protected:
    void draw(QPainter *Painter);
public:
    MyLine(int x,int y,int halflen):Figure(x,y,halflen){}
};
class MyRect:public Figure //класс "прямоугольника"
{
protected:
    void draw(QPainter *Painter);
public:
    MyRect(int x,int y,int halflen):Figure(x,y,halflen){}
};

#endif // FIGURE_H
