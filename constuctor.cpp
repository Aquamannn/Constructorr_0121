#include <iostream>
using namespace std;

class mahasiswa{
public:
mahasiswa(); //Constructor Mahasiswa
};

mahasiswa::mahasiswa(){
    cout << "Constructor terpanggil" << endl; //Definisi Constructor
};

int main(){
    mahasiswa mhs; //Pembuatan objek
    return 0;
}
