#include "Kerros.h"

using std::cout;
using std::endl;

void Kerros::maaritaAsunnot() {
    cout << "Maaritetaan 4 kpl kerroksen asuntoja" << endl;
    for (int i = 0; i < 4; i++) {
        maarita();
    }
}

double Kerros::laskeKulutus(double hinta) {
    double kulutus = asukasMaara * neliot * hinta * 4;
    return kulutus;
}

Kerros::Kerros() {
    cout << "Kerros luotu" << endl;
}

int Kerros::kerrostenLukumaara()
{
    kerrostalo= 2; //kaksi rappua
    asunnot = 4; // neljä asuntoa per
    lukumaara = kerrostalo * 2 * asunnot;
    return lukumaara;
}
