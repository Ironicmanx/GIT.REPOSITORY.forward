#include "Katutaso.h"

using std::cout;
using std::endl;

void Katutaso::maaritaAsunnot() {
    cout << "Maaritetaan 2 kpl katutason asuntoja" << endl;
    maarita();
    maarita();
    cout << "Maaritetaan 4 kpl katutason kerrokselta perittyja asuntoja" << endl;


    for (int i = 0; i < 4; i++)

    {
        maarita();
    }
}

double Katutaso::laskeKulutus(double hinta) {
    double kulutus = asukasMaara * neliot * hinta * 6;
    return kulutus;
}

Katutaso::Katutaso() {
    cout << "Katutaso luotu" << endl;
}
