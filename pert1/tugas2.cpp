#include <iostream>
using namespace std;
int main (){
    double tahun,lahir,umur;
    cout << "Masukan tahun lahir anda " ;
    cin >> tahun ;
    cout << "masukan Tahun sekarang " ;
    cin >> lahir ;
    umur = lahir - tahun ;
    cout << "Berarti usia kalian saat ini adalah " << umur << endl ;
    return 0;
}