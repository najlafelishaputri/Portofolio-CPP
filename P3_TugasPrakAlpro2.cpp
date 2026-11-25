#include <iostream>
#include <string>
using namespace std;

class AlatMusik {
protected:
    string namaAlat;

public:
    virtual void mainkan() {
        cout << "Alat musik sedang dimainkan" << endl;
    }
};

class Gitar : public AlatMusik {
public:
    void mainkan() {
        namaAlat = "Gitar";

        cout << namaAlat
             << " menghasilkan suara: Jreng jreng" << endl;
    }
};

class Piano : public AlatMusik {
public:
    void mainkan() {
        namaAlat = "Piano";

        cout << namaAlat
             << " menghasilkan suara: Ting ting" << endl;
    }
};

int main() {
    Gitar gitar;
    Piano piano;

    AlatMusik *daftarAlat[2];

    daftarAlat[0] = &gitar;
    daftarAlat[1] = &piano;

    for (int i = 0; i < 2; i++) {
        daftarAlat[i]->mainkan();
    }

    return 0;
}
