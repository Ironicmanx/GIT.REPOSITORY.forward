#include <iostream>
#include "Kerrostalo.h"
#include <string>
#include <clocale>
#include <locale>
#include <codecvt>


using namespace std;

int main() {


    Kerrostalo kerrostalo; //kerrostalo
    kerrostalo.as1.asukasMaara = 2;
    kerrostalo.as1.neliot = 100;
    kerrostalo.as2.asukasMaara = 2;
    kerrostalo.as2.neliot = 100;
    kerrostalo.as3.asukasMaara = 2;
    kerrostalo.as3.neliot = 100;
    kerrostalo.as4.asukasMaara = 2;
    kerrostalo.as4.neliot = 100;

    cout << "Kerrostalon kulutus: " << kerrostalo.laskeKulutus(1) << endl;

    return 0;
}
