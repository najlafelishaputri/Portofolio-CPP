#include <iostream>
#include <string>
using namespace std;

int main() {
	int usia, jenisHari;
	string namaHari, kategori;
	double hargaBase, hargaFinal;
	const double SURCHARGE_WEEKEND = 15000;
	
	cout << "=====" << endl;
	cout << "SISTEM BIOSKOP NUSANTARA" << endl;
	cout << "======" << endl;
	cout << "Usia pengunjung : "; cin >> usia;
	cout << "Jenis hari (1 Weekday, 2 Weekend): "; cin >> jenisHari;
	
	if (usia < 12) {
		kategori = "Anak-anak";
		hargaBase = 25000;
	} else if (usia <= 17){
		kategori = "Remaja";
		hargaBase = 35000;
	} else if (usia <= 59) {
		kategori = "Dewasa";
		hargaBase = 50000;
	} else {
		kategori = "Lansia";
		hargaBase = 25000;
	}
	
	
	if (jenisHari == 1) {
		namaHari = "Weekday";
		hargaFinal = hargaBase;
	} else {
		namaHari = "Weekend";
		
		if (usia >= 60) {
			hargaFinal = hargaBase;
		} else {
			hargaFinal = hargaBase + SURCHARGE_WEEKEND;
		}
	}
	
	cout << "\n====================" << endl;
	cout << "     Struk tiket" << endl;
	cout << "======================" << endl;
	cout << "Usia" << usia << " Tahun" << endl;
	cout << "Kategori :" << kategori << endl;
	cout << "Jenis hari : " << namaHari << endl;
	cout << "Harga tiket : " << hargaFinal << endl;
	
	return 0;
	
	
	return 0;
}
