```
#include <iostream>
#include <string>
using namespace std;

// Struktur untuk tanaman
struct Tanaman {
    string nama;
    double hargaPerKilogram;
    int jumlahPanenTahunan;
};

// Struktur untuk hewan
struct Hewan {
    string nama;
    int jumlah;
    double hargaPerEkor;
};

// Struktur untuk petani
struct Petani {
    string nama;
    int usia;
    double pendapatanTahunan;
    Tanaman tanamanYangDitanam;
    Hewan hewanYangDipelihara;
};

int main() {
    // Mendefinisikan tanaman, hewan, dan petani
    Tanaman jagung = {"Jagung", 5000.0, 50000};
    Hewan sapi = {"Sapi", 50, 1000.0};
    Petani abdul = {"Abdul", 35, 50000.0, jagung, sapi};
    
    // Menampilkan informasi petani, tanaman, dan hewan
    cout << "Informasi Petani:" << endl;
    cout << "Nama: " << abdul.nama << endl;
    cout << "Usia: " << abdul.usia << " tahun" << endl;
    cout << "Pendapatan Tahunan: Rp " << abdul.pendapatanTahunan << endl << endl;

    cout << "Informasi Tanaman:" << endl;
    cout << "Nama: " << abdul.tanamanYangDitanam.nama << endl;
    cout << "Harga per Kilogram: Rp " << abdul.tanamanYangDitanam.hargaPerKilogram << endl;
    cout << "Jumlah Panen Tahunan: " << abdul.tanamanYangDitanam.jumlahPanenTahunan << " kg" << endl << endl;

    cout << "Informasi Hewan:" << endl;
    cout << "Nama: " << abdul.hewanYangDipelihara.nama << endl;
    cout << "Jumlah: " << abdul.hewanYangDipelihara.jumlah << " ekor" << endl;
    cout << "Harga per Ekor: Rp " << abdul.hewanYangDipelihara.hargaPerEkor << endl;

    return 0;
}
```
#capture hasil running
![Screenshot (8)](https://github.com/annisayustiani/TugasPemograman/assets/156889081/f4b666db-e960-4a01-a268-44f58815d366)
