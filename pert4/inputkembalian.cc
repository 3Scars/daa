#include <iostream>
using namespace std;

int main(){
    int beli, bayar;
    cout<<"Masukkan jumlah pembelian anda\t: ";
    cin>>beli;
    cout<<"Masukkan jumlah bayar anda\t: ";
    cin>>bayar;
    bayar = bayar-beli;
    cout<<"Kembalian anda adalah\t\t: "<<bayar<<endl;
    return 0; 
}