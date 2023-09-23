#include <iostream>
#include "asunto.h"

using namespace std;

int main()
{
    Asunto olio;
    olio.define(2, 100);
    cout << "Apartment consumption when price equals to 1 is " << olio.calculateConsumption(1, false) << endl;

    return 0;
}
