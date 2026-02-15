#include <iostream>
using namespace std;

int main() {
    cout << "========================================" << endl;
    cout <<"Kondisional"<<endl;
    cout << "========================================" << endl;

    int a, hasil;
    cout << "Masukkan angka: ";
    cin >> a;

    hasil = a % 2;
    string kondisi = hasil == 1 ? "Ganjil" : "Genap";
    cout << "Angka " << a << " adalah angka " << kondisi << endl;
}