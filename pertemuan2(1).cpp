#include <iostream>
using namespace std;

int main()  {
	int a, b;
	
	cout << "===  KALKULATOR ARITMATIKA ===" << endl;
	cout << "Masukkan bilangan pertama : ";
	cin >> a;
	cout << "Masukkan bilangan kedua : ";
	cin >> b;
	
	cout << "\n===== HASIL PERHITUNGAN =====" << endl;
	
	cout << a << " + " << b << " = " << (a + b) << endl;
	cout << a << " - " << b << " = " << (a - b) << endl;
	cout << a << " x " << b << " = " << (a * b) << endl;
	cout << a << " / " << b << " = " << (double)a / b << endl;
	cout << a << " % " << b << " = " << (a % b) << "  (sisa bagi) " << endl;
	
	return 0;
}
