#include<stdio.h>
#include<conio.h>

void sortir(int[], int)

int main(){
	int x[size],i,uang,n,k,hasil[size];
	cout << "\n Banyak Koin : ";
	cin >> ("%d", &n);
	cout << ("\n \n Masukan Jenis Koin : \n");
	for (i=1;i<=n;i++){
		cin >> ("\n %d", &x[i]);
	}
	sortir(x,n);
	cout << ("\n Koin yang tersedia : \n");
	for (i=1;i<=n;i++){cout << ("%d",x[i]);
		cout << ("\n");
	}
	cout << ("\n");
	cout << ("\n Masukan Nilai yang dipecah : ");
	cin >> ("%d", &uang);
	cout << ("\n");
	for (i=1;i<=n;i++){
		hasil[i]=uang/x[i];
		uang=uang%x[i];
		  k=uang%x[i];
	}
	for (i=1;i<=n;i++){
		cout << ("Keping %d", x[i]);
		cout << ("-an sebanyak : %d", hasil[i]);
		cout << ("\n \n");
	}
	cout << ("sisanya adalah %d",k);
	getch();
	return 0;



getch();
return 0;
}

void sortir(int[],int){
	int n;
	for (int pass=1;pass<=siz-1;pass++){
		for (int j=0;j<=siz-2;j++){
			if (x[j+1]<x[j+2]){
				n = x[j+1];
				x[j+1]=x[j+2];
				x[j+2]=n;
			}
		}
	}
}