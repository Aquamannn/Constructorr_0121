#include <iostream>
using namespace std;

class buku {
    string judul;
    public:
    string setget(string jdl) 
    {
        //nilai parameter 'judul' untuk memberikan variable 'judul'
        this->judul = jdl;
        //return variabel judul
        return this->judul;
    }

};

int main(){
    buku bukunya;
    cout << bukunya.setget("English");
    return 0;
}