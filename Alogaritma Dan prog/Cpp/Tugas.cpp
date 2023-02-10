#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main(){
bool lanjut = true;

while(lanjut){
//Program Begin
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

//output diskon + operasi Sovenir
double discount;
string sovenir;
if(totalharga >= 80000){
		if(totalharga >= 100000) { discount = 20; }
		else if(totalharga >= 90000 && totalharga < 100000 ) { discount = 15; }
		else if(totalharga >= 80000 && totalharga < 90000 ) { discount = 10; }
		double  discountRp = discount *(totalharga/100);
		sovenir = "Payung";
		totalharga = totalharga - discountRp;
		cout << "Discount " << discount << "%                : Rp." << discountRp << endl;
		}
else if(totalharga < 80000 ){
		if(totalharga >= 70000 && totalharga < 80000 ) { discount = 5; }
		else if(totalharga >= 60000 && totalharga < 70000 ) { discount = 2.5; }
		else if(totalharga >  50000 && totalharga < 60000 ) { discount = 1; }
		else if(totalharga <= 50000 ) { discount = 0; }
		double  discountRp = discount *(totalharga/100);
		sovenir = "Piring";
		totalharga = totalharga - discountRp;
		cout << "Discount " << discount << "%                : Rp." << discountRp << endl;
		}

//total harga
cout << "Total Yang harus di bayar  : Rp." << totalharga << endl;
cout << "Pelanggan mendapatkan " << sovenir << endl;

//Ulang
char ulang;
cout << "\n\nUlang [Y/T]                : ";cin >> ulang;
if (ulang == 'y' || ulang ==' Y') { lanjut = true; }
else if (ulang == 'T' || ulang == 't') { lanjut = false; }
else { lanjut = false; }
}//End boolean

cout << "\n            Program Kasir Sederhana selesai           " << endl;
cout << "        Isep Lutpi Nur 2113191079 USB YPKP BDG        " << endl;
}//End program