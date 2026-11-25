#include <iostream>
#include <string>
using namespace std;

// ===== ABSTRACT CLASS =====
class Pembayaran {
protected:
    string nama;
    double jumlah;

public:
    Pembayaran(string n, double j) {
        nama = n;
        jumlah = j;
    }

    // Pure virtual function -> class ini jadi abstract
    virtual void bayar() = 0;

    virtual ~Pembayaran() {}
};

// ===== CLASS TURUNAN 1: CASH =====
class Cash : public Pembayaran {
private:
    double uang;

public:
    Cash(string n, double j, double u) : Pembayaran(n, j) {
        uang = u;
    }

    void bayar() override {
        if (uang >= jumlah) {
            cout << nama << " bayar Rp " << jumlah
                 << " dengan uang tunai. Kembalian: Rp " << uang - jumlah << endl;
        } else {
            cout << "GAGAL, uang kurang Rp " << jumlah - uang << endl;
        }
    }
};

// ===== CLASS TURUNAN 2: TRANSFER =====
class Transfer : public Pembayaran {
private:
    double saldoRekening;

public:
    Transfer(string n, double j, double saldo) : Pembayaran(n, j) {
        saldoRekening = saldo;
    }

    void bayar() override {
        if (saldoRekening >= jumlah) {
            saldoRekening = saldoRekening - jumlah;
            cout << nama << " bayar Rp " << jumlah
                 << " melalui rekening. Sisa saldo: Rp " << saldoRekening << endl;
        } else {
            cout << "GAGAL, saldo rekening tidak cukup" << endl;
        }
    }
};

// ===== CLASS TURUNAN 3: E-WALLET =====
class EWallet : public Pembayaran {
private:
    double saldoWallet;

public:
    EWallet(string n, double j, double saldo) : Pembayaran(n, j) {
        saldoWallet = saldo;
    }

    void bayar() override {
        if (saldoWallet >= jumlah) {
            saldoWallet = saldoWallet - jumlah;
            cout << nama << " bayar Rp " << jumlah
                 << " melalui dompet digital. Sisa saldo: Rp " << saldoWallet << endl;
        } else {
            cout << "GAGAL, saldo e-wallet tidak cukup" << endl;
        }
    }
};

// ===== MAIN =====
int main() {
    string nama;
    double jumlah, saldo;
    int pilihan;
    char lagi;

    do {
        cout << "\n===== SISTEM PEMBAYARAN =====" << endl;
        cout << "Nama pelanggan : ";
        cin >> nama;
        cout << "Jumlah tagihan : ";
        cin >> jumlah;

        cout << "\nPilih metode pembayaran:" << endl;
        cout << "1. Cash" << endl;
        cout << "2. Transfer" << endl;
        cout << "3. E-Wallet" << endl;
        cout << "Pilihan : ";
        cin >> pilihan;

        // Pointer bertipe induk, nanti diisi objek turunan sesuai pilihan
        Pembayaran* p = NULL;

        if (pilihan == 1) {
            cout << "Uang diberikan : ";
            cin >> saldo;
            p = new Cash(nama, jumlah, saldo);
        } else if (pilihan == 2) {
            cout << "Saldo rekening : ";
            cin >> saldo;
            p = new Transfer(nama, jumlah, saldo);
        } else if (pilihan == 3) {
            cout << "Saldo e-wallet : ";
            cin >> saldo;
            p = new EWallet(nama, jumlah, saldo);
        } else {
            cout << "Pilihan tidak valid!" << endl;
        }

        // Polymorphism: bayar() otomatis sesuai jenis objek
        if (p != NULL) {
            cout << "\n--- Hasil ---" << endl;
            p->bayar();
            delete p;
        }

        cout << "\nTransaksi lagi? (y/n) : ";
        cin >> lagi;

    } while (lagi == 'y' || lagi == 'Y');

    cout << "Terima kasih!" << endl;
    return 0;
}
