using namespace std;

class Output{
  public:
    void cetak(){
      cout << "Struk belanja berhasil dicetak" << endl;
      cout << "======== Struk Belanja ========" << endl;
      cout << "1. Ayam geprek  = " << data_file[0] << endl;
      cout << "2. Ayam goreng  = " << data_file[1] << endl;
      cout << "3. Udang goreng  = " << data_file[2] << endl;
      cout << "4. Cumi goreng  = " << data_file[3] << endl;
      cout << "5. Ayam  bakar  = " << data_file[4] << endl;
      cout << "Total Belanja  = " << data_file[5] << endl;
      cout << "===============================" << endl;
      cout << "Diskon	= " << data_file[6] << endl;
      cout << "Ongkir	= " << data_file[7] << endl;
      cout << "Bayar 	= " << data_file[8] << endl;
      cout << "Kembali	= " << data_file[9] << endl;
    }
    void getData(){
      ambil_data.open("api_data.txt");
      while(!ambil_data.eof()){
        ambil_data >> data_file[index];
        index += 1;
      }
      ambil_data.close();
    }
  private:
    ifstream ambil_data;
    string data_file[30];
    int index = 0; 
};