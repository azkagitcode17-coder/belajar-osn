#include <iostream>
using namespace std;

int main() {
    cout << "========================================" << endl;
    cout << "GAME TEBAK ANGKA" << endl;
    cout << "========================================" << endl;

    int angkaBenar = 61;   // angka yang harus ditebak
    int tebakan;           // input dari user

    cout << "Masukkan angka: ";
    cin >> tebakan;

    if (tebakan > angkaBenar) {
        cout << "Angka terlalu besar" << endl;
    } else if (tebakan < angkaBenar) {
        cout << "Angka terlalu kecil" << endl;
    } else {
        cout << "Angka benar!" << endl;
    }

    return 0;
}