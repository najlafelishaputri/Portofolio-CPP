// ============================================ 
// Studi Kasus 2: Gaji Karyawan Harian 
// ============================================ 
#include <iostream>
#include <string>
using namespace std; 
 
int main() { 
    // ===== DEKLARASI ===== 
    string nama, jabatan; 
    double gajiPerHari, tunjanganMakan; 
    int    hariKerja; 
    const double TARIF_BPJS = 0.02; // 2% 
     
    // ===== INPUT ===== 
    cout << "===== DATA KARYAWAN =====" << endl; 
    cout << "Nama Karyawan      : ";getline(cin, nama); 
    cout << "Jabatan            : "; getline(cin, jabatan); 
    cout << "Gaji per Hari (Rp) : "; cin >> gajiPerHari; 
    cout << "Hari Kerja Bulan ini: "; cin >> hariKerja; 
    cout << "Tunjangan Makan/Hari: "; cin >> tunjanganMakan; 
     
    // ===== PROSES ===== 
    double gajiPokok   = gajiPerHari * hariKerja; 
    double tunjangan   = tunjanganMakan * hariKerja; 
    double gajiKotor   = gajiPokok + tunjangan; 
    double potonganBPJS = gajiKotor * TARIF_BPJS; 
    double gajiBersih  = gajiKotor - potonganBPJS; 
     
    // ===== OUTPUT ===== 
    cout << "\n================================" << endl; 
    cout << "         SLIP GAJI" << endl; 
    cout << "================================" << endl; 
    cout << "Nama      : " << nama     << endl; 
    cout << "Jabatan   : " << jabatan  << endl; 
    cout << "Hari Kerja: " << hariKerja << " hari" << endl; 
    cout << "--------------------------------" << endl; 
    cout << "Gaji Pokok  : Rp " << gajiPokok    << endl; 
    cout << "Tunjangan   : Rp " << tunjangan    << endl; 
    cout << "Gaji Kotor  : Rp " << gajiKotor    << endl; 
    cout << "Pot. BPJS   : Rp " << potonganBPJS << endl; 
    cout << "================================" << endl; 
    cout << "Gaji Bersih : Rp " << gajiBersih   << endl; 
    cout << "================================" << endl; 
     
    return 0; 
}
