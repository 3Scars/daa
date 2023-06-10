#include <iostream>
using namespace std;

int main(){
    int iDataJual[4][4];
    cout<<"Input Data penjualan"<<endl;
    cout<<"--------------------"<<endl;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            cout<<"Data ke-"<<i<<"."<<j<<" : ";
            cin>>iDataJual[i][j];
        }
    }
    cout<<endl;
    cout<<"        Data Penjualan pertahun        "<<endl;
    cout<<"======================================="<<endl;
    cout<<"No. \t2001\t2002\t2003"<<endl;
    cout<<"======================================="<<endl;
    for(int i=1;i<=3;i++){
        cout<<i<<"\t";
        for(int j=1;j<=3;j++){
            cout<<iDataJual[i][j]<<"\t";
        }
        cout<<endl;
    }
}