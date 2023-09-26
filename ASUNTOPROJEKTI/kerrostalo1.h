#ifndef KERROSTALO_H
#define KERROSTALO_H

#include "Katutaso.h"

class Kerrostalo : public Katutaso {
private:
    Katutaso* eka;
    Kerros* toinen;
    Kerros* kolmas;

public:
    double laskeKulutus(double hinta);

    Kerrostalo();
    ~Kerrostalo();
};

#endif // KERROSTALO_H
