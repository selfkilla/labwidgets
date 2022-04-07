#ifndef WIN_H
#define WIN_H

#include <QWidget>
#include <QtGui>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>

class Counter:public QLineEdit //класс счетчик
{
    Q_OBJECT
public:
    Counter(const QString & contents, QWidget *parent=0):
        QLineEdit(contents,parent){} //конструктор
signals:
    void tick_signal(); //сигнал
public slots:
    void add_one() //слот добавления 1
    {
        QString str=text(); //получаем строку
        int r=str.toInt(); //преобразовываем в int
        if (r!=0 && r%5 ==0) emit tick_signal(); //вызываем сигнал
        r++; //увеличиваем на 1
        str.setNum(r); //обновляем строку
        setText(str); //устанавливаем текст
    }
};

class Win: public QWidget
{
    Q_OBJECT
protected:
    QLabel *label1,*label2; //метки
    Counter *edit1,*edit2; //сетчики
    QPushButton *calcbutton; //кнопка "увеличения"
    QPushButton *exitbutton; //кнопка "выхода"
public:
    Win(QWidget *parent = 0); //конструктор
};

#endif // WIN_H
