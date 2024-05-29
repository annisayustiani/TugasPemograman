# Modifikasi program dari praktikum dengan membagi proteksi level data menjadi Public dan Private
'''
#include <iostream>
#include <string>

class Mahasiswa {
    // Bagian private hanya dapat diakses oleh member functions dalam kelas ini
private:
    std::string nama;
    int umur;

    // Bagian public dapat diakses dari luar kelas
public:
    // Konstruktor untuk menginisialisasi objek Mahasiswa
    Mahasiswa(std::string n, int u) {
        nama = n;
        umur = u;
    }

    // Setter untuk mengatur nama
    void setNama(std::string n) {
        nama = n;
    }

    // Getter untuk mendapatkan nama
    std::string getNama() {
        return nama;
    }

    // Setter untuk mengatur umur
    void setUmur(int u) {
        umur = u;
    }

    // Getter untuk mendapatkan umur
    int getUmur() {
        return umur;
    }

    // Metode untuk menampilkan informasi Mahasiswa
    void tampilkanInfo() {
        std::cout << "Nama: " << nama << ", Umur: " << umur << std::endl;
    }
};

int main() {
    // Membuat objek Mahasiswa
    Mahasiswa mhs("Caca", 20);

    // Menggunakan metode public untuk mengakses data private
    std::cout << "Informasi awal Mahasiswa:" << std::endl;
    mhs.tampilkanInfo();

    // Mengubah nama dan umur menggunakan setter
    mhs.setNama("Annisa");
    mhs.setUmur(19);

    // Menampilkan informasi yang sudah diubah
    std::cout << "Informasi setelah diubah:" << std::endl;
    mhs.tampilkanInfo();

    return 0;
}
# capture Hasil Running
![image](https://github.com/annisayustiani/TugasPemograman/assets/156889081/78ebca60-0ce5-4705-9c45-78d6569a3dd1)
