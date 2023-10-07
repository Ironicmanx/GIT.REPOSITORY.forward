#include "myclass.h"
#include <QDebug>
#include <QTimer>

myClass::myClass()
{
    // Initialize timer for 15 seconds
    timer = new QTimer(this);
    timer->setSingleShot(true);

    // Connect the timer's timeout signal to the slot
    connect(timer, &QTimer::timeout, this, &myClass::timerTimeout);

    timer->start(15000); // Start the timer
}

myClass::~myClass()
{
    // Cleanup
    if (timer->isActive()) {
        timer->stop();
    }
    delete timer;
}

void myClass::resetAfterResult()
{
    // Handle any other data resets if needed
    qDebug() << "Resetting data...";
}

void myClass::timerTimeout()
{
    // Timer has expired, reset UI
    handleResetUI(); // Call the slot to reset UI elements
    qDebug() << "Autocleared after 15 seconds.";
}
