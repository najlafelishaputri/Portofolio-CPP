// ============================================ 
// Studi Kasus 3: Sistem Kasir Mini Market 
// ============================================ 
#include <iostream> 
#include <string> 
using namespace std; 
 
int main() { 
	// ---- Deklarasi Variabel ---- 
	string namaPembeli, namaKasir; 
	string barang1, barang2, barang3; 
	double harga1, harga2, harga3; 
	int    qty1, qty2, qty3; 
	double uangBayar; 
	const double TARIF_PAJAK = 0.11;   // 11% 
	const double TARIF_DISKON = 0.10;  // 10% 
	const double MIN_DISKON = 200000;  // minimum belanja dapat diskon 
     
	// ---- Input Data Kasir & Pembeli ---- 
	cout << "==============================" << endl; 
	cout << "   MINI MARKET ELLA STORE" << endl; 
	cout << "==============================" << endl; 
	cout << "Nama Kasir   : "; cin.ignore(); getline(cin, namaKasir); 
	cout << "Nama Pembeli : "; getline(cin, namaPembeli); 
	cout << "------------------------------" << endl; 
    
	// ---- Input Barang 1 ---- 
	cout << "[Barang 1]" << endl; 
	cout << "  Nama Barang : "; getline(cin, barang1); 
	cout << "  Harga       : Rp "; cin >> harga1; 
	cout << "  Jumlah      : "; cin >> qty1; 
    
	// ---- Input Barang 2 ---- 
	cout << "[Barang 2]" << endl; 
	cout << "  Nama Barang : "; cin.ignore(); getline(cin, barang2); 
	cout << "  Harga       : Rp "; cin >> harga2; 
	cout << "  Jumlah      : "; cin >> qty2; 
     
    // ---- Input Barang 3 ---- 
	cout << "[Barang 3]" << endl; 
	cout << "  Nama Barang : "; cin.ignore(); getline(cin, barang3); 
	cout << "  Harga       : Rp "; cin >> harga3; 
	cout << "  Jumlah      : "; cin >> qty3; 
     
    // ---- Input Uang Bayar ---- 
	cout << "\nUang Bayar   : Rp "; cin >> uangBayar; 
     
    // ---- Proses Perhitungan ---- 
    double sub1 = harga1 * qty1; 
    double sub2 = harga2 * qty2; 
    double sub3 = harga3 * qty3; 
    double total = sub1 + sub2 + sub3; 
     
    // Diskon: gunakan operator relasional untuk cek syarat 
    bool    dapatDiskon = (total >= MIN_DISKON); 
    double  diskon      = dapatDiskon ? (total * TARIF_DISKON) : 0; 
    double  totalSblPajak = total - diskon; 
    double  pajak       = totalSblPajak * TARIF_PAJAK; 
    double  totalBayar  = totalSblPajak + pajak; 
    double  kembalian   = uangBayar - totalBayar; 
    
    // ---- Output Struk Belanja ---- 
    cout << "\n==============================" << endl; 
    cout << "          STRUK BELANJA" << endl; 
    cout << "==============================" << endl; 
    cout << "Kasir    : " << namaKasir   << endl; 
    cout << "Pembeli  : " << namaPembeli << endl; 
    cout << "------------------------------" << endl; 
    cout << barang1 << " x" << qty1 << "\t: Rp " << sub1 << endl; 
    cout << barang2 << " x" << qty2 << "\t: Rp " << sub2 << endl; 
    cout << barang3 << " x" << qty3 << "\t: Rp " << sub3 << endl; 
    cout << "------------------------------" << endl; 
    cout << "Subtotal : Rp " << total << endl; 
    if (dapatDiskon) 
        cout << "Diskon10%: Rp " << diskon << endl; 
    else 
        cout << "Diskon   : Tidak memenuhi syarat" << endl; 
    cout << "Pajak11% : Rp " << pajak      << endl; 
    cout << "Total    : Rp " << totalBayar << endl; 
    cout << "Bayar    : Rp " << uangBayar  << endl; 
    cout << "Kembali  : Rp " << kembalian  << endl; 
    cout << "==============================" << endl; 
    cout << "Terima kasih, " << namaPembeli << "!" << endl; 
	cout << "==============================" << endl; 
     
    return 0; 
}
