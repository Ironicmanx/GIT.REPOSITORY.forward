#include "Kerrostalo.h"
#include "katutaso.h"


using std::cout;
using std::endl;

double Kerrostalo::laskeKulutus(double hinta) {
    double kulutus = asukasMaara * neliot * hinta * 14;
    return kulutus;
}

Kerrostalo::Kerrostalo() {
    cout << "Kerrostalo luotu" << endl;
    eka = new Katutaso;
    toinen = new Kerros;
    kolmas = new Kerros;
}

Kerrostalo::~Kerrostalo() {
    delete eka;
    delete toinen;
    delete kolmas;
}
