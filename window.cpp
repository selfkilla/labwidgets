#include "window.h"
#include <QVBoxLayout>

Window::Window()
{
    this->setWindowTitle("Event Handler"); //устанавливаем заголовок
    area = new Area( this ); //создаем холст
    btn = new QPushButton("Exit",this ); //создаем кнопку
    QVBoxLayout *layout = new QVBoxLayout(this); //задаем вертикалььную разметку
    layout->addWidget(area); //добавляем в разметку золст
    layout->addWidget(btn); // так же и кнопку
    connect(btn, SIGNAL(clicked(bool)),this,SLOT(close())); //создаем сигнал при нажатии на кнопку закрытие окна
};
