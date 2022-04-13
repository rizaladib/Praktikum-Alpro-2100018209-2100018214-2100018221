#include <iostream>
#include <fstream>
#include "../library/proses.h"

int main(){
  Proses proses;
  proses.getData();
  proses.hitungtotal();
  proses.hitungtotals();
  proses.cbayar();
  proses.ckembali();
  proses.toFile();
  return 0;
  }