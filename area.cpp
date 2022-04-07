#include "area.h"

Area::Area(QWidget *parent):QWidget(parent)
{
    setFixedSize(QSize(300,200)); //указываем границы
    myline=new MyLine(80,100,50); //создаем линию
    myrect=new MyRect(220,100,50); //создаем прямоугольник
    alpha=0; //угол
}
void Area::showEvent(QShowEvent *)
{
    myTimer=startTimer(50); // создать таймер
}
void Area::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setPen(Qt::red); //устанавливаем цвет
    myline->move(alpha,&painter); //поворачиваем линию
    myrect->move(alpha*(-0.5),&painter); //поворачиваем прямогуольник
}
void Area::timerEvent(QTimerEvent *event)
{
    if (event->timerId() == myTimer) //если таймер подходящий
    {
        alpha=alpha+0.2;
        update(); //обновить вид
    }
    else
        QWidget::timerEvent(event); //иначе передать для стандартной обработки

}
void Area::hideEvent(QHideEvent *)
{
    killTimer(myTimer); //уничтожить таймер
}
Area::~Area()
{
    delete myline;
    delete myrect;
}
