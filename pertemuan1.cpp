#include <iostream>
#include <string>
using namespace std;

int main() {
	string nama;
	int umur;
	string asal;
	
	cout <<  "==== DATA DIRI ====" << endl;
	cout << "Masukkan nama anda : ";
	cin >> nama;
	cout << "Masukkan umur anda : ";
	cin >> umur;
	cout << "Masukkan kota asal : ";
	cin >> asal;
	
	cout << "\n==== HASIL ====" << endl;
	cout << "Nama : " << nama << endl;
	cout << "Umur : " << umur << " tahun" << endl;
	cout << "Asal : " << asal << endl;
	cout << "Selamat datang di Indonesia, " << nama << "!" << endl;
	
	return 0;
}
