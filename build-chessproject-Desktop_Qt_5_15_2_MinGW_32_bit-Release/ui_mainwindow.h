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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChessClock
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_1;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_6;
    QLabel *label;
    QProgressBar *progressBarPlayer1;
    QProgressBar *progressBar_2;
    QPushButton *pushButton_5;
    QCheckBox *pushButton_7;
    QMenuBar *menubar;
    QMenu *ChessClockUI;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ChessClock)
    {
        if (ChessClock->objectName().isEmpty())
            ChessClock->setObjectName(QString::fromUtf8("ChessClock"));
        ChessClock->resize(800, 600);
        centralwidget = new QWidget(ChessClock);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(190, 280, 111, 31));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(190, 380, 111, 41));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(440, 380, 111, 41));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(440, 280, 111, 31));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(440, 140, 111, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(300, 210, 231, 20));
        progressBarPlayer1 = new QProgressBar(centralwidget);
        progressBarPlayer1->setObjectName(QString::fromUtf8("progressBarPlayer1"));
        progressBarPlayer1->setGeometry(QRect(190, 70, 118, 23));
        progressBarPlayer1->setValue(0);
        progressBar_2 = new QProgressBar(centralwidget);
        progressBar_2->setObjectName(QString::fromUtf8("progressBar_2"));
        progressBar_2->setGeometry(QRect(440, 70, 118, 23));
        progressBar_2->setValue(0);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(190, 140, 111, 31));
        pushButton_7 = new QCheckBox(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(630, 240, 76, 20));
        ChessClock->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ChessClock);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        ChessClockUI = new QMenu(menubar);
        ChessClockUI->setObjectName(QString::fromUtf8("ChessClockUI"));
        ChessClock->setMenuBar(menubar);
        statusbar = new QStatusBar(ChessClock);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ChessClock->setStatusBar(statusbar);

        menubar->addAction(ChessClockUI->menuAction());

        retranslateUi(ChessClock);

        QMetaObject::connectSlotsByName(ChessClock);
    } // setupUi

    void retranslateUi(QMainWindow *ChessClock)
    {
        ChessClock->setWindowTitle(QCoreApplication::translate("ChessClock", "ChessClock", nullptr));
        pushButton_1->setText(QCoreApplication::translate("ChessClock", "120 seconds", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ChessClock", "START GAME", nullptr));
        pushButton_4->setText(QCoreApplication::translate("ChessClock", "Stop Game", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ChessClock", "5 minutes", nullptr));
        pushButton_6->setText(QCoreApplication::translate("ChessClock", "Switch Player", nullptr));
        label->setText(QCoreApplication::translate("ChessClock", "Start game", nullptr));
        pushButton_5->setText(QCoreApplication::translate("ChessClock", "Switch Player", nullptr));
        pushButton_7->setText(QCoreApplication::translate("ChessClock", "Reset Timer", nullptr));
        ChessClockUI->setTitle(QCoreApplication::translate("ChessClock", "ChessClockUI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChessClock: public Ui_ChessClock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
