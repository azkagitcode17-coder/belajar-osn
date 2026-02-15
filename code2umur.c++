#include <iostream>
using namespace std;

int main(){
    string tahun_lahir;
    string tahun_ini;
    int hasil;
    
    cout<<"========================================"<<endl;
    cout << "PROGRAM MENGHITUNG UMUR ANDA"<< endl;
    cout<<"========================================"<<endl;
    cout << "Masukkan Tahun Lahir Anda \t: ";
    cin >> tahun_lahir;
    cout<<"> Tahun Lahir Anda Adalah tahun " << tahun_lahir << endl;
    cout << "Masukkan Tahun Sekarang \t: ";
    cin >> tahun_ini;
    cout<<"> Tahun Sekarang Adalah tahun " << tahun_ini << endl;
    cout<<"========================================"<<endl;
    hasil = stoi(tahun_ini) - stoi(tahun_lahir);
    cout << "Tahun "<<tahun_ini<<" anda berumur = "<<hasil<<" tahun"<<endl;
    return 0;
}