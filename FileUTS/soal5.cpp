# include <iostream>

using namespace std;

int main (){
    int n, s, i, j;
    cout << "masukan Jumlah baris : ";
    cin >> n;

    for (i = 1; i<=n ; i++){
        for (s=1; s<n; s++ )
        cout << " ";
        for ( j=1 ; j<=i ; j++)
        cout << "*" ;
        cout << "\n";
    }
    cout << " sebuah perulangan dimana menampilakan pola yang dibentuk sesuai dengan baris dan jumlah yang di berikan oleh user " << endl ;
    return 0;
}
