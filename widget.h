// TP2/EX1/widget.h
// exercice 1 : compteur de clics
// BODIN Maxime C2
// 22/03/25


#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QGridLayout>
#include <iostream>
#include <QMessageBox>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);

private:
    QPushButton * itsButton;
    QPushButton * itsResetButton;
    unsigned int itsCount = 0;
    QMessageBox * itsAnswer;

};
#endif // WIDGET_H
