#include <iostream>
using namespace std;

struct nilai{
    double fisika;
    double mtk;
    double binggris;
    double informatika;
};

int main(){
    nilai yanto;
    yanto.fisika = 88;
    yanto.mtk = 91;
    yanto.binggris = 85;
    yanto.informatika = 98;

    cout << "Nilai Yanto"<<endl
         << "Fisika \t\t: " << yanto.fisika << endl
         << "MTK \t\t: " << yanto.mtk << endl
         << "Binggris \t: " << yanto.binggris << endl
         << "Informatika \t: " << yanto.informatika << endl;
}