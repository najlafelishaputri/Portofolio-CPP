#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
public:
    string nama;

    // Constructor
    Mahasiswa(string n) {
        nama = n;
    }
};

class Produk {
public:
    string nama;
    int harga;

    // Constructor
    Produk(string n, int h) {
        nama = n;
        harga = h;
    }
};

int main() {
    // Membuat object Mahasiswa
    Mahasiswa mhs("Siti");

    cout << "Nama mahasiswa: " << mhs.nama << endl;

    // Membuat object Produk
    Produk p("Laptop", 5000000);

    cout << "Nama produk: " << p.nama << endl;
    cout << "Harga produk: Rp" << p.harga << endl;

    return 0;
} 
