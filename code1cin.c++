#include <iostream>
using namespace std;

int main(){
    string aktivitas;
    string tempat;
    int umur;

    cout<<"Apa yang sedang anda lakukan \t: ";
    getline(cin, aktivitas);

    cout<<"Dimana anda melakukannya \t: ";
    getline(cin, tempat);

    cout<<"Berapa umur anda \t: ";
    cin>>umur;

    cout<<"Saya sedang "<<aktivitas<<" di "<<tempat<<" dan saya berumur "<<umur<<" tahun."<<endl;
    return 0;
}
    