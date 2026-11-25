#include <iostream>
#include <string>
using namespace std;

// bagian A: dengan virtual (dynamic binding)

class Hewan {
protected:
    string nama ;
public:
    Hewan(string n) : nama (n) {}
    virtual void suara () {
        cout << nama << " Mengeluarkan suara hewan" << endl;
    
    }
    virtual ~Hewan () {}
	
};
	
class Kucing : public Hewan {
public: 
	Kucing(string n) : Hewan(n) {}
	
	void suara() override {
		cout << nama << "Berkata : meong" << endl;
	}
	
};

class Anjing : public Hewan {
public:
	Anjing(string n) : Hewan(n) {}
	void suara() override {
		cout << nama << "Berkata : guk guk" << endl;
	}
	
};

// bagian B: tanpa virtual (static binding) -- hanya pembanding
class HewanStatis {
public:
	void suara() {
		cout << "Suara hewan" << endl;
	}
};

class KucingStatis : public HewanStatis {
public:
	void suara() {
		cout << "Meong" << endl;
	}
};

int main() {
    cout << "=== A. DENGAN virtual (Dynamic Binding) ===" << endl;

    Hewan* h1 = new Kucing("Tom");
    Hewan* h2 = new Anjing("Doggo");

    h1->suara();
    h2->suara();

    cout << "\n=== B. TANPA virtual (Static Binding) ===" << endl;

    HewanStatis* hs = new KucingStatis();
    hs->suara();

    return 0;
}
