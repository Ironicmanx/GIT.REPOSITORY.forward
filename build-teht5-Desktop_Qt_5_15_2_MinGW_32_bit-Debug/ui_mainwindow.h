/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *N0;
    QPushButton *N8;
    QPushButton *Enter;
    QLabel *label;
    QLineEdit *Result;
    QPushButton *clear;
    QPushButton *N5;
    QPushButton *sub;
    QPushButton *N4;
    QLineEdit *Num1;
    QLabel *label_3;
    QLineEdit *Num2;
    QPushButton *N6;
    QLabel *label_2;
    QPushButton *N3;
    QPushButton *div;
    QPushButton *add;
    QPushButton *N7;
    QPushButton *N2;
    QPushButton *mul;
    QPushButton *N9;
    QPushButton *N1;
    QPushButton *Reset;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        N0 = new QPushButton(centralwidget);
        N0->setObjectName(QString::fromUtf8("N0"));
        N0->setGeometry(QRect(270, 380, 75, 24));
        N8 = new QPushButton(centralwidget);
        N8->setObjectName(QString::fromUtf8("N8"));
        N8->setGeometry(QRect(360, 350, 75, 24));
        Enter = new QPushButton(centralwidget);
        Enter->setObjectName(QString::fromUtf8("Enter"));
        Enter->setGeometry(QRect(450, 380, 75, 24));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(290, 230, 61, 21));
        Result = new QLineEdit(centralwidget);
        Result->setObjectName(QString::fromUtf8("Result"));
        Result->setGeometry(QRect(500, 260, 113, 22));
        clear = new QPushButton(centralwidget);
        clear->setObjectName(QString::fromUtf8("clear"));
        clear->setGeometry(QRect(360, 380, 75, 24));
        N5 = new QPushButton(centralwidget);
        N5->setObjectName(QString::fromUtf8("N5"));
        N5->setGeometry(QRect(360, 320, 75, 24));
        sub = new QPushButton(centralwidget);
        sub->setObjectName(QString::fromUtf8("sub"));
        sub->setGeometry(QRect(540, 320, 75, 24));
        N4 = new QPushButton(centralwidget);
        N4->setObjectName(QString::fromUtf8("N4"));
        N4->setGeometry(QRect(270, 320, 75, 24));
        Num1 = new QLineEdit(centralwidget);
        Num1->setObjectName(QString::fromUtf8("Num1"));
        Num1->setGeometry(QRect(260, 260, 113, 22));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(530, 230, 81, 21));
        Num2 = new QLineEdit(centralwidget);
        Num2->setObjectName(QString::fromUtf8("Num2"));
        Num2->setGeometry(QRect(380, 260, 113, 22));
        N6 = new QPushButton(centralwidget);
        N6->setObjectName(QString::fromUtf8("N6"));
        N6->setGeometry(QRect(450, 320, 75, 24));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(410, 230, 71, 21));
        N3 = new QPushButton(centralwidget);
        N3->setObjectName(QString::fromUtf8("N3"));
        N3->setGeometry(QRect(450, 290, 75, 24));
        div = new QPushButton(centralwidget);
        div->setObjectName(QString::fromUtf8("div"));
        div->setGeometry(QRect(540, 380, 75, 24));
        add = new QPushButton(centralwidget);
        add->setObjectName(QString::fromUtf8("add"));
        add->setGeometry(QRect(540, 290, 75, 24));
        N7 = new QPushButton(centralwidget);
        N7->setObjectName(QString::fromUtf8("N7"));
        N7->setGeometry(QRect(270, 350, 75, 24));
        N2 = new QPushButton(centralwidget);
        N2->setObjectName(QString::fromUtf8("N2"));
        N2->setGeometry(QRect(360, 290, 75, 24));
        mul = new QPushButton(centralwidget);
        mul->setObjectName(QString::fromUtf8("mul"));
        mul->setGeometry(QRect(540, 350, 75, 24));
        N9 = new QPushButton(centralwidget);
        N9->setObjectName(QString::fromUtf8("N9"));
        N9->setGeometry(QRect(450, 350, 75, 24));
        N1 = new QPushButton(centralwidget);
        N1->setObjectName(QString::fromUtf8("N1"));
        N1->setGeometry(QRect(270, 290, 75, 24));
        Reset = new QPushButton(centralwidget);
        Reset->setObjectName(QString::fromUtf8("Reset"));
        Reset->setGeometry(QRect(620, 380, 75, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        N0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        N8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        Enter->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Number 1", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        N5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        N4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
        N6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Number 2", nullptr));
        N3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        N7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        N2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        N9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        N1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Reset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
