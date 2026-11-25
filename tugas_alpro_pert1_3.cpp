#include <iostream>
#include <string>
using namespace std;

int main() {
	string namaPembeli, namaKasir, namaBarang;
	int harga, jumlah, total, pajak, grandTotal;
	
	cout << "============================" << endl;
	cout << "     Selamat Berbelanja" << endl;
	cout << "============================" << endl;
	cout << "Kasir    : ";
	cin >> namaKasir;
	cout << "Pembeli  : ";
	cin >> namaPembeli;
	cout << "Barang   : ";
	cin >> namaBarang;
	cout << "Harga    : ";
	cin >> harga;
	cout << "Jumlah   : ";
	cin >> jumlah;
	
	total = harga * jumlah;
	pajak = harga * 10 / 100;
	grandTotal = total + pajak;
	
	
	cout << "============================" << endl;
	cout << "   MINI MARKET ALGO STORE" << endl;
	cout << "============================" << endl;
	cout << "Kasir        : " << namaKasir << endl;
	cout << "Pembeli      : " << namaPembeli << endl;
	cout << "============================" << endl;	
	cout << "Barang       : " << namaBarang << endl;
	cout << "Harga        : " << harga << endl;
	cout << "Jumlah       : " << jumlah << endl;
	cout << "============================" << endl;
	cout << "Total        : " << "Rp " << total << endl;
	cout << "Pajak 10%    : " << "Rp " << pajak << endl;
	cout << "Grand total  :" << "Rp " << grandTotal << endl;
	cout << "============================" << endl;
	cout << "Terimakasih, " << namaPembeli << endl;
	cout << "============================" << endl;
		
	return 0;
}
