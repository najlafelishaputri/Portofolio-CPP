#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Class Mahasiswa
class Mahasiswa {
private:
    string nama;
    string nim;
    string programStudi;

public:
    // Constructor default
    Mahasiswa() {
        nama = "Belum diisi";
        nim = "-";
        programStudi = "-";
        cout << "Constructor Mahasiswa default dipanggil" << endl;
    }

    // Constructor dengan dua parameter
    Mahasiswa(string nama, string nim) {
        this->nama = nama;
        this->nim = nim;
        this->programStudi = "Belum diisi";
        cout << "Constructor Mahasiswa 2 parameter dipanggil" << endl;
    }

    // Constructor dengan tiga parameter
    Mahasiswa(string nama, string nim, string programStudi) {
        this->nama = nama;
        this->nim = nim;
        this->programStudi = programStudi;
        cout << "Constructor Mahasiswa 3 parameter dipanggil" << endl;
    }

    // Setter
    void setNama(string nama) {
        this->nama = nama;
    }

    void setNim(string nim) {
        this->nim = nim;
    }

    void setProgramStudi(string programStudi) {
        this->programStudi = programStudi;
    }

    // Getter
    string getNama() {
        return nama;
    }

    string getNim() {
        return nim;
    }

    string getProgramStudi() {
        return programStudi;
    }

    // Menampilkan data mahasiswa
    void tampilkanData() {
        cout << "Nama          : " << nama << endl;
        cout << "NIM           : " << nim << endl;
        cout << "Program Studi : " << programStudi << endl;
    }

    // Destructor
    ~Mahasiswa() {
        cout << "Destructor Mahasiswa: " << nama << endl;
    }
};

// Class Universitas
class Universitas {
private:
    string namaUniversitas;
    vector<Mahasiswa> daftarMahasiswa;

public:
    // Constructor
    Universitas(string namaUniversitas)
        : namaUniversitas(namaUniversitas) {
        daftarMahasiswa.reserve(10);
        cout << "Constructor Universitas dipanggil" << endl;
    }

    // Menambahkan mahasiswa dengan dua parameter
    void tambahMahasiswa(string nama, string nim) {
        daftarMahasiswa.push_back(Mahasiswa(nama, nim));
    }

    // Overloading method dengan tiga parameter
    void tambahMahasiswa(string nama, string nim,
                         string programStudi) {
        daftarMahasiswa.push_back(
            Mahasiswa(nama, nim, programStudi)
        );
    }

    // Menampilkan semua mahasiswa
    void tampilkanSemuaMahasiswa() {
        cout << "\nUniversitas: " << namaUniversitas << endl;
        cout << "Jumlah Mahasiswa: "
             << daftarMahasiswa.size() << endl;

        for (size_t i = 0; i < daftarMahasiswa.size(); i++) {
            cout << "\nMahasiswa ke-" << i + 1 << endl;
            daftarMahasiswa[i].tampilkanData();
        }
    }

    // Destructor
    ~Universitas() {
        cout << "Destructor Universitas dipanggil" << endl;
    }
};

int main() {
    cout << "=== PROGRAM DATA MAHASISWA ===" << endl;

    {
        Universitas kampus("Universitas Islam Riau");

        kampus.tambahMahasiswa("Ella", "25341001", "Ilmu Hukum");

        kampus.tambahMahasiswa(
            "olly", "25351002", "Teknik Informatika"
        );

        kampus.tambahMahasiswa(
            "ila", "25361003", "Sistem Informasi"
        );

        kampus.tampilkanSemuaMahasiswa();
    }

    cout << "\nProgram selesai." << endl;

    return 0;
}

