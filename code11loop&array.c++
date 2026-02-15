#include <iostream>
using namespace std;

int main(){
   int jml_array;
   cout << "Masukkan jumlah elemen array: ";
   cin >> jml_array;

   int angka[jml_array];
   for(int i = 0; i < jml_array; i++){
    cout << "masukkan index ke -" << i << ": ";
    cin >> angka[i];
   }
    cout << "====================================" << endl;
    cout<< "Elemen array yang anda masukkan adalah: " << endl;
   cout << "=====================================" << endl;

   for(int i = 0; i < jml_array; i++){
    cout << angka[i] << endl;
   }
}