#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
    public:
    //Constructor dengan parameter
    mahasiswa(int nim, string nama); 
};

//devinisi constructor dengan parameter
mahasiswa::mahasiswa(int nim, string nama) {
    cout << "Construktor Dengan parameter terpangil" << endl;
    cout << "Nim : " << nim << endl;
    cout << "Nama : " << nama << endl;
}

int main (){
    //memangil constructor dengan parameter
    mahasiswa mhs(12345, "Ajin");
    return 0;
}


