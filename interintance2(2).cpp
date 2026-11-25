// (juga menjawab soal latihan no. 2)
// =================================================

#include <iostream>
#include <string>
using namespace std;

class Kendaraan {
protected:
    string merk;

public:
    Kendaraan(string m) : merk(m) {}

    // virtual -> Dynamic Binding
    virtual void bergerak() {
        cout << merk << " bergerak" << endl;
    }

    // BUKAN virtual -> Static Binding (sengaja untuk perbandingan)
    void info() {
        cout << "[Info] Ini adalah kendaraan" << endl;
    }
    
    virtual ~Kendaraan() {}
	
};
	
class Mobil : public Kendaraan {
public:
    Mobil(string m) : Kendaraan(m) {}

    void bergerak() override {
        cout << merk << " bergerak menggunakan 4 roda" << endl;
    }
    void info() {
    	cout << "[info] ini adalah mobil" << endl;
	}
};

class Motor : public Kendaraan {
public:
    Motor(string m) : Kendaraan(m) {}

    void bergerak() override {
        cout << merk << " bergerak menggunakan 2 roda" << endl;
    }

    void info() {
        cout << "[Info] Ini adalah motor" << endl;
    }
};

int main() {
    Kendaraan* k1 = new Mobil("Avanza");
    Kendaraan* k2 = new Motor("Vario");

    cout << "=== Dynamic Binding (fungsi virtual) ===" << endl;

    k1->bergerak();
    k2->bergerak();

    cout << "\n=== Static Binding (fungsi non-virtual) ===" << endl;

    k1->info();
    k2->info();

    cout << "\n=== Bandingkan: lewat objek langsung ===" << endl;

    Mobil m("Brio");
    m.info();

    delete k1;
    delete k2;

    return 0;
}
