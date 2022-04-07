#include "mainwindow.h"
#include <QApplication>
#include "window.h"

int main(int argc, char *argv[])
{
    QApplication appl(argc, argv); //создание объекта приложения
    Window win; //создание объекта упраления окном
    win.show(); //визуадизация окна
    return appl.exec(); // запуск цикла обработки приложения
}
