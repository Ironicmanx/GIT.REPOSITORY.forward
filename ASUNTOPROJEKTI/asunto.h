#ifndef ASUNTO_H
#define ASUNTO_H

#include <iostream>

class Asunto {
public:
    int asukasMaara = 2;
    int neliot = 100;

    void maarita();
    double laskeKulutus(double hinta);

    Asunto();
};

#endif // ASUNTO_H
