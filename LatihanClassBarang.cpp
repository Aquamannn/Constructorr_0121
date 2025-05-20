#include <iostream>
using namespace std;

class Barang {
private:
    string namaBarang;
    string kodeBarang;
public:
    Barang(string nama, string kode);
    void tampilkanInfo();
};

Barang::Barang(string nama, string kode) {
    namaBarang = nama;
    kodeBarang = kode;
}

void Barang::tampilkanInfo() {
    cout << "Nama Barang: " << namaBarang << endl;
    cout << "Kode Barang: " << kodeBarang << endl;
}

int main() {
    Barang barang1("GTR", "HND001");
    Barang barang2("Corolla", "TYT001");
    barang1.tampilkanInfo();
    barang2.tampilkanInfo();

    return 0;
}

