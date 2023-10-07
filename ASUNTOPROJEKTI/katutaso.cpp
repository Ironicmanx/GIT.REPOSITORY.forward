#include "Katutaso.h"

using std::cout;
using std::endl;

void Katutaso::maaritaAsunnot() {
    cout << "Maaritetaan 2 kpl katutason asuntoja" << endl;
    for (int i = 0; i < 4; i++) {
        as1[i].maarita();
    }
    for (int i = 0; i < 4; i++) {
        as2[i].maarita();
    }
}

double Katutaso::laskeKulutus(double hinta) {
    double kulutus = asukasMaara * neliot * hinta * 6;
    return kulutus;
}

Katutaso::Katutaso() {
    cout << "Katutaso luotu" << endl;
    as1 = new Asunto[4];
    as2 = new Asunto[4];
}

Katutaso::~Katutaso() {
    delete[] as1;
    delete[] as2;
}
