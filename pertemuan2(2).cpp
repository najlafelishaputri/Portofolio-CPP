#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit, kelvin, reamur;

    cout << "===== KONVERSI SUHU =====" << endl;
    cout << "Masukkan suhu (celsius): ";
    cin >> celsius;

    // Proses konversi
    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    kelvin = celsius + 273.15;
    reamur = celsius * 4.0 / 5.0;

    cout << "\n===== HASIL KONVERSI =====" << endl;

    cout << celsius << " Celsius " << endl;
    cout << " Fahrenheit : " << fahrenheit << " F" << endl;
    cout << " Kelvin     : " << kelvin << " K" << endl;
    cout << " Reamur     : " << reamur << " R" << endl;

    return 0;
}
