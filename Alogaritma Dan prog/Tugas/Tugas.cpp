#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main(){
int baris;
cout << "Berapa Barang yang di beli : ";
cin >> baris;
long harga[baris];

//input harga barang
for(int i=1; i<=baris; i++){
	cout << "Harga Barang " << i << "             : Rp.";
	cin >> harga[i];
	}

//Operasi total harga
long totalharga = 0;
for(int i=1; i<=baris; i++){
	totalharga = totalharga + harga[i];
	}
cout << "Total harga                : Rp." << totalharga  << endl;

//Discount dan sovenir
float discount;
string sovenir;
if(totalharga >= 80000){
		if(totalharga >= 100000) { discount = 20; }
		else if(totalharga >= 90000 && totalharga < 100000 ) { discount = 15; }
		else if(totalharga < 90000 ) { discount = 10; }
		sovenir = "Payung";
		}
else if(totalharga < 80000 ){
		if(totalharga >= 70000 ) { discount = 5; }
		else if(totalharga >= 60000 && totalharga < 70000 ) { discount = 2.5; }
		else if(totalharga >  50000 && totalharga < 60000 ) { discount = 1; }
		else if(totalharga <= 50000 ) { discount = 0; }
		sovenir = "Piring";
		}
		
//Output total
cout << "Discount " << discount << "%                : Rp." << discount*(totalharga/100) << endl;
cout << "Total Yang harus di bayar  : Rp." << totalharga-(discount*(totalharga/100)) << endl;
cout << "Pelanggan mendapatkan      : " << sovenir << endl << endl;
}