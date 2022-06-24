#include "base.h"
using namespace std;

void BaseProject::input(){
  cout << "Masukan jumlah data : "; cin >> x;
  for (int i=0; i<x; i++){
    cout<<"Masukkan NIM : "; cin>>nim[i];
    cin.ignore();
    cout<<"Masukkan NAMA: "; getline(cin, nama[i]);
    cout<<endl;
  }
  cout<<endl;
}