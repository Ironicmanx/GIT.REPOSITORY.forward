#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    connect(ui->EURO2CRONE, SIGNAL( clicked))
        this, SLOT(handleEUR2Crone);


    connect(ui->CRONE2EUR, SIGNAL( clicked))
        this, SLOT(handleCrone2EUR);
}

MainWindow::~MainWindow()
{
        delete ui;
    ui = nullptr;



void MainWindow::handleCrone2EUR()
{
    qDebug()<<"Crone2eur funktion";
}

void MainWindow::handleEUR2Crone()
{
 qDebug()<<"EUR 2 Crone funktion";
};

