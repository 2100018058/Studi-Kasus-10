#include "base.h"
using namespace std;

void BaseProject::output(){
	cout<<"***===============================***\n";
	cout<<"============~~~====~~~============" <<endl;
	cout<<"Masukan Data Mahasiswa Berhasil Masuk" <<endl;
	cout<<"     Babak Final Lomba Parmatika     " <<endl;
	cout<<"=====================================" <<endl;
  cout<<"Daftar Mahasiswa : "<<endl;
  cout<<"NO  |    NIM    |    NAMA    "<<endl;
  for (int n=0; n<x; n++){
    cout<<n+1<<".\t\t "<<*(pInt)<<" ";
    pInt++;
    cout<<"\t\t"<<*(qInt)<<endl;
    qInt++;
  }
}