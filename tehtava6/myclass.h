#ifndef MYCLASS_H
#define MYCLASS_H
#include <QObject>
#include "mainwindow.h"

class myClass : public MainWindow
{
    Q_OBJECT

public:
    myClass();
    ~myClass();

public slots:
    void resetAfterResult();
    void timerTimeout();

    // Add a virtual function
    virtual void dummyVirtualFunction() {}

private:
    QTimer* timer;
};

#endif // MYCLASS_H
