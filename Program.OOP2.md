#Program OOP Hewan
'''
#include <iostream>
using namespace std;

// Deklarasi kelas
class Hewan {
public:
    string nama;
    int umur;
    string jenis;
    string asal;
    string ciriciri;

    // Metode untuk menampilkan informasi
    void spesies_hewan() {
        cout << "Nama hewan: " << nama << endl;
        cout << "Umur hewan: " << umur << endl;
        cout << "Jenis hewan: " << jenis << endl;
        cout << "Asal hewan: " << asal << endl;
    }
    void bentuk_hewan() {
        cout << "ciriciri: " << ciriciri << endl;
    }
};

int main() {
    // Membuat objek dari kelas Hewan
    Hewan h1;
    Hewan h2;
    Hewan h3;

    // Memberi nilai atribut objek
    h1.nama = "Dugong";
    h1.umur = 25;
    h1.jenis = "Mamalia";
    h1.asal = "Indonesia";
    h1.ciriciri = "Moncongnya besar";

    // Memberi objek dari kelas Robot
    h2.nama = "Harimau";
    h2.umur = 10;
    h2.jenis = "Mamalia";
    h2.asal = "Sumatra";
    h2.ciriciri = "Kulit loreng coklat";

    // Memberi objek dari kelas Robot
    h3.nama = "Monyet";
    h3.umur = 15;
    h3.jenis = "Ordo Primata_Mamalia";
    h3.asal = "Sulawesi Tengah";
    h3.ciriciri = "Hewan sosial";

    // Memanggil metode untuk menampilkan informasi
    h1.spesies_hewan();
    h1.bentuk_hewan();
    h2.spesies_hewan();
    h2.bentuk_hewan();
    h3.spesies_hewan();
    h3.bentuk_hewan();

    return 0;
}
'''
# Capture Hasil Running
![Screenshot (31)](https://github.com/annisayustiani/TugasPemograman/assets/156889081/e210590e-28d9-4c5a-b7bf-cced5d0a0d99)
