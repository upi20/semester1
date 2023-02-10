
/*===============================
//program mengubah nilai desimal ke biner
//simpan dengan nama dec2bin.cpp
#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
using namespace std;


int main(int argc, char const *argv[]){
	if(argc !=2 ){
		cerr <<"Pemakaian : dec2bin angka";
		exit(1);
	}
	int p = atoi(argv[1]), n, i = 0;
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
===============================*/
/*===============================
// beri nama tes.cpp
#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
	for(int a=0; a<argc; a++){
		cout << "argv[" << a << "] = " << argv[a] << endl;
	}
	return 0;
}
===============================*/

/*===============================
int main(int argc, char const *argv[])
{
	.........
}

atau

main(int argc, char const *argv[])
{
	.........
}
===============================*/

/*===============================
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int uang = 10000;
	int &duit = uang;
	cout << "Nilai uang Rp." << uang << endl;
	cout << "Nilai duit Rp." << duit << endl;
	uang = 9000;
	cout << "Uang dibelikan eskrim Rp.1000 nilainya menjadi Rp." << uang << endl;
	cout << "Nilai duit juga berubah menjadi Rp." << duit << endl;
	getch();
	return 0;
}

Keluarannya:
Nilai uang Rp.10000
Nilai duit Rp.10000
Uang dibelikan eskrim Rp.1000 nilainya menjadi Rp.9000
Nilai duit juga berubah menjadi Rp.9000
===============================*/

/*===============================
#include <iostream>
#include <conio.h>
using namespace std;

void ubah(char *x);
int main(){
	char *ptr, nama[5] = "Andi";
	ptr = nama; // ptr sebagai pointer ke variable nama
	cout << "Nama awal: " << nama << endl;
	ubah(ptr);
	cout << "Nama menjadi: " << nama << endl;
	getch();
	return 0;
}
void ubah(char *x){
	*(x+3) = 'y';
}

Keluarannya:
Nama awal: Andi
Nama menjadi: Andy
===============================*/

/*===============================
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	char nama[5] = "Andi";
	cout << "Nama awal: " << nama << endl;
	char*ptr;
	ptr = nama;
	*(ptr+3) = 'y';
	cout << "Nama menjadi: " << nama << endl;
	getch();
	return 0;
}

Keluarannya:
Nama awal: Andi
Nama menjadi: Andy
===============================*/

/*===============================
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int n;
	int array[4] = {10, 20, 30, 40};
	for(n=0; n<4; n++){
		cout << "Array [" << n << "] = " << array[n] << endl;
		cout << "\tMenggunakan pointer = " << *(array+n) << endl;
		cout << "\tDisimpan dalam = " << array+n << endl;
	}
	getch();
	return 0;
}

Keluarannya:
Array [0] = 10
	Menggunakan pointer = 10
	Disimpan dalam = 0x22fe30
Array [1] = 20
	Menggunakan pointer = 20
	Disimpan dalam = 0x22fe34
Array [2] = 30
	Menggunakan pointer = 30
	Disimpan dalam = 0x22fe38
Array [3] = 40
	Menggunakan pointer = 40
	Disimpan dalam = 0x22fe3c
===============================*/

/*===============================
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int n;
	int array[4] = {10, 20, 30, 40};
	for(n=0; n<4; n++){
		cout << "Array [" << n << "] = " << array[n] << endl;
		cout << "\tMenggunakan pointer = " << *&array[n] << endl;
		cout << "\tDisimpan dalam = " << &array[n] << endl;
	}
	getch();
	return 0;
}
Keluarannya:
Array [0] = 10
	Menggunakan pointer = 10
	Disimpan dalam = 0x22fe30
Array [1] = 20
	Menggunakan pointer = 20
	Disimpan dalam = 0x22fe34
Array [2] = 30
	Menggunakan pointer = 30
	Disimpan dalam = 0x22fe38
Array [3] = 40
	Menggunakan pointer = 40
	Disimpan dalam = 0x22fe3c
===============================*/

/*===============================
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int *Andi; // Andi sebagai pointer
	int Budi = 5; // Budi bukan pointer, perhatikan pada *
	Andi = &Budi; //  Isi dari andi yaitu alamat Budi
	cout << "Isi alamat Andi: " << Andi << endl; 
	cout << "Isi alamat Budi: " << Budi << endl; 
	cout << "Isi alamat Budi: " << *Andi << endl;
	cout << "Alamat memori Andi: " << &Andi << endl; 	
	cout << "Alamat memori Budi: " << &Budi << endl; 	
	getch();
	return 0;
}

Keluarannya:
Isi alamat Andi: 0x22fe44
Isi alamat Budi: 5
Isi alamat Budi: 5
Alamat memori Andi: 0x22fe48
Alamat memori Budi: 0x22fe44
===============================*/

/*===============================
#include <iostream>
#include <conio.h>
using namespace std;

void ubah(int x[]);
int main(){
	int ujian[]= {90, 95, 78, 85};
	ubah(ujian);
	cout << "elemen kedua dari array ujian adalah: " << ujian[1] << endl;
	getch()
	return 0;
}

void ubah(int x[]){
	x[1] = 100;
}
===============================*/