// tugas PBO //
// Nama kelompok :
// muhammad fahri ramadan
// luthfi fauzan
// azis eko
// ubaedillah rohman
// abdul aziz setiawan
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class plant{
    public:
    int statustumbuh;
    int jumlahair;
    int jumlahpupuk; 
};
class subplant : public plant{
    public:
void beriair();
void beripupuk();
void kondisiTumbuh();
void tumbuh();
void print();
int gettumbuh();
string getimage();
string statustumbuhtext();
};

void subplant::beriair(){
    jumlahair++;
    kondisiTumbuh();
}
void subplant::beripupuk(){
    jumlahpupuk++;
    kondisiTumbuh();
}
void subplant::kondisiTumbuh(){
    if(jumlahair >=3 && jumlahpupuk >=1){
        tumbuh();
    }
}
void subplant::tumbuh(){
    if(statustumbuh<4){
        jumlahair = jumlahair-3;
        jumlahpupuk = jumlahpupuk-1;
        statustumbuh++;
    }
}
void subplant::print(){
	cout<<" "<<statustumbuhtext()<<endl;
    cout<<"jumlah air : "<<jumlahair<<endl;
    cout<<"pupuk : "<<jumlahpupuk<<endl;
}
string subplant::statustumbuhtext(){
    switch(statustumbuh){
        case 0:
        return "benih";
        case 1:
        return "tunas";
        case 2:
        return "tanaman kecil";
        case 3:
        return "tanaman dewasa";
    }
    return "berbunga";
}
int subplant::gettumbuh(){
    return statustumbuh;
}
string subplant::getimage(){
    string timagepath = "img/seed.png";
    switch(statustumbuh){
        case 0:
        timagepath = "img/seed.png";
        break;
        case 1:
        timagepath = "img/sprout.png";
        break;
        case 2:
        timagepath = "img/small.png";
        break;
        case 3:
        timagepath = "img/big.png";
        break;
        case 4:
        timagepath = "img/blossom.png";
        break;
    }
    return timagepath;
}
int main(){
	subplant p;
    int inp;
    do{
        cout<<"massukan 0 untuk memberi air \n 1 untuk memberi pupuk"<<endl; 
		cout<<"999 untuk keluar"<<endl;
		cout<<"Masukkan Pilihan :";
		cin>>inp;
        switch(inp){
            case 0:
            p.beriair();
            break;
            case 1:
            p.beripupuk();
            break;
        }
        p.print();
    }while(inp!=999);
}