#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <conio.h>
using namespace std;


int main(){
  const int MAX(20); //nilai maksimal dari variabel
  double gas[ MAX ]; //jumlah gas ukuran tabung
  long miles [ MAX ]; //pembacaan odometer
  int count(0); //loop counter
  char indicator('y'); //input indicator

  while(('y'==indicator || 'Y'==indicator) && count<MAX){
    cout << endl << "Masukkan jumlah gas: ";
    cin >> gas[count]; //read odometer value
    ++count;
    cout << "Apakah anda akan menambah data ( y or n)? ";
    cin >> indicator;
  }
   // count = 1 setelah 1 data dimasukkan
  if(count<1){
    cout << endl << "Sorry - data anda kurang dari 2.";
    return 0;
  }
  //output result from 2nd entry to last entry
  for(int i=1; i<count; i++){
  cout << endl << setw(2) << i << "."//output sequence number
  << "gas terjual = " << gas[i] << " gallons " //output gas
  << "menghasilkan "//output miles per gallon
  << (miles[i] - miles[i-1])/gas[i] << " miles per gallon.";}
  cout  << endl;
  getch();
  return 0;
}