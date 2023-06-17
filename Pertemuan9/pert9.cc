#include <iostream>
using namespace std;

int main(){
    int ArraySize = 7, NumList[7] = {19, 27, 5, 99, 88, 32, 72};
    int SearchingElement = 0, flag = -1;

    cout << "Data Array : "<<endl;
    for (int i=0; i<ArraySize; i++){
        cout << "Indeks ke-"<<i<< " = "<<NumList[i]<<endl;
    }
    cout<<endl<<endl;

    cout <<"Masukkan data yang akan dicari = ";
    cin >> SearchingElement;

    //proses pencarian data
    for(int i=0; i<ArraySize; i++){
        if(SearchingElement == NumList[i]){
            flag = i;
            break;
        }
    }
    if(flag != -1){
        cout<<"\n\nData "<<SearchingElement<<" Berada di Indeks ke-"<<flag<<endl;
    }
    else
    {
        cout<<"\n\nMaaf, data "<<SearchingElement<<" tidak ada."<<endl;
    }
}