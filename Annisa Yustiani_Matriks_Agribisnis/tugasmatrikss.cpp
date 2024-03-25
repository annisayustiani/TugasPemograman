#include <iostream>

int main() {
    // Deklarasi dan inisialisasi array sekaligus
    int nilai[] = {2, 5, 3, 2, 4};

    // Menampilkan nilai array dengan indeks menggunakan looping for
for (int i = 0; i < 5; ++i) {
        std::cout << "Nilai dari index-" << i << " : " << nilai[i] << std::endl;
}
    
    return 0;
}
