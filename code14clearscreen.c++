#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    string nama, jurusan, lanjut;
    cout<<"======================================================="<<endl;
    cout<<"Program Menyimpan Data Jurusan"<<endl;
    cout<<"======================================================="<<endl;
    do {
        system("cls");
        cout<<"Masukkan nama anda    : ";
        cin>>nama;
        cout<<"Masukkan jurusan anda : ";
        cin>>jurusan;
        system("cls");
        cout<<"Nama saya adalah "<<nama<<" dan saya jurusan "<<jurusan<<endl;
        cout<<"Apakah anda ingin memasukkan data lagi? (y/n) : ";
        cin>>lanjut;
    } while (lanjut == "y" || lanjut == "Y");
    cout<<"Data anda berhasil disimpan!"<<endl;
    cout<<"program selesai, terima kasih!"<<endl;
}