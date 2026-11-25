#include <iostream>
#include <string>
using namespace std;

// parent class
class Pegawai {
protected:
	string nama;
	double gaji;
	
public:
	void setNama(string n) {
		nama = n;
	}
	
	virtual void hitungGaji() {
		cout << "Menghitung gaji pegawai" << endl;
	}
};

// child class 1
class PegawaiTetap : public Pegawai {
public:
		void hitungGaji() override {
			cout << "Gaji Pegawai Tetap (" << nama
				<< "): Gaji tetap + tunjangan" << endl;
		}
};

// child class 2
class PegawaiKontrak : public Pegawai {
public:
		void hitungGaji() override {
			cout << "Gaji Pegawai Kontrak (" << nama
				 << "): Gaji berdasarkan kontrak" << endl;
		}
};

int main() {
	cout << "\n=== STUDI KASUS 2: PEGAWAI ===" << endl;
	
	PegawaiTetap p1;
	p1.setNama("ella unyu");
	p1.hitungGaji(); //output: gaji tetap + tunjangan
	
	PegawaiKontrak p2;
	p2.setNama("najla imut");
	p2.hitungGaji(); //output: gaji berdasarkan kontrak
	
	
	return 0;
}
