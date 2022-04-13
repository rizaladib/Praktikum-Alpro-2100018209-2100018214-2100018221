using namespace std;

class Input{
  public:
    void cetak(){
      cout << "========== Daftar Menu ==========" << endl;
	    cout << "1. Ayam geprek    : Rp. 21000" << endl;
	    cout << "2. Ayam goreng    : RP. 17000" << endl;
	    cout <<	"3. Udang goreng   : Rp. 19000" << endl;
	    cout <<	"4. Cumi goreng    : Rp. 20000" << endl;
	    cout <<	"5. Ayam bakar     : Rp. 25000" << endl;
	    cout << "=================================" << endl;
	    cout << "Masukkan jumlah pesanan ayam geprek : "; cin >> geprek;
	    cout << "Masukkan jumlah pesanan ayam goreng : "; cin >> goreng;
	    cout << "Masukkan jumlah pesanan udang goreng : "; cin >> udang;
	    cout << "Masukkan jumlah pesanan cumi goreng : "; cin >> cumi;
	    cout << "Masukkan jumlah pesanan ayam bakar : "; cin >> bakar;
	    cout << "Masukkan jarak rumah anda dalam km : "; cin >> jarak;
	    cout << "=================================" << endl;
    }
    void toFile(){
      tulis_data.open("api_data.txt");
      tulis_data << geprek << endl;
      tulis_data << goreng << endl;
      tulis_data << udang << endl;
      tulis_data << cumi << endl;
      tulis_data << bakar << endl;
      tulis_data << jarak;
      tulis_data.close();
    }
  private:
    ofstream tulis_data;
    int geprek, goreng, udang, cumi, bakar, jarak; 
};