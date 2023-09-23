#include "Asunto.h"

using std::cout;
using std::endl;

void Asunto::maarita() {
    cout << "Asunto maaritetty. Asukkaita: " << asukasMaara << " Nelioita: " << neliot << endl;
}

double Asunto::laskeKulutus(double hinta) {
    double kulutus = asukasMaara * neliot * hinta;
    return kulutus;
}

Asunto::Asunto() {
    cout << "Asunto luotu" << endl;
}
