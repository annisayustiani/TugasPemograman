#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
    private:
      int nrp;

    public:
      // Getter untuk mendapatkan nilai nrp
      int getNrp() {
          return nrp;
      }

      // Setter untuk mengatur nilai nrp 
      void setNrp(int a) {
          nrp = a;
      }
};
 
class fakultas {
    public:
      int kode;
};

int main() {
    mahasiswa mhs;
    fakultas fkl;

    // Mengatur nilai nrp
    mhs.setNrp(12345);
    // Mengatur nilai kode
    fkl.kode = 22;

    // Mengakses dan mencetak nilai nrp
    cout <<"NRP : "<< mhs.getNrp() <<endl;
    cout <<"Kode : "<< fkl.kode <<endl;

    return 0;
}