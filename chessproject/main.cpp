#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ChessClock chessClock; // Create an instance of ChessClock
    chessClock.show(); // You should have a show method to show the GUI
    return a.exec();
}
