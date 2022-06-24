#include "base.h"
using namespace std;

void BaseProject::proses(){
	pInt = pInt - x;
  qInt = qInt - x;
  cout << "1. Nim" <<endl;
  cout << "2. Nama" <<endl;
  cout << "Pilih : "; cin >> pilih;
  if (pilih == 1){
    cout << "Masukan Nim  : "; cin >> cari_nim; 
    for (int n=0; n<x; n++){
      if (cari_nim == *pInt){
        cout<<n+1<<". "<<*pInt<<" ";
        cout<<*(qInt)<<endl;
      }
      pInt++;
      qInt++;
    }
  }
  else if (pilih == 2){
    cin.ignore();
    cout << "Masukan Nama  : "; getline(cin, cari_nama);
    for (int n=0; n<x; n++){
      if (cari_nama == *qInt){
        cout<<n+1<<". "<<*pInt<<" ";
        cout<<*(qInt)<<endl;
      }
      pInt++;
      qInt++;
    }
  }
}