# Buat program Inheritance
'''
#include <iostream>
using namespace std;

// Deklarasi kelas
class Hewan {
    public:
    void predator(){
    cout << "Ini adalah hewan predator" << endl;
    }

    void taring(){
    cout << "Hewan ini memiliki taring" << endl;
    }

    void cakar(){
    cout << "Hewan ini memiliki cakar" << endl;
    }
};

class Harimau: public Hewan {
    public:
    void predator(){
    cout << "Hewan ini adalah Harimau" << endl;
    }
};

class Singa: public Hewan {
    public:
    void predator(){
    cout << "Hewan ini adalah Singa" << endl;
    }
};

class Macan: public Hewan {
    public:
    void predator(){
    cout << "Hewan ini adalah Macan" << endl;
    }
};

int main() {
    Harimau harimau;
    //harimau.HarimauInfo();
    harimau.predator();
    harimau.taring();
    harimau.cakar();
cout << endl;

    Singa singa;
    //singa.SingaInfo();
    singa.predator();
    singa.taring();
    singa.cakar();
cout << endl;

    Macan macan;
    //macan.MacanInfo();
    macan.predator();
    macan.taring();
    macan.cakar();
cout << endl;

    return 0;
}
# Capture Hasil Running ke 1
![Screenshot (35)](https://github.com/annisayustiani/TugasPemograman/assets/156889081/f281f5e4-b92d-44e2-bf8c-d86db924fa60)
# Capture Hasil Running ke 2
![Screenshot (37)](https://github.com/annisayustiani/TugasPemograman/assets/156889081/de2af139-401e-4b6a-a958-8fc29d9f46f9)
