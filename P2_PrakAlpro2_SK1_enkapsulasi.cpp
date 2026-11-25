#include <iostream>
#include <string>
using namespace std;

// --- Kelas Baterai ---
class Baterai {
private:
    int kapasitasMah;

public:
    // Constructor dengan default parameter (termasuk overloading)
    Baterai(int kapasitas = 0) {
        this->kapasitasMah = kapasitas; // Menggunakan pointer this
        cout << "[Constructor] Baterai dibuat dengan kapasitas: " << this->kapasitasMah << " mAh" << endl;
    }

    // Destructor
    ~Baterai() {
        cout << "[Destructor] Baterai dengan kapasitas " << this->kapasitasMah << " mAh dihancurkan." << endl;
    }

    // Getter (Enkapsulasi)
    int getKapasitas() const {
        return kapasitasMah;
    }
};

// --- Kelas Processor ---
class Processor {
private:
    string merk;
    double kecepatanGHz;

public:
    // Overloading Constructor 1
    Processor() {
        this->merk = "Unknown";
        this->kecepatanGHz = 0.0;
        cout << "[Constructor] Processor default dibuat." << endl;
    }

    // Overloading Constructor 2
    Processor(string merk, double kecepatan) {
        this->merk = merk; // Menggunakan pointer this
        this->kecepatanGHz = kecepatan;
        cout << "[Constructor] Processor " << this->merk << " dibuat." << endl;
    }

    // Destructor
    ~Processor() {
        cout << "[Destructor] Processor " << this->merk << " dihancurkan." << endl;
    }

    // Getter (Enkapsulasi)
    string getMerk() const { return merk; }
    double getKecepatan() const { return kecepatanGHz; }
};

// --- Kelas Laptop (Komposisi) ---
class Laptop {
private:
    string namaLaptop;
    Baterai baterai;   // Komposisi: Laptop memiliki Baterai
    Processor processor; // Komposisi: Laptop memiliki Processor

public:
    // Constructor Laptop dengan Initializer List
    Laptop(string nama, int kapasitasBaterai, string merkProc, double kecepatanProc) 
        : namaLaptop(nama), baterai(kapasitasBaterai), processor(merkProc, kecepatanProc) {
        cout << "[Constructor] Laptop " << this->namaLaptop << " dirakit." << endl;
    }

    // Destructor
    ~Laptop() {
        cout << "[Destructor] Laptop " << this->namaLaptop << " dibongkar." << endl;
    }

    // Method tampilkanSpesifikasi
    void tampilkanSpesifikasi() const {
        cout << "\n=== Spesifikasi Laptop ===" << endl;
        cout << "Nama Laptop     : " << namaLaptop << endl;
        cout << "Baterai         : " << baterai.getKapasitas() << " mAh" << endl;
        cout << "Processor       : " << processor.getMerk() << " (" << processor.getKecepatan() << " GHz)" << endl;
        cout << "==========================" << endl;
    }
};

// --- Fungsi Utama ---
int main() {
    cout << "--- Memulai Program Laptop ---" << endl;
    
    // Membuat objek Laptop (Otomatis memanggil constructor Baterai & Processor)
    Laptop laptopSaya("ASUS ROG", 5000, "Intel Core i7", 3.5);
    
    // Menampilkan spesifikasi
    laptopSaya.tampilkanSpesifikasi();

    cout << "\n--- Mengakhiri Program Laptop ---" << endl;
    // Destructor akan dipanggil otomatis secara berurutan (terbalik dari constructor)
    return 0;
}
