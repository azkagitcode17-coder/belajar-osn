#include <iostream>
using namespace std;

int rekursif(int n){
    if (n > 0)
    cout << "Halo" << endl;
    n--;
    rekursif(n);
}

int main(){
    rekursif(5);
    return 0;
}