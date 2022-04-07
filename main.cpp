#include "mainwindow.h"
#include <QApplication>
#include "win.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv); //создание объекта приложения
    Win win(0); // создание объекта управления окном
    win.show(); // визуплизация окна
    return app.exec(); // запуск цикла обработки приложения
}
