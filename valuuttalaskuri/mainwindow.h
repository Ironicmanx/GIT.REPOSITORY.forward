#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void handleCrone2EUR();
     void handleEUR2Crone();

private:
    Ui::MainWindow *ui;
    int myVariable;
    float kurssi;
};
#endif // MAINWINDOW_H
