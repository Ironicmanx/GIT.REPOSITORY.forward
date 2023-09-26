#include "Kerros.h"

using std::cout;
using std::endl;

void Kerros::maaritaAsunnot() {
    cout << "Maaritetaan 4 kpl kerroksen asuntoja" << endl;
    for (int i = 0; i < 4; i++) {
        as1[i].maarita();
    }
}

double Kerros::laskeKulutus(double hinta) {
    double kulutus = asukasMaara * neliot * hinta * 4;
    return kulutus;
}

Kerros::Kerros() {
    cout << "Kerros luotu" << endl;
    as1 = new Asunto[4];
    as2 = new Asunto[4];
    as3 = new Asunto[4];
    as4 = new Asunto[4];
}

Kerros::~Kerros() {
    delete[] as1;
    as1 = nullptr;
    delete[] as2;
     as2 = nullptr;
    delete[] as3;
      as3 = nullptr;
    delete[] as4;
       as4 = nullptr;
}
