#include "Kerrostalo.h"
using namespace std;

int main() {
    Kerrostalo* kerrostalo = new Kerrostalo;
    kerrostalo->maaritaAsunnot();

    cout << "Kerrostalon kulutus: " << kerrostalo->laskeKulutus(1) << endl;

    delete kerrostalo;
    kerrostalo = nullptr;

    return 0;

}
