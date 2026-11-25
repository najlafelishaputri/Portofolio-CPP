#include <iostream>
#include <string>
using namespace std;

// Parent class
class Kendaraan {
protected:
	string merk;
	string warna;
	int kecepatan;
	
public:
	// virtual method untuk mendukung polimorfisme
	virtual void bergerak() {
		cout << "Kendaraan bergerak" << endl;
	}
};

// child class 1 (relasi Is-A: Motor adalah kendaraan)
class Mobil : public Kendaraan {
public:	
	void bergerak() override {
		cout << "Mobil berjalan di jalan raya" << endl;
	}
};

// child class 2 (relasi Is-A: Motor adalah kendaraan)
class Motor : public Kendaraan {
public:
	void bergerak() override {
		cout << "Motor melaju di jalan" << endl;
	}
};

int main () {
	cout << "===== STUDI KASUS 1: KENDARAAN =====" << endl;
	
	Mobil mobil1;
	Motor motor1;
	
	// memanggil method yang telah di override
	mobil1.bergerak(); // output: mobil berjalan di jalan raya	
	motor1.bergerak(); // output: motor melaju di jalan 
	
	return 0;

}
