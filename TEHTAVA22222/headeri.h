#ifndef HEADERI_H
#define HEADERI_H


class NumberGuesser {
private:
    int targetNumber;
    int numberOfTries;

public:
    NumberGuesser();
    void playGame();

    ~NumberGuesser();

protected:

    void eipalautamitaan();
};



#endif
