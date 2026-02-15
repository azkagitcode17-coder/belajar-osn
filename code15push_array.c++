#include <iostream>
using namespace std;

int main(){
    int max = 7;
    int top = -1;
    string lanjut;
    string keranjang[max];

    cout<<"======================================================="<<endl;
    cout<<"Program Storage Keranjang Buah"<<endl;
    cout<<"======================================================="<<endl;

    do {
        if (top == max - 1){
            cout<<"Keranjang Buah telah penuh"<<endl;
            top = -1;
            system("cls");
        } else {
            cout<<"Masukkan nama buah : ";
            cin>>keranjang[++top];
            cout<<"Nama buah anda adalah "<<keranjang[top]<<endl;
            cout<<"Apakah anda ingin menambah buah lagi? (y/t) : ";
            cin>>lanjut;
            system("cls");
            cout<<"======================================================="<<endl;
            for (int i = 0; i <= top; i++){
                cout<<"Buah ke - "<<i<<" : "<<keranjang[i]<<endl;
            }
                cout<<"======================================================="<<endl;
        }
    }while (lanjut == "y" || lanjut == "Y");
            cout<<"Keranjang Buah berhasil disimpan!"<<endl;
}
