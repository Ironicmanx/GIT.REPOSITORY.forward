#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QTimer>
#include <QMessageBox>

ChessClock::ChessClock(QWidget* parent) : QMainWindow(parent),
    player1Time(0), player2Time(0), currentPlayer(1), gameRunning(false) {
    ui.setupUi(this);

    ui.progressBarPlayer1->setRange(0, 100);
    ui.progressBar_2->setRange(0, 100);
    ui.progressBarPlayer1->setValue(100);
    ui.progressBar_2->setValue(100);
    ui.label->setText("Start game");

    connect(ui.pushButton_1, &QPushButton::clicked, this, [this] { setGameTime(120); });
    connect(ui.pushButton_2, &QPushButton::clicked, this, [this] { setGameTime(300); });
    connect(ui.pushButton_3, &QPushButton::clicked, this, &ChessClock::startGame);
    connect(ui.pushButton_4, &QPushButton::clicked, this, [this] { stopGame(); });
    connect(ui.pushButton_5, &QPushButton::clicked, this, &ChessClock::switchPlayer);
    connect(ui.pushButton_6, &QPushButton::clicked, this, &ChessClock::switchPlayer);
    connect(ui.pushButton_7, &QCheckBox::clicked, this, &ChessClock::resetTimer);


}

void ChessClock::setGameTime(int seconds) {
    if (!gameRunning) {
        player1Time = seconds;
        player2Time = seconds;
        ui.progressBarPlayer1->setValue(100);
        ui.progressBar_2->setValue(100);
    }
}

void ChessClock::startGame() {
    if (player1Time > 0 && !gameRunning) {
        gameRunning = true;
        countdown();
        ui.label->setText("Game Running");
    }
}

void ChessClock::stopGame() {
    if (gameRunning) {
        // The game is running, so pause it.
        gameRunning = false;
        ui.label->setText("Game Paused");
    } else {
        // The game is not running, so start it.
        startGame();
    }
}



void ChessClock::switchPlayer() {
    if (gameRunning) {
        resetTimer(); // Stop the current player's turn
        if (currentPlayer == 1) {
            currentPlayer = 2;
            ui.label->setText("Player 2 making moves");
        } else {
            currentPlayer = 1;
            ui.label->setText("Player 1 making moves");
        }
        startGame(); // Start the new player's turn
    }
}

void ChessClock::resetTimer() {
    if (ui.pushButton_7->isChecked()) {
        stopGame();
        // Toggle button is checked, reset the game to the initial state.
        setGameTime(120); // You can set the desired initial time here.
        currentPlayer = 1;  // Reset to player 1's turn
        ui.label->setText("Start game"); // Reset the label
        startGame(); // Start the game
    }
}

void ChessClock::countdown() {
    if (gameRunning) {
        if (currentPlayer == 1) {
            if (player1Time > 0) {
                player1Time--;
                ui.progressBarPlayer1->setValue(player1Time);
                QTimer::singleShot(1000, this, &ChessClock::countdown);
            } else if (player2Time == 0) {
                endGame(0); // Game over
            }
        } else {
            if (player2Time > 0) {
                player2Time--;
                ui.progressBar_2->setValue(player2Time);
                QTimer::singleShot(1000, this, &ChessClock::countdown);
            } else if (player1Time == 0) {
                endGame(0); // Game over
            }
        }
    } else if (player1Time == 0 || player2Time == 0) {
        endGame(0); // Game over when gameRunning is false and one of the progress bars is at 0
    }
}

void ChessClock::endGame(int winner) {
    gameRunning = false;
    if (winner == 1) {
        ui.label->setText("Player 1 wins!");
    } else if (winner == 2) {
        ui.label->setText("Player 2 wins!");
    } else {
        ui.label->setText("Game Over");
    }
}
