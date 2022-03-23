#include <iostream>
using namespace std;
int main(){
  int goreng,bakar,totalb,totalg,total,diskon = 0,bayar,beli,kembali;
  cout<<"~~~MENU KEDAI AYAM KAMI~~~"<<endl;
  cout<<"=========================="<<endl;
  cout<<"1. Ayam goreng Rp: 17.000"<<endl;
  cout<<"2. Ayam bakar Rp: 21.000"<<endl;
  cout<<"=========================="<<endl;
  cout<<"Jumlah Pesanan Ayam goreng : ";
  cin >> goreng;
  cout<<"Jumlah Pesanan Ayam bakar : ";
  cin >> bakar;
  cout<<"=========================="<<endl;
  
  totalg = 17000 * goreng;
  totalb = 21000 * bakar;
  total = totalg + totalb;
  
  if(total >= 45000){
  	diskon = total * 10/100;
  	bayar = total - diskon;
  }
  else{
  	bayar = total;
  }
  cout << "Total pesanan : " << bayar << endl;
  cout << "Masukkan jumlah uang yang dibayar pembeli : "; cin >> beli;
  kembali = beli - bayar;
  cout<<"=========================="<<endl;
  
  cout << "	Struk Belanja hari ini:	" << endl;
  cout << "1. Ayam goreng : " << goreng << " x 17.000 = " << totalg << endl;
  cout << "2. Ayam bakar : " << bakar << " x 21.000 = " << totalb << endl;
  cout << "Diskon	= " << diskon << endl;
  cout << "Bayar	= " << bayar << endl;
  cout << "Kembali	= " << kembali << endl;
  
  return 0;
}
