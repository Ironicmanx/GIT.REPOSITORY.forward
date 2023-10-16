#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "ui_mainwindow.h"
#include <QWidget>
#include <QTimer>
#include <QPushButton>
#include <QLineEdit>


class MyWidget : public QWidget
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = nullptr);

private slots:

    void startTimer();

    void stopTimer();

    void updateTime();

private:


    QPushButton *startButton;
    QPushButton *stopButton;
    QLineEdit *lineEdit;
    QTimer *timer;
    int secondsPassed;


};

#endif // MAINWINDOW_H
