#include<iostream>


using namespace std;



int main(){
	int nilai1,nilai2,op;

	cout<<"\n";
	cout<<"Menu Program matematika sederhana \n";
	cout<<endl;
    cout<<"0. keluar " << endl;
	cout<<"1. Pertambahan(+)"<<endl;
	cout<<"2. Pengurangan(-)"<<endl;
	cout<<"3. Perkalian  (x)"<<endl;
	cout<<"4. Pembagian  (:)"<<endl; 
    cout<<" \n Masukkan angka 1 : ";
	cin>>nilai1;
	cout<<"masukkan angka 2 : ";
	cin>>nilai2;

	cout<<"Pilih operasi yang diinginkan : ";

	cin>>op;
	if (op==1){
		cout<<"Hasil Pertambahan dari adalah : "<<nilai1+nilai2;
	}else if(op==2){
		cout<<"Hasil Pengurangan dari adalah : "<<nilai1 - nilai2;
	}else if(op==3){
		cout<<"Hasil Perkalian dari adalah : "<<nilai1 * nilai2;
	}else if(op==4){
		cout<<"Hasil Pembagian dalah : "<<nilai1 / nilai2;
	}
	cin.get();
	cin.get();
	return 0; 
	
}