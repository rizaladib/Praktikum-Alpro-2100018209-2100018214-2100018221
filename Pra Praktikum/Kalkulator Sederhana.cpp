#include <iostream>
using namespace std;

int main(){
	int a, b, hasil, pilihan;

	cout << "=== Program Kalkulator Sederhana ===" << endl;
	cout << "Pilihan operasi : " << endl;
	cout << "1. Penjumlahan" << endl;
	cout << "2. Pengurangan" << endl;
	cout << "3. Perkalian" << endl;
	cout << "4. Pembagian" << endl;
	cout << "====================================" << endl;
	
	cout << "Masukkan nilai a = "; cin >> a;
	cout << "Masukkan nilai b = "; cin >> b;
	cout << "====================================" << endl;
	
	pilihan :
	cout << "Masukkan pilihan operasi : "; cin >> pilihan;
	cout << "====================================" << endl;
	
	switch(pilihan){
		case 1 :
			hasil = a + b;
			cout << "Nilai " << a << " + " << b << " = " << hasil;
			break;
		case 2 :
			hasil = a - b;
			cout << "Nilai " << a << " - " << b << " = " << hasil;
			break;
		case 3 :
			hasil = a * b;
			cout << "Nilai " << a << " x " << b << " = " << hasil;
			break;
		case 4 :
			hasil = a / b;
			cout << "Nilai " << a << " : " << b << " = " << hasil;
			break;
		default :
			cout << "Masukkan pilihan yang benar!" << endl;
			goto pilihan;
			break;		
	}
	
	return 0;
}
