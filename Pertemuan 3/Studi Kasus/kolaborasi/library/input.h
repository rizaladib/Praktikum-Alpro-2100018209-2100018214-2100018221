using namespace std;

class Input{
  public:
    void menu(){
      cout << "Selamat Datang Di Rumah Makan Pak Didiks" << endl;
      
      cout << "~~~Menu Rumah Makan Pak Didiks~~~" << endl;
	    cout << "-----------------------------" << endl;
	    cout << "1. Ayam geprek    : Rp. 21000" << endl;
	    cout << "2. Ayam goreng    : RP. 17000" << endl;
	    cout <<	"3. Udang goreng   : Rp. 19000" << endl;
	    cout <<	"4. Cumi goreng    : Rp. 20000" << endl;
	    cout <<	"5. Ayam bakar     : Rp. 25000" << endl;
	    cout << "-----------------------------" << endl;
      
	    cout << "Masukkan jumlah pesanan ayam geprek : "; cin >> geprek;
	    cout << "Masukkan jumlah pesanan ayam goreng : "; cin >> goreng;
	    cout << "Masukkan jumlah pesanan udang goreng : "; cin >> udang;
	    cout << "Masukkan jumlah pesanan cumi goreng : "; cin >> cumi;
	    cout << "Masukkan jumlah pesanan ayam bakar : "; cin >> bakar;
	    cout << "Masukkan jarak rumah anda dalam km : "; cin >> jarak;
	    cout << "-------------------------------------" << endl;
    }
  private:
    int geprek, goreng, udang, cumi, bakar, jarak;
};