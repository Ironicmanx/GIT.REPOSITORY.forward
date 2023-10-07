#ifndef KATUTASO_H
#define KATUTASO_H

#include "Kerros.h"

class Katutaso : public Kerros {
public:
    Asunto* as1;
    Asunto* as2;

    void maaritaAsunnot();
    double laskeKulutus(double hinta);

    Katutaso();
    ~Katutaso();

};

#endif // KATUTASO_H
