#include <iostream>
#include <string>
using namespace std;

// Parent Class
class Hewan {
protected:
    string nama;

public:
    void setNama(string n) {
        nama = n;
    }

    virtual void suara() {
        cout << "Hewan mengeluarkan suara" << endl;
    }
};

// Child Class 1
class Kucing : public Hewan {
public:
    void suara() override {
        cout << nama << " berkata: Meong" << endl;
    }
};

// Child Class 2
class Anjing : public Hewan {
public:
    void suara() override {
        cout << nama << " berkata: Guk guk" << endl;
    }
};

int main() {
    cout << "\n=== STUDI KASUS 3: HEWAN (POLIMORFISME) ===" << endl;

    // Menggunakan pointer Parent Class untuk menunjuk objek Child Class
    Hewan* h1 = new Kucing();
    Hewan* h2 = new Anjing();

    h1->setNama("Mimi");
    h2->setNama("Milo");
    
    // memanggil method yang sama, hasil berbeda
    h1->suara(); //output: mimi berkata: meong
    h2->suara(); //output: milo berkata: Guk guk
    
    //membersihkan memori
    delete h1;
    delete h2;
    
    return 0;
    
}
