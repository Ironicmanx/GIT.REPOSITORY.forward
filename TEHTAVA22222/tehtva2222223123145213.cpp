#include "headeri.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

NumberGuesser::NumberGuesser() {
    srand(time(0)); // Initialize the random number generator
    targetNumber = rand() % 20;
    numberOfTries = 0;
    cout << "RANDOM GENERATOR: object initialized"<<endl;
    cout << "Guess a number between 0 and 19: "<<endl;
    '\n';
}

void NumberGuesser::playGame() {
    int userGuess;
    while (true) {
        cin >> userGuess;
        numberOfTries++;

        if (userGuess == targetNumber) {
            cout << "Congratulations! You guessed the correct number in " << numberOfTries << " tries." << endl;
            break;
        } else if (userGuess < targetNumber) {
            cout << "Incorrect guess. It's more than that. Try again." << endl;
        } else {
            cout << "Incorrect guess. It's less than that. Try again." << endl;
        }
    }
}



int main() {

    NumberGuesser game;
    game.playGame();

    return 0;
}
NumberGuesser::~NumberGuesser() {

    cout<<"object cleared from stack memory"<<endl;
}
