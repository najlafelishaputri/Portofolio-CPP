#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string nama, jabatan;
    double gajiPokok;
    int hariKerja, jamLembur;
    
    cout << "===== INPUT DATA KARYAWAN =====" << endl;

    cout << "Nama Karyawan : ";
    getline(cin, nama);

    cout << "Jabatan : ";
    getline(cin, jabatan);

    cout << "Gaji Pokok : Rp ";
    cin >> gajiPokok;

    cout << "Jumlah Hari Kerja : ";
    cin >> hariKerja;

    cout << "Jumlah Jam Lembur : ";
    cin >> jamLembur;

    double tunjangan = 0.20 * gajiPokok;
    double upahLembur =
    (gajiPokok / 26 / 8) * 1.5 * jamLembur;
	double gajiKotor =
    gajiPokok + tunjangan + upahLembur;
	double bpjs = 0.02 * gajiPokok;
	double pajak = 0;

    if (gajiKotor > 5000000) {
    pajak = 0.05 * gajiKotor;
    }

    double gajiBersih =
    gajiKotor - bpjs - pajak;

    // Bonus
    double gajiPerHari = gajiPokok / 26;
    double gajiPerJam = gajiPerHari / 8;

    // Output
    cout << fixed << setprecision(2);

    cout << "\n==========================================" << endl;
    cout << "            SLIP GAJI KARYAWAN" << endl;
    cout << "==========================================" << endl;

    cout << "Nama Karyawan : " << nama << endl;
    cout << "Jabatan       : " << jabatan << endl;
    cout << "Hari Kerja    : " << hariKerja << " hari" << endl;
    cout << "Jam Lembur    : " << jamLembur << " jam" << endl;

    cout << "\n----------- KOMPONEN PENGHASILAN -----------" << endl;

    cout << "Gaji Pokok        : Rp " << gajiPokok << endl;
    cout << "Tunjangan Jabatan : Rp " << tunjangan << endl;
    cout << "Upah Lembur       : Rp " << upahLembur << endl;

    cout << "Gaji Kotor        : Rp " << gajiKotor << endl;

    cout << "\n----------- POTONGAN -----------" << endl;

    cout << "Potongan BPJS  : Rp " << bpjs << endl;
    cout << "Potongan Pajak : Rp " << pajak << endl;

    cout << "\n==========================================" << endl;
    cout << "GAJI BERSIH : Rp " << gajiBersih << endl;
    cout << "==========================================" << endl;

    // Bonus
    cout << "\nBONUS:" << endl;
    cout << "Gaji per Hari : Rp " << gajiPerHari << endl;
    cout << "Gaji per Jam  : Rp " << gajiPerJam << endl;

    return 0;
}
