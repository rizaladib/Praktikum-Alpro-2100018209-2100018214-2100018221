using namespace std;

class Output{
  public:
    void cetak(){
      cout << "Struk belanja berhasil dicetak";
	    cout << "======== Struk Belanja ========" << endl;
   	  cout << "1. Ayam geprek	: " << geprek << " x 21.000 = " << total1 << endl;
  	  cout << "2. Ayam goreng	: " << goreng << " x 17.000 = " << total2 << endl;
  	  cout << "3. Udang goreng	: " << udang << " x 19.000 = " << total3 << endl;
  	  cout << "4. Cumi goreng	: " << cumi << " x 20.000 = " << total4 << endl;
  	  cout << "5. Ayam  bakar	: " << bakar << " x 25.000 = " << total5 << endl;
  	  cout << "Total Belanja	: " << totals << endl;
  	  cout << "===============================" << endl;
   	  cout << "Diskon	= " << diskon << endl;
    	cout << "Ongkir	= " << ongkir2 << endl;
  	  cout << "Bayar 	= " << bayar << endl;
  	  cout << "Kembali	= " << kembali << endl;
    }
  private:
    
};