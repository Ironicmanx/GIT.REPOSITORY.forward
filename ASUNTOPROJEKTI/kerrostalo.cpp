#include "Kerrostalo.h"

using std::cout;
using std::endl;

double Kerrostalo::laskeKulutus(double hinta) {
    double kulutus = asukasMaara * neliot * hinta * 14;
    return kulutus;
}

Kerrostalo::Kerrostalo() {
    cout << "Kerrostalo luotu" << endl;
    eka.maaritaAsunnot();
    toinen.maaritaAsunnot();
    kolmas.maaritaAsunnot();
}
