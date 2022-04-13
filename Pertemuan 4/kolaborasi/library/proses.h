using namespace std;

class Proses{
   public:
    void getData(){
      ambil_data.open("api_data.txt");
      bool usaku = true;
      bool jbulan = true;
      while(!ambil_data.eof()){
        if (usaku){
          ambil_data >> saku;
          usaku = false;
        }
        else if(jbulan){
          ambil_data >> bulan;
          jbulan = false;
        }
        else{
          for(i = 0; i < bulan; i++){
            ambil_data >> keluar[i];
          }
        }
      }
      ambil_data.close();
    }
    

    void toFile(){
      tulis_data.open("api_data.txt");
      totalk = 0;
      for (i = 0; i < bulan; i++){
        totalk += keluar[i];
      }
      totalt = saku * bulan;
      sisa = totalt - totalk;
      tulis_data << bulan << endl;
      tulis_data << saku << endl;
      tulis_data << totalt << endl;
      tulis_data << totalk << endl;
      tulis_data << sisa << endl;
      for (i = 0; i < bulan; i++){
        tulis_data << keluar[i] << endl;
        }
      tulis_data.close();
    }
          
  private:
    ifstream ambil_data;
    ofstream tulis_data;
    int i, saku, bulan, keluar[30], totalt, totalk, sisa;
};