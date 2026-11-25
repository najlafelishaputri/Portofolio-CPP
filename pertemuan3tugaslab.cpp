// latihan tracing
#include <iostream>
using namespace std;
int main() {
	double p = 8.0;     // baris 5
	double l = 5.0;     // baris 6
	double t = 3.0;     // baris 7
	double luas = p * l; 
	double volume = p* l * t;
	double keliling = 2 * (p + 1);
	double diagonal = p + l + t;
	cout << "Luas     = " << luas << endl;
	cout << "Volume   = " << volume << endl;
	cout << "Keliling = " << keliling << endl;
	
	return 0; 
}
