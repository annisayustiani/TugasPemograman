# Modifikasi P10 Program P10 dengan Membagi Proteksi Level Data menjadi Public dan Private
'''
#include <iostream>
#include <string>

using namespace std;

class Dugong {
private:
    string nama;
    string karakter;
    string jenis;
    string asal;
    int umur;

public:
    // Constructor
    Dugong(string nama, string karakter, string jenis, string asal, int umur) {
        this->nama = nama;
        this->karakter = karakter;
        this->jenis = jenis;
        this->asal = asal;
        this->umur = umur;
    }

    // Getter untuk nama
    string getNama() const {
        return nama;
    }

    // Setter untuk nama
    void setNama(const string& newNama) {
        nama = newNama;
    }

    // Getter untuk ciri-ciri
    string getKarakter() const {
        return karakter;
    }

    // Setter untuk ciri-ciri
    void setKarakter(const string& newKarakter) {
        karakter = newKarakter;
    }

    // Getter untuk jenis
    string getJenis() const {
        return jenis;
    }

    // Setter untuk jenis
    void setJenis(const string& newJenis) {
        jenis = newJenis;
    }

    // Getter untuk asal
    string getAsal() const {
        return asal;
    }

    // Setter untuk asal
    void setAsal(const string& newAsal) {
        asal = newAsal;
    }

    // Getter untuk umur
    int getUmur() const {
        return umur;
    }

    // Setter untuk umur
    void setUmur(int newUmur) {
        umur = newUmur;
    }
};

int main() {
    // Membuat objek Dugong
    Dugong myDugong("Dugy", "Berwarna abu-abu dengan perut putih, memiliki tubuh pipih, moncongnya besar dan ekor berbentuk seperti sabit", "Mamalia", "Perairan Hangat Indonesia", 10);

    // Menampilkan informasi Dugong
    cout << "Nama: " << myDugong.getNama() << endl;
    cout << "Karakter: " << myDugong.getKarakter() << endl;
    cout << "Jenis: " << myDugong.getJenis() << endl;
    cout << "Asal: " << myDugong.getAsal() << endl;
    cout << "Umur: " << myDugong.getUmur() << " tahun" << endl;

    // Mengubah umur Dugong
    myDugong.setUmur(11);

    // Menampilkan informasi Dugong setelah perubahan umur
    cout << "\nSetelah perubahan umur:" << endl;
    cout << "Umur: " << myDugong.getUmur() << " tahun" << endl;

    return 0;
}
# Capture Hasil Running
![Screenshot (28)](https://github.com/annisayustiani/TugasPemograman/assets/156889081/94d3b787-a7fd-4660-abe9-f0b29ed69479)
