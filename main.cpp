// TP2/EX1/main.cpp
// exercice 1 : compteur de clics
// BODIN Maxime C2
// 22/03/25


#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
