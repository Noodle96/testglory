#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    //primer commenter desde main.cc
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
