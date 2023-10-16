#include <QtWidgets>
#include "mainwindow.h"
#include "ui_mainwindow.h"



MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent), secondsPassed(0)

{

    startButton = new QPushButton("Start");
    stopButton = new QPushButton("Stop");
    lineEdit = new QLineEdit;


    timer = new QTimer(this);
    timer->setInterval(1000);



    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(startButton);
    layout->addWidget(stopButton);
    layout->addWidget(lineEdit);
    setLayout(layout);


    connect(startButton, &QPushButton::clicked, this, &MyWidget::startTimer);
    connect(stopButton, &QPushButton::clicked, this, &MyWidget::stopTimer);
    connect(timer, &QTimer::timeout, this, &MyWidget::updateTime);



    lineEdit->setText("press the 'Start' to begin the timer.");
}

void MyWidget::startTimer()
{

    timer->start();
    secondsPassed = 0;
    lineEdit->setText("The timer has started.");
}

void MyWidget::stopTimer()
{

    timer->stop();
    lineEdit->setText("Timer has been stopped.");
}

void MyWidget::updateTime()
{

    secondsPassed++;
    lineEdit->setText("Time that has passed: " + QString::number(secondsPassed) + " seconds");

}
