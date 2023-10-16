#include <QApplication>
#include "mainwindow.h"
#include "ui_mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    MyWidget myWidget;
    myWidget.show();


//  MainWindow w;
 //w.show();

    return a.exec();
}
