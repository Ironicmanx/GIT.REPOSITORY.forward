#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void handleNum0();
    void handleNum1();
    void handleNum2();
    void handleNum3();
    void handleNum4();
    void handleNum5();
    void handleNum6();
    void handleNum7();
    void handleNum8();
    void handleNum9();

    void handleAdd();
    void handleMul();
    void handleSub();
    void handleDiv();

    void handleEnter();
    void handleClear();
    void handleCount();
    void handleReset();

private slots:
    Ui::MainWindow *ui; // Use Ui::MainWindow consistently
    QString number1, number2;
    int state;
    float result;
    short operand;

    // Member function declarations
    void handleN0();
    void handleN1();
    void handleN2();
    void handleN3();
    void handleN4();
    void handleN5();
    void handleN6();
    void handleN7();
    void handleN8();
    void handleN9();

    void handleAddButton();
    void handleMulButton();
    void handleSubButton();
    void handleDivButton();
    void handleEnterButton();
    void handleClearButton();
    void handleCountButton();
    void handleResetButton();

    void updateLineEdit();
    int num;
};

#endif // MAINWINDOW_H
