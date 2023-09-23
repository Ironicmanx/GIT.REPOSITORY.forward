#include "asunto.h"
#include <iostream>

using namespace std;

Asunto::Asunto()
{
    cout << "Asunto has been created" << endl;
}

void Asunto::define(int a, int b)
{
    residents = a;
    squares = b;
    cout << "Asunto defined, residents equal to " << residents << " and squares equal to " << squares << endl;
}

double Asunto::calculateConsumption(double h, bool printOrNot)
{
    double consumption = h * residents * squares;
    if (printOrNot == true)
    {
        cout << "Asunto consumption when price equals to " << h << " equals to " << consumption << endl;
    }

    return consumption;
}
