#include <iostream>
#include <string>
using namespace std;

// Class Baterai
class Baterai {
private:
    int kapasitasMah;

public:
    // Constructor default
    Baterai() {
        kapasitasMah = 0;
        cout << "Constructor Baterai default dipanggil" << endl;
    }

    // Constructor dengan parameter
    Baterai(int kapasitasMah) {
        this->kapasitasMah = kapasitasMah;
        cout << "Constructor Baterai dipanggil" << endl;
    }

    // Setter
    void setKapasitasMah(int kapasitasMah) {
        this->kapasitasMah = kapasitasMah;
    }

    // Getter
    int getKapasitasMah() {
        return kapasitasMah;
    }

    // Destructor
    ~Baterai() {
        cout << "Destructor Baterai dipanggil" << endl;
    }
};

// Class Processor
class Processor {
private:
    string merek;
    double kecepatanGHz;

public:
    // Constructor default
    Processor() {
        merek = "Belum diketahui";
        kecepatanGHz = 0;
        cout << "Constructor Processor default dipanggil" << endl;
    }

    // Constructor dengan parameter
    Processor(string merek, double kecepatanGHz) {
        this->merek = merek;
        this->kecepatanGHz = kecepatanGHz;
        cout << "Constructor Processor dipanggil" << endl;
    }

    // Setter
    void setMerek(string merek) {
        this->merek = merek;
    }

    void setKecepatanGHz(double kecepatanGHz) {
        this->kecepatanGHz = kecepatanGHz;
    }

    // Getter
    string getMerek() {
        return merek;
    }

    double getKecepatanGHz() {
        return kecepatanGHz;
    }

    // Destructor
    ~Processor() {
        cout << "Destructor Processor dipanggil" << endl;
    }
};

// Class Laptop
class Laptop {
private:
    string namaLaptop;
    Baterai baterai;
    Processor processor;

public:
    // Constructor default
    Laptop()
        : namaLaptop("Laptop Default"),
          baterai(),
          processor() {
        cout << "Constructor Laptop default dipanggil" << endl;
    }

    // Constructor dengan parameter
    Laptop(string namaLaptop, int kapasitasMah,
           string merek, double kecepatanGHz)
        : namaLaptop(namaLaptop),
          baterai(kapasitasMah),
          processor(merek, kecepatanGHz) {
        cout << "Constructor Laptop dipanggil" << endl;
    }

    // Setter dengan pointer this
    void setNamaLaptop(string namaLaptop) {
        this->namaLaptop = namaLaptop;
    }

    // Getter
    string getNamaLaptop() {
        return namaLaptop;
    }

    // Menampilkan spesifikasi laptop
    void tampilkanSpesifikasi() {
        cout << "\n=== SPESIFIKASI LAPTOP ===" << endl;
        cout << "Nama Laptop       : " << namaLaptop << endl;
        cout << "Kapasitas Baterai : "
             << baterai.getKapasitasMah() << " mAh" << endl;
        cout << "Merek Processor   : "
             << processor.getMerek() << endl;
        cout << "Kecepatan         : "
             << processor.getKecepatanGHz() << " GHz" << endl;
    }

    // Destructor
    ~Laptop() {
        cout << "Destructor Laptop dipanggil" << endl;
    }
};

int main() {
    cout << "=== PROGRAM LAPTOP ===" << endl;

    {
        Laptop laptop1("ASUS VivoBook", 5000, "Intel Core i5", 2.8);

        laptop1.tampilkanSpesifikasi();

        laptop1.setNamaLaptop("ASUS VivoBook 14");

        cout << "\nNama setelah diubah: "
             << laptop1.getNamaLaptop() << endl;

        laptop1.tampilkanSpesifikasi();
    }

    cout << "\nProgram selesai." << endl;

    return 0;
}

