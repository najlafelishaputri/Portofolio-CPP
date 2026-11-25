#include <iostream>
using namespace std;

int main()  {
	// DEKLARASI VARIABEL
	string nama, nim;
	double nilaiTugas, nilaiUts, nilaiUas;
	double kompTugas, kompUts, kompUas;
	double nilaiAkhir;
	string grade;
	
	
	//BOBOT PENILAIAN (KONSTATNTA)
	const double BOBOT_TUGAS = 0.30;  //30%
	const double BOBOT_UTS = 0.30;  //30%
	const double BOBOT_UAS = 40;  //40%
	
	//INPUT 
	cout << "=======" << endl;
	cout << "SISTEM PENILAIAN MAHASISWA" << endl;
	cout << "=========" << endl;
	cout << "Nama Mahasiswa : "; cin.ignore(); getline(cin, nama);
	cout << "NIM : "; cin >> nim;
	cout << "\n-- Input nilai --" << endl;
	cout << "Nilai tugas (0 - 100) : "; cin >> nilaiTugas;
	cout << "Nilai Uts (0 - 100) : "; cin >> nilaiUts;
	cout << "nNilai Uas (0 - 100) : "; cin >> nilaiUas;
	
	// PROSES
	kompTugas = nilaiTugas * BOBOT_TUGAS;kompUts = nilaiUts * BOBOT_UTS;
	kompUas = nilaiUas * BOBOT_UAS;
	nilaiAkhir = kompTugas + kompUts + kompUas;
	
	//TENTUKAN GRADE BERDASARKAN NILAI AKHIR
	//
	grade = "E";
	if (nilaiAkhir >= 55) grade = "D";
	if (nilaiAkhir >= 65) grade = "C";
	if (nilaiAkhir >= 75) grade = "B";
	if (nilaiAkhir >= 85) grade = "A";
	
	//OUTPUT
	cout << "=====" << endl;
	cout << "   KARTU NILAI MAHASISWA  " << endl;
	cout << "======" << endl;
	cout << "Nama   : " << nama << endl;
	cout << "NIM    : " << nim << endl;
	cout << "-------------" << endl;
	cout << "Komponen Penilaian :" << endl;
	cout << "  Tugas (30%) : " << nilaiTugas << " x 30% = " << kompTugas << endl;
	cout << "  UTS (30%) : " << nilaiUts << " x 30% = " << kompUts << endl;
    cout << "  UAS (40%) : " << nilaiUas << " x 40% = " << kompUas << endl;
    cout << "--------" << endl;
    cout << "Nilai Akhir  : " << nilaiAkhir << endl;
    cout << " Grade       : " << grade << endl;
    cout << "==========" << endl;
    
    return 0;
		
}
