#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main(){
	system("cls");
	int pecahan[99], pecahan_sama[99], hasil[99];
	int uang, n, sisa, temp, no=0;
	cout << "Banyak Pecahan uang: ";
	cin >> n;
	for (int i=1; i<=n; i++){
		input_nominal:
		cout << "Masukan Pecahan uang ke " << i << " : ";
		cin >> pecahan[i];
		pecahan_sama[i]=pecahan[i];
		for (int j=i; j>0; j--){
			if(pecahan[i] == pecahan_sama[j-1]){
				cout << "Nominal Uang yang anda masukan sama\ndengan nominal uang sebelumnya\nSilahkan masukan ualang" << endl;
				goto input_nominal;			
			}
		}
	}
	for(int a=n-1; a>=1; a--){
		for(int b=1; b<=a; b++){
			if(pecahan[b]>pecahan[b+1]){
				temp=pecahan[b+1];
				pecahan[b+1]=pecahan[b];
				pecahan[b]=temp;
			}
		}
	}
	cout << endl;
	cout << "Pecahan Uang yang tersedia:" << endl;
	for (int i=1; i<=n; i++){
		no++;
		cout << "Pecahan ke " << i << " : "; 
		cout << pecahan[i] << endl;
	}
	cout << pecahan[0];
	cout << endl;
	cout << "Masukan Jumlah uang: ";
	cin >> uang;
	for (int i=n; i>=1; i--){
		hasil[i]=uang/pecahan[i];
		uang=uang%pecahan[i];
		sisa=uang%pecahan[i];
	}
	cout << endl;
	for (int i=n; i>=1; i--){
		cout << "Pecahan " << pecahan[i];
		cout << "-an sebanyak"<<" : " << hasil[i] << endl;
	}
	cout << endl;
	cout << "Sisanya : " << sisa << endl;
	getch();
	return 0;
}

