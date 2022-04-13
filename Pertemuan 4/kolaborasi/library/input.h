using namespace std;

class Input{
  public:
    void cetak(){
      cout << "===== Aplikasi menghitung keuangan bulanan =====" << endl;
      cout << "Masukkan jumlah uang saku bulanan : "; cin >> saku;
      cout << "Masukkan jumlah bulan : "; cin >> bulan;
      cout << "================================================" << endl;
      for (i = 0; i < bulan; i++){
        cout << "Masukkan pengeluaran bulan ke-" << i + 1 << " : "; cin >> keluar[i];
      }
    }
    void toFile(){
      tulis_data.open("api_data.txt");
      tulis_data << saku << endl;
      tulis_data << bulan << endl;
      for(i = 0; i < bulan; i++){
        tulis_data << keluar[i] << endl;
      }
      tulis_data.close();
    }
  private:
    ofstream tulis_data;
    int i, saku, bulan, keluar[30];
};