
/*
no 3
#include <iostream>
#include <conio.h>
using namespace std;
void sayHello(int n=1);

int main(){
	sayHello();
	getch();
	return 0;
}
void sayHello(int n=1){
	for(int m=0; m<n; m++) cout << "Hallo.....\n";
}
*/
/*
no 2
// penggunaan fungsi rekursif
// program menecek bilangan integer atau bukan
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void cekInt(double n);
int main(){
	double angka;
	cout << "Masukan sebuah angka: ";
	cin >> angka;
	cekInt(angka);
	getch();
	return 0;
}
void cekInt(double n){
	if(n>1) cekInt(-1);
	else if(n<1) cekInt(-n-1);
	else{
		if(n>0 && n<1) cout << n << "\t Bukan bilangan bulat \n";
		else cout << n << "\t Bilangan bulat \n";
	}
}

*/
/*
no 1
#include <iostream>
#include <conio.h>
using namespace std;

void sayHello(string nama); // deklarasi fungsinya sayHello()

int main(){
	string n;
	cout << "Masukan nama anda: ";
	getline(cin,n);
	sayHello(n);
	getch();
	return 0;
}

void sayHello(string nama){
	cout << "Selamat datang " << nama;
}
*/
//===========================================================

/*
no 5
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int n;
	for( ; ; ){
		cout << "Masukan bilangan integer: "; cin >> n;
		if(n%2 == 0) continue;
		else if(n%5 == 0) break;
		cout << "Lanjutkan loop selanjutnya. \n";
	}
	cout << "Akhir dari loop. \n";
	getch();
	return 0;
}
*/

/*
no 4
// program membuat segi tiga pascal
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

main(){
	unsinged int n, a, b, x, s[100], p[100];
	cout << "Masukan nilai n: "; cin >> n;

	for(a=0,x=0; a<=0; a++, x+=2){
		cout << setw(3*n-x);
		s[a] = 1;
		p[a] = 1;
		for(b=0; b<=a; b++){
			if(b<1 || b==a) cout << "1" << setw(4);
			else{
				s[b]=p[b];
				p[b]=s[b-1]+s[b];
				cout << p[b] << setw(4);
			}
		}
		cout << endl;
	}
	getch();
	return 0;
}
*/
/*
no 3
#include <iostream>
#include <conio.h>
using namespace std;

//program mencetak angka 1-100
int main(){
	for(int x=1; x<=100; x++) cout << x << endl;
	getch();
	return 0;
}

#include <iostream>
#include <conio.h>
using namespace std;

//program mencetak angka 1-100
int main(){
	for(int x=1; x<=100; x++){
		cout << x << endl;
	}
	getch();
	return 0;
}
*/

/*
no 2
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

//program konversi bilangan desimal ke biner
int main(){
	int p, n, i = 0;
	cout << "Masukan bilangan desimal: ";
	cin >> p;
	double A[100];
	do{
		A[++i] = p%2;
		p = p/2;
		floor(p);
	}while(p>1);
	cout << "Nilai binernya: ";
	cout << p;
	for(n=i; n>=1; n--){
		cout << A[n];
	}
	getch();
	return 0;
}
*/

/*
no 1
#include<iostream>
#include<conio.h>
#define TINGGI 15
#define LEBAR 10
using namespace std;

// program menggambarkan karakter khusus pada sebuah 
// koordinat yang ditentukan
int main(){
	char matrix [TINGGI] [LEBAR];
	int x, y;
	for(y=0; y<TINGGI; y++){
		for(x=0; x<LEBAR; x++){
			cout << "Ketik koordinat dalam bentuk x,y (4 2) .\n";
			cout << "Gunakan bilangan negatif untuk berhenti .\n";
		}
	}

	while(x>=0 && y>=0){
		for(y=0; y<TINGGI; y++){
			for(x=0; x<LEBAR; x++){
			cout << matrix [x] [y];
			}
		cout << "\n\n";
		}
		cout << " koordinat: ";
		cin >> x >> y;
	}
	getch();
	return 0;
}

*/