#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QObject>
#include <QMainWindow>
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void numberClickedHandler();
    void handleCount();
    void handleReset();
    void handleAdd();
    void handleSubtract();
    void handleMultiply();
    void handleDivide();
    void handleResetUI(); // Slot to reset UI elements

private:
    Ui::MainWindow *ui;
    QString number1, number2;
    int state;
    float result;
    short operand;
    int num;
};

#endif // MAINWINDOW_H
