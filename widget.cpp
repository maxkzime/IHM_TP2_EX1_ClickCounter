// TP2/EX1/widget.cpp
// exercice 1 : compteur de clics
// BODIN Maxime C2
// 22/03/25

#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QGridLayout * gLayout = new QGridLayout(); /* Création du layout general */

    QPushButton * itsButton = new QPushButton("Increment");
    QPushButton * itsResetButton = new QPushButton("Reset counter (0)");

    connect(itsButton, &QPushButton::clicked, [this](){
        this->itsCount++;
        std::cout << itsCount << '\n';
        itsAnswer->information(this,QString("New state : "),QString::number(itsCount));
    });

    connect(itsResetButton, &QPushButton::clicked, [this](){
        this->itsCount = 0;
        std::cout << itsCount << '\n';
        itsAnswer->information(this,QString("Counter reset !"),QString::number(itsCount));
    });

    gLayout->addWidget(itsButton,1,1);
    gLayout->addWidget(itsResetButton,2,1);

    setWindowTitle("Click counter");
    setLayout(gLayout);

}


