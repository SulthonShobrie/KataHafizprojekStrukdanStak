#include <iostream>

using namespace std;

struct Mahasiswa{
    string nim;
    string nama;
    string alamat;
    float ipk;
};

int main(int argc, char const *argv[]){
    Mahasiswa Sulthon;
    Sulthon.nim = "C030324045";
    Sulthon.nama = "Muhammad Sulthon Shobrie";
    Sulthon.alamat = "Banjarmasin";
    Sulthon.ipk = 8.0;

    cout << "Nama: " << Sulthon.nama << endl;
    cout << "Alamat: " << Sulthon.alamat << endl;
    cout << "NIM: " << Sulthon.nim << endl;
    cout << "IPK: " << Sulthon.ipk << endl;
    return 0;
}