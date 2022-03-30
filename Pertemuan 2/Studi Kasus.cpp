#include <iostream>
#include <fstream>
using namespace std;

int main(){
	int geprek, goreng, udang, cumi, bakar, total1, total2, total3, total4, total5, total, jarak, ongkir1, ongkir2, diskon, totals, bayar, kembali;
	ofstream struk;
	struk.open("struk.txt");
	
	cout << "======= Daftar Menu =======" << endl;
	cout << "1. Ayam geprek    : Rp. 21000" << endl;
	cout << "2. Ayam goreng    : RP. 17000" << endl;
	cout <<	"3. Udang goreng   : Rp. 19000" << endl;
	cout <<	"4. Cumi goreng    : Rp. 20000" << endl;
	cout <<	"5. Ayam bakar     : Rp. 25000" << endl;
	cout << "===========================" << endl;
	cout << "Masukkan jumlah pesanan ayam geprek : "; cin >> geprek;
	cout << "Masukkan jumlah pesanan ayam goreng : "; cin >> goreng;
	cout << "Masukkan jumlah pesanan udang goreng : "; cin >> udang;
	cout << "Masukkan jumlah pesanan cumi goreng : "; cin >> cumi;
	cout << "Masukkan jumlah pesanan ayam bakar : "; cin >> bakar;
	cout << "Masukkan jarak rumah anda dalam km : "; cin >> jarak;
	cout << "===========================" << endl;
	 
	total1 = 21000 * geprek;
	total2 = 17000 * goreng;
	total3 = 19000 * udang;
	total4 = 20000 * cumi;
	total5 = 25000 * bakar;
	total = total1 + total2 + total3 + total4 + total5;
	
	if(jarak <= 3){
		ongkir1 = 15000;
	}
	else{
		ongkir1 = 25000;
	}
	if (total <=24999){
		ongkir2 = ongkir1;
		diskon = 0;
		totals = total + ongkir2;
	}
	else if(total >= 25000 && total <= 49999){
		ongkir2 = ongkir1 - 3000;
		diskon = 0;
		totals = total + ongkir2;
	}
	else if(total >= 50000 && total <= 149999){
		ongkir2 = ongkir1 - 5000;
		diskon = (total * 15 / 100);
		totals = total - diskon + ongkir2;
	}
	else if (total >= 150000){
		ongkir2 = ongkir1 - 8000;
		diskon = (total * 35 / 100);
		totals = total - diskon + ongkir2;	
	}
	
	cout << "Total belanjaan anda adalah : " << totals << endl;
	cout << "Masukkan jumlah pembayaran : "; cin >> bayar;
	kembali = bayar - totals;
	cout << "Struk belanja berhasil dicetak";
	
	struk << "===== Struk Belanja =====" << endl;
 	struk << "1. Ayam geprek	: " << geprek << " x 21.000 = " << total1 << endl;
  	struk << "2. Ayam goreng	: " << goreng << " x 17.000 = " << total2 << endl;
  	struk << "3. Udang goreng	: " << udang << " x 19.000 = " << total3 << endl;
  	struk << "4. Cumi goreng	: " << cumi << " x 20.000 = " << total4 << endl;
  	struk << "5. Ayam  bakar	: " << bakar << " x 25.000 = " << total5 << endl;
	cout << "==========================" << endl;
	struk << "Total belanja	= " << totals << endl;
  	struk << "Diskon	= " << diskon << endl;
  	struk << "Ongkir	= " << ongkir2 << endl;
  	struk << "Bayar 	= " << bayar << endl;
  	struk << "Kembali	= " <<kembali << endl;
  	
 	struk.close();
	return 0; 	
}
