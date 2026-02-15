#include <iostream>
using namespace std;

int main(){
    int jml_index;
    cout<<"======================================================="<<endl;
    cout<<"Program Menghitung Rata-Rata"<<endl;
    cout<<"======================================================="<<endl;
    cout << "Masukkan jumlah data : ";
    cin >> jml_index;

    float nilai[jml_index], total, rerata;
    for(int i = 0; i < jml_index; i++){
        cout << "Data ke - "<<i<< " = ";
        cin>>nilai[i];
        total += nilai[i];
    }
    cout << "======= Data nilai ======= " << endl;
    cout << "Total nilai = " << total << endl;
    cout << "Rata-rata = " << total/jml_index << endl;
}