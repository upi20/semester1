//Program Toko ATK

#include<iostream>
using namespace std;

int main()
{
//pena, kode a
//Judul
string a = "Pena";
string aa1 = "Standart";
string aa2 = "Kenko";
string aa3 = "Pilot";
string aa4 = "Joyko";
//harga
int ab1 = 2000;
int ab2 = 3000;
int ab3 = 2000;
int ab4 = 5000;
//Input
int in_a1 = 0;
int in_a2 = 0;
int in_a3 = 0;
int in_a4 = 0;
//Total Input
int t_in_a1 = 0;
int t_in_a2 = 0;
int t_in_a3 = 0;
int t_in_a4 = 0;
//Total harga per barang
int rp_a1 = 0;
int rp_a2 = 0;
int rp_a3 = 0;
int rp_a4 = 0;
//total Per sub
int t_in_a = 0;
int rp_a =0;

//Buku, kode b
//Judul
string b = "Buku";
string ba1 = "Kiki";
string ba2 = "Bigbos";
string ba3 = "Dodo";
string ba4 = "Hello Kitty";
//Harga
int bb1 = 5000;
int bb2 = 8000;
int bb3 = 2500;
int bb4 = 2000;
//Input
int in_b1 = 0;
int in_b2 = 0;
int in_b3 = 0;
int in_b4 = 0;
//Total Input
int t_in_b1 = 0;
int t_in_b2 = 0;
int t_in_b3 = 0;
int t_in_b4 = 0;
//Total harga per barang
int rp_b1 = 0;
int rp_b2 = 0;
int rp_b3 = 0;
int rp_b4 = 0;
//total Per sub
int t_in_b = 0;
int rp_b =0;

//pensil, kode c
//judul
string c = "Pensil";
string ca1 = "Pensil 2B";
string ca2 = "Castle";
//harga
int cb1 = 3000;
int cb2 = 4000;
//Input
int in_c1 = 0;
int in_c2 = 0;
//Total Input
int t_in_c1 = 0;
int t_in_c2 = 0;
//Total harga per barang
int rp_c1 = 0;
int rp_c2 = 0;
//total Per sub
int t_in_c = 0;
int rp_c =0;

//penghapus ,kode d
//Judul
string d = "Penghapus";
string da1 = "Castle Penghapus";
string da2 = "Kenko Penghapus";
//Harga
int db1 = 3000;
int db2 = 2000;
//Input
int in_d1 = 0;
int in_d2 = 0;
//Total Input
int t_in_d1 = 0;
int t_in_d2 = 0;
//Total harga per barang
int rp_d1 = 0;
int rp_d2 = 0;
//total Per sub
int t_in_d = 0;
int rp_d =0;



//tambahan
string rp = " : Rp.";
long totalharga = 0;

//Menu utama
menu:
cout << "Toko ATK - TI 19" << endl;
cout << a << endl;
cout << "1. " << aa1 << rp << ab1 << endl;
cout << "2. " << aa2 << rp << ab2 << endl;
cout << "3. " << aa3 << rp << ab3 << endl;
cout << "4. " << aa4 << rp << ab4 << endl;
cout << b << endl;
cout << "5. " << ba1 << rp << bb1 << endl;
cout << "6. " << ba2 << rp << bb2 << endl;
cout << "7. " << ba3 << rp << bb3 << endl;
cout << "8. " << ba4 << rp << bb4 << endl;
cout << c << endl;
cout << "9. " << ca1 << rp << cb1 << endl;
cout << "10. " << ca2 << rp << cb2 << endl;
cout << d << endl;
cout << "11. " << da1 << rp << db1 << endl;
cout << "12. " << da2 << rp << db2 << endl;
int pilihan;
cout << "    Silahkan masuka no pilihan : ";
cin >> pilihan;
cout << endl;

if(pilihan == 1){
cout << "Anda membeli "<< a << " " << aa1 << endl;
cout << "Jumlah : ";
cin >> in_a1;
t_in_a1=t_in_a1+in_a1;
rp_a1=rp_a1+(in_a1*ab1);
}
else if(pilihan == 2){
cout << "Anda membeli "<< a << " " << aa2 << endl;
cout << "Jumlah : ";
cin >> in_a2;
t_in_a2=t_in_a2+in_a2;
rp_a2=rp_a2+(in_a2*ab2);
}
else if(pilihan == 3){
cout << "Anda membeli "<< a << " " << aa3 << endl;
cout << "Jumlah : ";
cin >> in_a3;
t_in_a3=t_in_a3+in_a3;
rp_a3=rp_a3+(in_a3*ab3);
}
else if(pilihan == 4){
cout << "Anda membeli "<< a << " " << aa4 << endl;
cout << "Jumlah : ";
cin >> in_a4;
t_in_a4=t_in_a4+in_a4;
rp_a4=rp_a4+(in_a4*ab4);
}
else if(pilihan == 5){
cout << "Anda membeli "<< b << " " << ba1 << endl;
cout << "Jumlah : ";
cin >> in_b1;
t_in_b1=t_in_b1+in_b1;
rp_b1=rp_b1+(in_b1*bb1);
}
else if(pilihan == 6){
cout << "Anda membeli "<< b << " " << ba2 << endl;
cout << "Jumlah : ";
cin >> in_b2;
t_in_b2=t_in_b2+in_b2;
rp_b2=rp_b2+(in_b2*bb2);
}
else if(pilihan == 7){
cout << "Anda membeli "<< b << " " << ba3 << endl;
cout << "Jumlah : ";
cin >> in_b3;
t_in_b3=t_in_b3+in_b3;
rp_b3=rp_b3+(in_b3*bb3);
}
else if(pilihan == 8){
cout << "Anda membeli "<< b << " " << ba4 << endl;
cout << "Jumlah : ";
cin >> in_b4;
t_in_b4=t_in_b4+in_b4;
rp_b4=rp_b4+(in_b4*bb4);
}
else if(pilihan == 9){
cout << "Anda membeli "<< c << " " << ca1 << endl;
cout << "Jumlah : ";
cin >> in_c1;
t_in_c1=t_in_c1+in_c1;
rp_c1=rp_c1+(in_c1*cb1);
}
else if(pilihan == 10){
cout << "Anda membeli "<< c << " " << da2 << endl;
cout << "Jumlah : ";
cin >> in_c2;
t_in_c2=t_in_c2+in_c2;
rp_c2=rp_c2+(in_c2*cb2);
}
else if(pilihan ==11){
cout << "Anda membeli " << " " << da1 << endl;
cout << "Jumlah : ";
cin >> in_d1;
t_in_d1=t_in_d1+in_d1;
rp_d1=rp_d1+(in_d1*db1);
}
else if(pilihan == 12){
cout << "Anda membeli "<< " " << da2 << endl;
cout << "Jumlah : ";
cin >> in_d2;
t_in_d2=t_in_d2+in_d2;
rp_d2=rp_d2+(in_d2*db2);
}

//total per sub
//jumlah item
t_in_a = t_in_a1 + t_in_a2 + t_in_a3 + t_in_a4;
t_in_b = t_in_b1 + t_in_b2 + t_in_b3 + t_in_b4;
t_in_c = t_in_c1 + t_in_c2;
t_in_d = t_in_d1 + t_in_d2;
//jumlah harga
rp_a = rp_a1 + rp_a2 + rp_a3 + rp_a4;
rp_b = rp_b1 + rp_b2 + rp_b3 + rp_b4;
rp_c = rp_c1 + rp_c2;
rp_d = rp_d1 + rp_d2;

//Total per barang
for(int i=1; i<=200; i++)
	{
	cout << endl;
	}
cout << "Toko ATK - TI 19" << endl;
cout << a << endl;
cout << "1. " << aa1 << endl;
cout << "   " << t_in_a1 << " X " << ab1 << rp << rp_a1 << endl;
cout << "2. " << aa2 << endl;
cout << "   " << t_in_a2 << " X " << ab2 << rp << rp_a2 << endl;
cout << "3. " << aa3 << endl;
cout << "   " << t_in_a3 << " X " << ab3 << rp << rp_a3 << endl;
cout << "4. " << aa4 << endl;
cout << "   " << t_in_a4 << " X " << ab4 << rp << rp_a4 << endl;
cout << "   Total " << a << " : " << t_in_a << endl;
cout << "   Total harga " << a << rp << rp_a << endl;
cout << b << endl;
cout << "5. " << ba1 << endl;
cout << "   " << t_in_b1 << " X " << bb1 << rp << rp_b1 << endl;
cout << "6. " << ba2 << endl;
cout << "   " << t_in_b2 << " X " << bb2 << rp << rp_b2 << endl;
cout << "7. " << ba3 << endl;
cout << "   " << t_in_b3 << " X " << bb3 << rp << rp_b3 << endl;
cout << "8. " << ba4 << endl;
cout << "   " << t_in_b4 << " X " << bb4 << rp << rp_b4 << endl;
cout << "   Total " << b << " : " << t_in_b << endl;
cout << "   Total harga " << b << rp << rp_b << endl;
cout << c << endl;
cout << "9. " << ca1 << endl;
cout << "   " << t_in_c1 << " X " << cb1 << rp << rp_c1 << endl;
cout << "10. " << ca2 << endl;
cout << "   " << t_in_c2 << " X " << cb2 << rp << rp_c2 << endl;
cout << "   Total " << c << " : " << t_in_c << endl;
cout << "   Total harga " << c << rp << rp_c << endl;
cout << d << endl;
cout << "11. " << da1 << endl;
cout << "   " << t_in_d1 << " X " << db1 << rp << rp_d1 << endl;
cout << "12. " << da2 << endl;
cout << "   " << t_in_d2 << " X " << db2 << rp << rp_d2 << endl;
cout << "   Total " << d << " : " << t_in_d << endl;
cout << "   Total harga " << d << rp << rp_d << endl;

konfirmasi:
char lagi;
cout << "Mau Pesan lagi [Y/T] : ";
cin >> lagi;

if(lagi=='y' || lagi == 'Y')
  {
  for(int i=1; i<=200; i++)
	{
	cout << endl;
	}
  goto menu;
  }

	
}//end