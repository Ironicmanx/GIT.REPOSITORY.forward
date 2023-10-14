#include "ui_mainwindow.h"
#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QWidget>


class ChessClock : public QMainWindow {
    Q_OBJECT

public:
    ChessClock(QWidget* parent = nullptr);

private slots:
    void setGameTime(int seconds);
    void startGame();
    void stopGame();
    void switchPlayer();
    void countdown();
    void endGame(int winner);
    void resetTimer();
private:
    Ui::ChessClock ui; // The generated UI
    int player1Time; //progress bar 1
    int player2Time; //progress bar 2
    int currentPlayer;
    bool gameRunning;
};

#endif // MAINWINDOW_H
