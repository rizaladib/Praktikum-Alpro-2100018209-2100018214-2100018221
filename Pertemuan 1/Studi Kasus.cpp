#include <iostream>
using namespace std;
int main(){
  int goreng,bakar,total,bayar;
  cout<<"~~~MENU KEDAI AYAM KAMI~~~"<<endl;
  cout<<"=========================="<<endl;
  cout<<"1. Ayam goreng Rp: 17.000"<<endl;
  cout<<"2. Ayam bakar Rp: 21.000"<<endl;
  
  cout<<"Jumlah Pesanan Ayam goreng : ";
  cin>>goreng;
  cout<<"Jumlah Pesanan Ayam bakar : ";
  cin>>bakar;
  
  total = (17000 * goreng) + (21000 * bakar);
  if(total >= 45000){
  	bayar = total - total * 10/100;
  }
  else{
  	bayar = total;
  }
}
