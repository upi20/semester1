#include<iostream>
using namespace std;

int main(){
	int x[99], i, uang, n, k, hasil[99];
	cout << "Banyak Nominal satuan uang: ";
	cin >> n;
	for (int i=1; i<=n; i++){
		input_nominal:
		cout << "Masukan Satuan Nominal uang ke " << i << " : ";
		cin >> x[i];
		if(x[i-1] == x[i]){
			cout << "Nominal Uang yang anda masukan sama\ndengan nominal uang sebelumnya\nSilahkan masukan ualang" << endl;
			goto input_nominal;			
		}
	}
	cout << endl;
	cout << "Satuan Uang yang tersedia:" << endl;
	for (int i=1; i<=n; i++){
		cout << "Satuan unag ke " << i << " : " << x[i] << endl;
	}
	cout << endl;
	cout << "Masukan Jumlah uang: ";
	cin >> uang;
	for (int i=1; i<=n; i++){
		hasil[i]=uang/x[i];
		uang=uang%x[i];
		k=uang%x[i];
	}
	cout << endl;
	for (int i=1; i<=n; i++){
		cout << "Nominal " << x[i];
		cout << "-an sebanyak: " << hasil[i] << endl;
	}
	cout << endl;
	cout << "Sisanya : " << k << endl;
	cin.get();
	return 0;
}