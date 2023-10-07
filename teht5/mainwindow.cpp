#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    state = 0;

    connect(ui->N0, SIGNAL(clicked()), this, SLOT(handleN0()));
    connect(ui->N1, SIGNAL(clicked()), this, SLOT(handleN1()));
    connect(ui->N2, SIGNAL(clicked()), this, SLOT(handleN2()));
    connect(ui->N3, SIGNAL(clicked()), this, SLOT(handleN3()));
    connect(ui->N4, SIGNAL(clicked()), this, SLOT(handleN4()));
    connect(ui->N5, SIGNAL(clicked()), this, SLOT(handleN5()));
    connect(ui->N6, SIGNAL(clicked()), this, SLOT(handleN6()));
    connect(ui->N7, SIGNAL(clicked()), this, SLOT(handleN7()));
    connect(ui->N8, SIGNAL(clicked()), this, SLOT(handleN8()));
    connect(ui->N9, SIGNAL(clicked()), this, SLOT(handleN9()));

    num = 0; // Initialize 'num' in the constructor

    connect(ui->Enter, SIGNAL(clicked(bool)), this, SLOT(handleEnterButton()));
    connect(ui->Reset, SIGNAL(clicked(bool)), this, SLOT(handleResetButton()));
    connect(ui->add, SIGNAL(clicked(bool)), this, SLOT(handleAddButton()));
    connect(ui->sub, SIGNAL(clicked(bool)), this, SLOT(handleSubButton()));
    connect(ui->mul, SIGNAL(clicked(bool)), this, SLOT(handleMulButton()));
    connect(ui->div, SIGNAL(clicked(bool)), this, SLOT(handleDivButton()));
    connect(ui->clear, SIGNAL(clicked(bool)), this, SLOT(handleClearButton()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleN0()
{
    updateLineEdit("0");
}

void MainWindow::handleN1()
{
    updateLineEdit("1");
}

void MainWindow::handleN2()
{
    updateLineEdit("2");
}

void MainWindow::handleN3()
{
    updateLineEdit("3");
}

void MainWindow::handleN4()
{
    updateLineEdit("4");
}

void MainWindow::handleN5()
{
    updateLineEdit("5");
}

void MainWindow::handleN6()
{
    updateLineEdit("6");
}

void MainWindow::handleN7()
{
    updateLineEdit("7");
}

void MainWindow::handleN8()
{
    updateLineEdit("8");
}

void MainWindow::handleN9()
{
    updateLineEdit("9");
}

void MainWindow::handleAddButton()
{
    performOperation("+");
}

void MainWindow::handleMulButton()
{
    performOperation("*");
}

void MainWindow::handleSubButton()
{
    performOperation("-");
}

void MainWindow::handleDivButton()
{
    performOperation("/");
}

void MainWindow::handleEnterButton()
{
    QString expression = ui->lineEdit->text();
    // Implement arithmetic expression parsing and evaluation here
    // You can use Qt's expression evaluation or other libraries for this purpose
    // For simplicity, we'll just display the expression as it is for now
    ui->lineEdit->setText(expression);
}

void MainWindow::handleClearButton()
{
    ui->lineEdit->clear();
}

void MainWindow::updateLineEdit(const QString& digit)
{
    QString currentText = ui->lineEdit->text();
    currentText += digit;
    ui->lineEdit->setText(currentText);
}

void MainWindow::performOperation(const QString& operation)
{
    QString currentText = ui->lineEdit->text();
    currentText += " " + operation + " ";
    ui->lineEdit->setText(currentText);
}
