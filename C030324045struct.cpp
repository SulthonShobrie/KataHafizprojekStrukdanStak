#include <iostream>
#include <conio.h>

using namespace std;

struct Mahasiswa{
    string nim;
    string nama;
    string alamat;
    float ipk;
};

int main(int argc, char const *argv[]){
    Mahasiswa Sulthon;
    Mahasiswa *ptrSulthon = &Sulthon;

     cout << "Masukkan NIM: ";
    cin >> ptrSulthon->nim;
    system("cls");
    cout << "Masukkan Nama: ";
    cin >> ptrSulthon->nama;
    system("cls");
    cout << "Masukkan Alamat: ";
    cin >> ptrSulthon->alamat;
    system("cls");
    cout << "Masukkan ipk: ";
    cin >> ptrSulthon->ipk;
    system("cls");
    cout << "NIM: " << ptrSulthon->nim << endl;
    cout << "Nama: " << ptrSulthon->nama << endl;
    cout << "Alamat: " << ptrSulthon->alamat << endl;
    cout << "IPK: " << ptrSulthon->ipk << endl;
    return 0;
}