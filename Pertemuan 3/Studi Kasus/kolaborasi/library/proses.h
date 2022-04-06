using namespace std;

class Proses{
  public:
    void hitungtotal1(){
      total1 = 0; total2 = 0; total3 = 0; total4 = 0; total5 = 0;
      for (int i = 1; i <= geprek; i++{
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
      total1 = 21000 * geprek;
			total2 = 17000 * goreng;
			total3 = 19000 * udang;
			total4 = 20000 * cumi;
			total5 = 25000 * bakar;
			total = total1 + total2 + total3 + total4 + total5;
    }
    void hitungtotal2(){
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
    void getdata(){
      ambil_data.open("../dummy/out_input.txt");
      int t;
      while(!ambil_data.eof()){
        ambil_data >> t;
        cout << t << endl;
      }
      ambil_data.close();
    }
  private:
    ifstream ambil_data;
    int total1, total2, total3, total4, total5, total;
};