#include <iostream>
#include <string>
using namespace std;

int main() {
	string nama, prodi, hobi, nim, noHp;
	
	cout << "========================================" << endl;
	cout << "  SISTEM REGISTRASI KARTU NAMA DIGITAL" << endl;
	cout << "========================================" << endl;
	cout << "Silahkan isi data diri Anda di bawah ini." << endl;
	cout << "-----------------------------------------" << endl;
	
	
	cout << "Nama lengkap      : ";
	//cin.ignore();
	getline(cin, nama); 
	cout << "NIM               : ";
	getline(cin, nim); 	
	cout << "Program studi     : ";
	//cin.ignore();
	getline(cin, prodi);
	cout << "No Handphone      : ";	
	getline(cin, noHp); 
 	cout << "Hobi              : ";
	//cin.ignore();
	getline(cin, hobi);
	
		
	cout << "=========================================" << endl;
	cout << "           KARTU NAMA DIGITAL         " << endl;
	cout << "=========================================" << endl;
	cout << "Nama      :  " << nama << endl;
	cout << "NIM       :  " << nim << endl;
	cout << "Prodi     :  " << prodi << endl;
	cout << "No.HP     :  " << noHp << endl;
	cout << "Hobi      :  " << hobi << endl;
	cout << "=========================================" << endl;
	cout << "  Salam kenal dari " << nama << "!" << endl;
	cout << "=========================================" << endl;
	
	return 0;
}





