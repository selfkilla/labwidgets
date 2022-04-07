#include "mainwindow.h"
#include <QtGui>
#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include "win.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv); //создаем приложение
    Win win(0); //создаем объект управления окном
    win.show(); //визуализируем окно
    return app.exec(); //запуск цикла обработки прилжения
}
