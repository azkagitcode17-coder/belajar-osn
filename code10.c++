#include <iostream>
using namespace std;

int main() {
    double angka1, angka2;
    char operasi;

    cout << "=== proram gabut ===" << endl;
    cout << "Masukkan angka pertama: ";
    cin >> angka1;

    cout << "Masukkan operasi (+, -, *, /): ";
    cin >> operasi;

    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    double hasil;

    switch (operasi) {
        case '+':
            hasil = angka1 + angka2;
            break;
        case '-':
            hasil = angka1 - angka2;
            break;
        case '*':
            hasil = angka1 * angka2;
            break;
        case '/':
            if (angka2 != 0)
                hasil = angka1 / angka2;
            else {
                cout << "Error: Pembagian dengan nol tidak diperbolehkan!" << endl;
                return 1;
            }
            break;
        default:
            cout << "Operasi tidak valid!" << endl;
            return 1;
    }

    cout << "Hasil: " << hasil << endl;
    return 0;
}