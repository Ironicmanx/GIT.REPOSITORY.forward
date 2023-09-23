#ifndef ASUNTO_H
#define ASUNTO_H

class Asunto
{
public:
    Asunto();
    void define(int, int);
    double calculateConsumption(double, bool);

private:
    int residents;
    int squares;
};

#endif // ASUNTO_H
