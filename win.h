#ifndef WIN_H
#define WIN_H

#include <QWidget>
#include <QLabel>
#include <QFrame>
#include <QLineEdit>
#include <QPushButton>
#include <QValidator>

class Win : public QWidget
{
    Q_OBJECT // макрос Qt, обеспечивающий корректное создание сигналов и слотов
private:
    QFrame *frame; // рамка
    QLabel *inputLabel; // метка ввода
    QLineEdit *inputEdit; // редактор ввода
    QLabel *outputLabel; // метка вывода
    QLineEdit *outputEdit; // редактор вывода
    QPushButton *nextButton; // кнопка "Следующее"
    QPushButton *exitButton; // кнопка "Выход"
public:
    explicit Win(QWidget *parent = nullptr);

public slots:
    void begin(); //метод начальной настройки интерфейса
    void calc(); //метод реализации интерфйса
};

class StrValidator:public QValidator {
public:
    StrValidator(QObject *parent):QValidator(parent) {}
    virtual State validate(QString &str, int &pos) const {
        return Acceptable; //метод всегда принимает вводимую строку
    }
};

#endif // WIN_H
