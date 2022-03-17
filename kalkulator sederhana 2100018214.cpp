#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

void tambah(float a, float b){
	cout<<"hasil"<<a<<" + "<<b<<" = ";
	cout<<a+b;
}
void kurang(float a, float b){
	cout<<"hasil"<<a<<" - "<<b<<" = ";
	cout<<a-b;
}
void kali(float a, float b){
	cout<<"hasil"<<a<<" x "<<b<<" = ";
	cout<<a*b;
}
void bagi(float a, float b){
	cout<<"hasil"<<a<<" / "<<b<<" = ";
	cout<<a/b;
}

int main(){
	float a, b;
	char k;
	int kode;
	
	menu:
	cout<<"PROGRAM KALKULATOR SEDERHANA\n";
	
	cout<<"\n menu operasi\n1. penambah\n2. pengurang\n3. perkali\n4. pembagi\npilih menu no = ";
	cin>>kode;
	cout<<endl;
	
	apa:
	if(kode==1||kode==2||kode==3||kode==4){
		goto bil;
	}
	else{
		
	}
	bil:
	cout<<"\nbilangan pertama = ";
	cin>>a;
	cout<<"\nbilangan kedua = ";
	cin>>b;
	cout<<endl;
	if (kode==1){
	  	tambah(a,b);
	}
	else if(kode==2){
		kurang(a,b);
	}
	else if(kode==3){
		kali(a,b);
	}
	else if(kode==4){
		bagi(a,b);
	}
	else{
		cout<<"salah ";
	}
	akhir :
		cout<<"\n\n TERIMA KASIH \n\n";
}
