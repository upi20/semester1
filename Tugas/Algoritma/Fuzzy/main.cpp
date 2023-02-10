#include<iostream>
#include<stdio.h>
#include<conio.h> 

using namespace std;
int main(){
	system("cls");
	int n;
	cout << "Jumlah Peserta: ";
	cin >> n;
	int nilai1[n],nilai2[n],nilai3[n];
	float rata[n],total[n];
		for (int i=1; i<=n; i++){
		cout << "Peserta "<< i << endl;
		in1:
		cout << "  Kesehatan\t:";
		cin >> nilai1[i];
		if(nilai1[i] > 100){
			cout <<"Maaf Nilai lebih Dari 100 "<< endl; goto in1;
		}
		in2:
		cout << "  Fisik\t\t:";
		cin >> nilai2[i];
		if(nilai2[i] > 100){
			cout <<"Maaf Nilai lebih Dari 100 "<< endl; goto in2;
		}
		in3:
		cout << "  Akademik\t:";
		cin >> nilai3[i];
		if(nilai3[i] > 100){
			cout <<"Maaf Nilai lebih Dari 100 "<< endl; goto in3;
		}
		total[i]=nilai1[i]+nilai2[i]+nilai3[i];
		rata[i]=total[i]/3;
	}
	cout << endl << endl;
	cout << "\t\t\tPENGUMUMAN HASIL" << endl;
	cout << "Peserta\tKesehatan\tFisik\tAkademik\tFuzzy Output"<< endl;
	for (int i=1; i<=n; i++){
		cout << i;
		cout << "\t" << nilai1[i];
		cout << "\t\t" << nilai2[i];
		cout << "\t" << nilai3[i];
		cout << "\t\t";
		if (rata[i] < 75 ){
			cout << "T. LULUS";
		}
		else{
			cout << "LULUS";
		}
	cout << endl;
	}
	getch();
	return 0;
}
