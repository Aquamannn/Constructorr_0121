#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
    private:
    int nim;
    string nama;
    public:
    mahasiswa();
    mahasiswa(int);
    mahasiswa(string);
    mahasiswa(int iNim, string iNama);
    void cetak();
};

mahasiswa::mahasiswa(int iNim){
    nim = iNim;//definisi hanya NIM
}

mahasiswa::mahasiswa(string iNama){
    nama = iNama;//definisi hanya Nama
}

mahasiswa::mahasiswa(int iNim, string iNama){
    nim = iNim;
    nama = iNama;//definisi NIM dan Nama
}

int main(){
    mahasiswa mhs1(12345);              //hanya NIM
    mahasiswa mhs2("Rahmad");           //hanya nama
    mahasiswa mhs3(12345, "Rahmad");    //hanya NIM dan Nama

    //tampilkan nilai
    cout << "Mahasiswa 1 : "; mhs1.cetak();
    cout << "Mahasiswa 2 : "; mhs2.cetak();
    cout << "Mahasiswa 3 : "; mhs3.cetak();

    return 0;
}