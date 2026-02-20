#include <iostream>
using namespace std;

int rekursif(int n){
    if (n > 0)
    cout << "Halo0" << endl;
    n--;
    rekursif(n);
}

int main(){
    rekursif(5);
    return 0;
}