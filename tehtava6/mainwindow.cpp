#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    state = 0;

    // Connect signals to slots
    connect(ui->N0, SIGNAL(clicked()), this, SLOT(numberClickedHandler()));
    connect(ui->N1, SIGNAL(clicked()), this, SLOT(numberClickedHandler()));
    connect(ui->N2, SIGNAL(clicked()), this, SLOT(numberClickedHandler()));
    connect(ui->N3, SIGNAL(clicked()), this, SLOT(numberClickedHandler()));
    connect(ui->N4, SIGNAL(clicked()), this, SLOT(numberClickedHandler()));
    connect(ui->N5, SIGNAL(clicked()), this, SLOT(numberClickedHandler()));
    connect(ui->N6, SIGNAL(clicked()), this, SLOT(numberClickedHandler()));
    connect(ui->N7, SIGNAL(clicked()), this, SLOT(numberClickedHandler()));
    connect(ui->N8, SIGNAL(clicked()), this, SLOT(numberClickedHandler()));
    connect(ui->N9, SIGNAL(clicked()), this, SLOT(numberClickedHandler()));
    connect(ui->Count, SIGNAL(clicked(bool)), this, SLOT(handleCount()));
    connect(ui->Reset, SIGNAL(clicked(bool)), this, SLOT(handleReset()));

    num = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickedHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString digit = button->text();

    // Determine which QLineEdit has focus and set the digit accordingly
    if (ui->Num1->hasFocus()) {
        QString currentText = ui->Num1->text();
        ui->Num1->setText(currentText + digit);
    } else if (ui->Num2->hasFocus()) {
        QString currentText = ui->Num2->text();
        ui->Num2->setText(currentText + digit);
    }
}

void MainWindow::handleCount()
{
    num++;
    ui->Num1->setText(QString::number(num));
}

void MainWindow::handleReset()
{
    num = 0;
    ui->Num1->clear();
}

void MainWindow::handleAdd()
{
    QString strNum1 = ui->Num1->text();
    QString strNum2 = ui->Num2->text();

    bool conversionSuccess;
    float num1 = strNum1.toFloat(&conversionSuccess);
    float num2 = strNum2.toFloat(&conversionSuccess);

    if (!conversionSuccess) {
        qDebug() << "Invalid input for addition";
        return;
    }

    float result = num1 + num2;

    ui->Result->setText(QString::number(result));
}

void MainWindow::handleSubtract()
{
    QString strNum1 = ui->Num1->text();
    QString strNum2 = ui->Num2->text();

    bool conversionSuccess;
    float num1 = strNum1.toFloat(&conversionSuccess);
    float num2 = strNum2.toFloat(&conversionSuccess);

    if (!conversionSuccess) {
        qDebug() << "Invalid input for subtraction";
        return;
    }

    float result = num1 - num2;

    ui->Result->setText(QString::number(result));
}

void MainWindow::handleMultiply()
{
    QString strNum1 = ui->Num1->text();
    QString strNum2 = ui->Num2->text();

    bool conversionSuccess;
    float num1 = strNum1.toFloat(&conversionSuccess);
    float num2 = strNum2.toFloat(&conversionSuccess);

    if (!conversionSuccess) {
        qDebug() << "Invalid input for multiplication";
        return;
    }

    float result = num1 * num2;

    ui->Result->setText(QString::number(result));
}

void MainWindow::handleDivide()
{
    QString strNum1 = ui->Num1->text();
    QString strNum2 = ui->Num2->text();

    bool conversionSuccess;
    float num1 = strNum1.toFloat(&conversionSuccess);
    float num2 = strNum2.toFloat(&conversionSuccess);

    if (!conversionSuccess) {
        qDebug() << "Invalid input for division";
        return;
    }

    if (num2 == 0) {
        qDebug() << "Division by zero is not allowed";
        return;
    }

    float result = num1 / num2;

    ui->Result->setText(QString::number(result));
}

void MainWindow::handleResetUI()
{
    ui->Num1->clear();
    ui->Num2->clear();
    ui->Result->clear();
    // Clear any other UI elements as needed
}
