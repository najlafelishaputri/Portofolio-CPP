#include <iostream>
#include <string>
using namespace std;

class Mobil {
public:
	string warna;     // atribut (state)
	
	void jalan() {    // method (behavior)
	   cout << "Mobil berjalan" << endl;


	   
	}
};

int main() {
	Mobil mobil1;     // mobil1 = object (identity)
	mobil1.warna = "Merah";
	mobil1.jalan();
	
	cout << "Warna mobil: " << mobil1.warna << endl;
	
	Mobil mobil2;     // mobil1 = object (identity)
	mobil2.warna = "Pink";
	mobil2.jalan();
	
	cout << "Warna mobil: " << mobil2.warna << endl;
	
	
	return 0; 
}
