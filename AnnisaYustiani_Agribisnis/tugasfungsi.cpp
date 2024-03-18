#include <iostream>

// Deklarasi fungsi
double hitungLuasPersegiPanjang(double panjang, double lebar);
double hitungKelilingPersegiPanjang (double panjang, double lebar);

int main() {
    // Meminta pengguna memasukkan panjang dan lebar
    double panjang;
    std::cout << "Masukkan panjang persegi panjang: ";
    std::cin >> panjang;

    double lebar;
    std::cout << "Masukkan lebar persegi panjang: ";
    std::cin >> lebar;

    // Memanggil fungsi untuk menghitung luas dan keliling persegi panjang
    double  luas = hitungLuasPersegiPanjang(panjang,lebar);
    double keliling = hitungKelilingPersegiPanjang(panjang,lebar);

    // Menampilkan hasil
    std::cout << "Luas persegi panjang: " << luas << std::endl;
    std::cout << "Keliling persegi panjang: " << keliling << std::endl;

    return 0;
}

// Implementasi fungsi menghitung luas persegi panjang
double hitungLuasPersegiPanjang(double panjang, double lebar) {
    return panjang * lebar;
}

// Implementasi fungsi menghitung keliling persegi panjang
double hitungKelilingPersegiPanjang(double panjang, double lebar) {
    return 2 * (panjang * lebar); 
}
