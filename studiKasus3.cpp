// ============================================ 
// Studi Kasus 2: Biodata Mahasiswa Baru 
// Tujuan: Input kompleks & format output rapi 
// ============================================ 

#include <iostream> 
#include <string> 
using namespace std;

int main() { 
	// ---- Deklarasi Variabel ---- 
	string namaLengkap, nim, prodi, kotaAsal; 
	int tahunMasuk; 
    
    // ---- Judul Program ---- 
    cout << "============================================" << endl; 
    cout << "   SISTEM REGISTRASI MAHASISWA BARU" << endl; 
    cout << "============================================" << endl; 
    cout << "Silakan isi data diri Anda di bawah ini." << endl; 
    cout << "--------------------------------------------" << endl; 
      
    // ---- Proses Input ---- 
    cout << "Nama Lengkap  : "; 
    //cin.ignore();                    // Membersihkan buffer keyboard 
    getline(cin, namaLengkap);       // Baca nama dengan spasi 
     
    cout << "NIM           : "; 
    cin >> nim; 
    cout << "Program Studi : "; 
    cin.ignore(); 
    getline(cin, prodi); 
    cout << "Kota Asal     : "; 
    getline(cin, kotaAsal); 
    cout << "Tahun Masuk   : "; 
    cin >> tahunMasuk; 
     
    // ---- Proses Output (Kartu Biodata) ---- 
    cout << "\n============================================" << endl; 
    cout << "         KARTU BIODATA MAHASISWA" << endl; 
    cout << "============================================" << endl; 
    cout << "  Nama Lengkap  : " << namaLengkap << endl; 
    cout << "  NIM           : " << nim << endl; 
    cout << "  Program Studi : " << prodi << endl; 
    cout << "  Kota Asal     : " << kotaAsal << endl; 
    cout << "  Tahun Masuk   : " << tahunMasuk << endl; 
    cout << "============================================" << endl; 
    cout << "  Data berhasil disimpan!" << endl; 
    cout << "============================================" << endl; 
     
    return 0; 
}
