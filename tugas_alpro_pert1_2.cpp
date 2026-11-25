#include <iostream>
#include <string>
using namespace std;

int main() {
	string nama;
	int tahun_lahir, tahun_masuk_kuliah, sudah_kuliah, umur;
	
	cout << "        Isi data diri Anda" << endl;
	cout << "==================================" << endl;
	
	cout << "Nama                 : ";
	cin >> nama;
	cout << "Tahun lahir          : ";
	cin >> tahun_lahir;
	cout << "Tahun masuk kuliah   : ";
	cin >> tahun_masuk_kuliah;
	
	umur = 2025 - tahun_lahir;
	sudah_kuliah = 2025 - tahun_masuk_kuliah;
	
	cout << "==================================" << endl;
	cout << "   KALKULATOR IDENTITAS MANUSIA " << endl;
	cout << "==================================" << endl;
	cout << "Nama           : " << nama << endl;
	cout << "Umur           : " << umur << endl;
	cout << "Sudah kuliah    : " << sudah_kuliah << endl;
	
	return 0;	 
}
