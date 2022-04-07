#include "win.h"
#include <QHBoxLayout>
#include <QVBoxLayout>

Win::Win(QWidget *parent):QWidget(parent)
{
    this->setWindowTitle("Counter"); //устанавливаем заголовок
    label1 = new QLabel("Add 1",this); //создаем метки
    label2 = new QLabel("Add 5",this);
    edit1 = new Counter("0",this); //создаем поля редактирования
    edit2 = new Counter("0",this);
    calcbutton=new QPushButton("+1",this); //создаем кнопки
    exitbutton=new QPushButton("Exit",this);
    QHBoxLayout *layout1 = new QHBoxLayout(); //создаем разметку
    layout1->addWidget(label1);//метки
    layout1->addWidget(label2);
    QHBoxLayout *layout2 = new QHBoxLayout();
    layout2->addWidget(edit1);
    layout2->addWidget(edit2);
    QHBoxLayout *layout3 = new QHBoxLayout();
    layout3->addWidget(calcbutton);
    layout3->addWidget(exitbutton);
    QVBoxLayout *layout4 = new QVBoxLayout(this);
    layout4->addLayout(layout1);
    layout4->addLayout(layout2);
    layout4->addLayout(layout3);
    connect(calcbutton,SIGNAL(clicked(bool)),
        edit1,SLOT(add_one()));
    connect(edit1,SIGNAL(tick_signal()),
        edit2,SLOT(add_one()));
    connect(exitbutton,SIGNAL(clicked(bool)),
        this,SLOT(close()));
}
