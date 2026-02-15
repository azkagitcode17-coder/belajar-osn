#include <iostream>
using namespace std;

int main(){
    int sekarang, thn_lahir, umur;
    cout << "Masukkan tahun sekarang: ";
    cin >> sekarang;
    cout << "Masukkan tahun lahir: ";
    cin >> thn_lahir;
    umur = sekarang - thn_lahir;
    cout << "Umur Anda adalah: " << umur << " tahun" << endl;
}