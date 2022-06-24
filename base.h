#include <iostream>
using namespace std;

class BaseProject{
	public:
		void input();
		void output();
  void proses();
		
	private:	
		int x;
  	int nim [10];
  	string nama [10];
  	int *pInt=nim;
  	string *qInt=nama;
    int cari_nim, pilih;
    string cari_nama;
};

void BaseProject::input(){
	cout << "Masukan jumlah data : ";
  cin >> x;
  for (int i=0; i<x; i++){
    cout<<"Masukkan NIM : "; cin>>nim[i];
    cin.ignore();
    cout<<"Masukkan NAMA: "; getline(cin, nama[i]);
    cout<<endl;
  }
  cout<<endl;
}


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

void BaseProject::proses(){
	pInt = pInt - x;
  qInt = qInt - x;
  cout<<endl<<endl;
  cout << "Search Berdasarkan : " <<endl;
  cout << "=====================" <<endl;
  cout << "1. Nim" <<endl;
  cout << "2. Nama" <<endl;
  cout << "=====================" <<endl;
  cout << "Pilih : "; cin >> pilih;
  cout << "=====================" <<endl;
  if (pilih == 1){
    cout << "Masukan Nim  : "; cin >> cari_nim; 
    cout << "=====================" <<endl;
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
    cout << "=====================" <<endl;
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