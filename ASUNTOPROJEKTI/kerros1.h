#ifndef KERROS_H
#define KERROS_H

#include "Asunto.h"

class Kerros : public Asunto {
public:
    Asunto* as1;
    Asunto* as2;
    Asunto* as3;
    Asunto* as4;

    void maaritaAsunnot();
    double laskeKulutus(double hinta);

    Kerros();
    ~Kerros();
};

#endif // KERROS_H
