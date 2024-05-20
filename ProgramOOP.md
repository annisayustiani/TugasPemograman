#Program OOP Robot
'''
#include <iostream>
using namespace std;

// Deklarasi kelas
class Robot {
public:
    string nama;
    int umur;
    string mbti;

    // Metode untuk menampilkan informasi
    void perkenalan_diri() {
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << endl;
        cout << "MBTI: " << mbti << endl;
    }
};

int main() {
    // Membuat objek dari kelas Robot
    Robot r1;
    Robot r2;

    // Memberi nilai atribut objek
    r1.nama = "Annisa";
    r1.umur = 19;
    r1.mbti = "INFJ";

    // Memberi objek dari kelas Robot
    r2.nama = "Maudina";
    r2.umur = 19;
    r2.mbti = "ISTJ";

    // Memanggil metode untuk menampilkan informasi
    r1.perkenalan_diri();
    r2.perkenalan_diri();

    return 0;
}
'''
#Capture Hasil Running
![Screenshot (27)](https://github.com/annisayustiani/TugasPemograman/assets/156889081/767715ab-48a6-428a-a58b-aeb2c5f88122)
