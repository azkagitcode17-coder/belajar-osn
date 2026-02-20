#include <iostream>
using namespace std;

void siswa (){
    string nama = "Yanto";
    string umur = "25";
    cout << "Nama : " << nama << endl;
    cout << "Umur : " << umur << endl;
}

string siswi(){
    string nama = "Yanti";
    string umur = "26";
    return (nama+ " umur : " + umur);
}

int main(){
    siswa();
    cout << siswi() << endl;
    return 0;
}

