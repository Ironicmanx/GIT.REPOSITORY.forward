#include <iostream>


using namespace std;

class Asunto{
public:
    int asukasMaara = 2;
    int neliot = 100;

    void maarita(){
        cout << "Asunto maaritetty. Asukkaita: " << asukasMaara << " Nelioita: " << neliot << endl;
    }
    double laskeKulutus(double hinta){
        double kulutus = asukasMaara * neliot * hinta;
        return kulutus;
    }
    Asunto(){
        cout << "Asunto luotu" << endl;
    }
};

class Kerros : virtual public Asunto{
public:
    Asunto as1;
    Asunto as2;
    Asunto as3;
    Asunto as4;

    void maaritaAsunnot(){
        cout << "Maaritetaan 4 kpl kerroksen asuntoja" << endl;
        for(int i = 0; i < 4; i++){
            maarita();
        }
    }
    double laskeKulutus(double hinta){
        double kulutus = asukasMaara * neliot * hinta * 4;
        return kulutus;
    }
    Kerros(){
        cout << "Kerros luotu" << endl;
    }
};

class Katutaso : virtual public Kerros, virtual public Asunto{
public:
    Asunto as1;
    Asunto as2;

    void maaritaAsunnot(){
        cout << "Maaritetaan 2 kpl katutason asuntoja" << endl;
        maarita();
        maarita();
        cout << "Maaritetaan 4 kpl katutason kerrokselta perittyja asuntoja" << endl;
        for(int i = 0; i < 4; i++){
            maarita();
        }
    }
    double laskeKulutus(double hinta){
        double kulutus = asukasMaara * neliot * hinta * 6;
        return kulutus;
    }
    Katutaso(){
        cout << "Katutaso luotu" << endl;
    }
};

class Kerrostalo : virtual public Kerros, public Katutaso{
private:
    Katutaso eka;
    Kerros toinen;
    Kerros kolmas;
public:
    double laskeKulutus(double hinta){
        double kulutus = asukasMaara * neliot * hinta * 14;
        return kulutus;
    }
    Kerrostalo(){
        cout << "Kerrostalo luotu" << endl;
        eka.maaritaAsunnot();
        toinen.maaritaAsunnot();
        kolmas.maaritaAsunnot();
    }
};
