#include <iostream>
using namespace std;

int main(){
    int nilai[] = {1,2,3,4,5,6,7,8,9,10};
    int jml_index = sizeof(nilai)/sizeof(*nilai);
    int dtCari, hasilCari;

    cout<<"======================================================="<<endl;
    cout<<"Program Mencari Nilai di Array"<<endl;
    cout<<"======================================================="<<endl;
    cout<<"Data tersedia : "<< jml_index <<" data"<<endl;
    for(int i = 0; i < jml_index; i++){
        cout<<nilai[i]<<" Index ke -  "<<nilai<<endl;
        cout<<"Mencari nilai : ";
        cin>>dtCari;
        for(int j = 0; j < jml_index; j++){
            if(nilai[j] == dtCari){
                hasilCari = j;
                cout<<"Nilai ditemukan di index ke - "<<hasilCari<<endl;
            }
            cout<<"Index ke - "<<j<<endl;
        }

    }
}