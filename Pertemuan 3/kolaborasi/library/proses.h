using namespace std;

class Proses{
   public:
    void getData(){
      ambil_data.open("api_data.txt");
      bool ageprek = true;
      bool agoreng = true;
      bool ugoreng = true; 
      bool cgoreng = true;
      bool abakar = true;
      while(!ambil_data.eof()){
        if (ageprek){
          ambil_data >> geprek;
          ageprek = false;
        }
        else if (agoreng){
          ambil_data >> goreng;
          agoreng = false;
        }
        else if (ugoreng){
          ambil_data >> udang;
          ugoreng = false;
          }
        else if (cgoreng){
          ambil_data >> cumi;
          cgoreng = false;
          }
        else if (abakar){
          ambil_data >> bakar;
          abakar = false;
          }
        else
          ambil_data >> jarak;
       }
      ambil_data.close();
    }
    void hitungtotal(){
			total1 = 0; total2 = 0; total3 = 0; total4 = 0; total5 = 0;
			for (int i = 1; i <= geprek; i++){
				total1 += 21000;
			}
    		for (int i = 1; i <= goreng; i++){
				total2 += 17000;
  	      	}
     		for (int i = 1; i <= udang; i++){
				total3 += 19000;
        	}
     		for (int i = 1; i <= cumi; i++){
				total4 += 20000;
        	}
      		for (int i = 1; i <= bakar; i++){
				total5 += 25000;
        	}
        	total = total1 + total2 + total3 + total4 + total5;
		}
		void hitungtotals(){
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
		}
		void ckembali(){
			kembali = bayar - totals;
    }
    void cbayar(){
      cout << "Total belanjaan anda adalah : " << totals << endl;
	    cout << "Masukkan jumlah pembayaran : "; cin >> bayar;
    }
    void toFile(){
      tulis_data.open("api_data.txt");
      tulis_data << total1 << endl;
      tulis_data << total2 << endl;
      tulis_data << total3 << endl;
      tulis_data << total4 << endl;
      tulis_data << total5 << endl;
      tulis_data << totals << endl;
      tulis_data << diskon << endl;
      tulis_data << ongkir2 << endl;
      tulis_data << bayar << endl;
      tulis_data << kembali;
      tulis_data.close();
    }
          
  private:
    ifstream ambil_data;
    ofstream tulis_data;
    int geprek, goreng, udang, cumi, bakar, total1, total2, total3, total4, total5, total, jarak, ongkir1, ongkir2, diskon, totals, bayar, kembali;
};