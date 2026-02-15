#include <iostream>
using namespace std;

int main() {
    cout << "========================================" << endl;
    cout << "PEMBAGIAN" << endl;
    cout << "========================================" << endl;

    int a, b, hasil;
    cout << "Masukkan angka A: ";
    cin >> a;
    cout << "Masukkan angka B: ";
    cin >> b;
    hasil = a % b;
    cout << "Hasil dari sisa pembagian A % B = " << hasil << endl;
    cout << "========================================" << endl;

    return 0;
}