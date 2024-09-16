#include<iostream>
using namespace std;

int main(){
int pilihan;
float sisi, panjang, lebar, alas, tinggi, luas;
cout<<"Pilih untuk menghitung luas:"<<endl;
cout<<"1. Persegi"<<endl;
cout<<"2. Persegi Panjang"<<endl;
cout<<"3. Segitiga"<<endl;
cout<<"Masukkan pilihan:"<<endl;
cin>>pilihan;

switch(pilihan){
case 1:
    cout<<"Masukkan panjang sisi persegi:"<<endl;
    cin>>sisi;
    luas = sisi*sisi;
    cout<<"Luas persegi:"<<luas<<endl;
    break;

case 2:
    cout<<"Masukkan panjang persegi panjang:"<<endl;
    cin>>panjang;
    cout<<"Masukkan lebar persegi panjang:"<<endl;
    cin>>lebar;
    luas = panjang*lebar;
    cout<<"Luas persegi panjang:"<<luas<<endl;
    break;

case 3:
    cout<<"Masukkan alas segitiga:"<<endl;
    cin>>alas;
    cout<<"Masukkan tinggi segitiga:"<<endl;
    cin>>tinggi;
    luas = 0.5*alas*tinggi;
    cout<<"Luas segitiga:"<<luas<<endl;
    break;

default :
cout<<"Pilihan tidak valid."<<endl;
break;
}

return 0;
}
