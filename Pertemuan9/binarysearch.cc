#include <iostream>
using namespace std;

int main(){
    int ArraySize = 8, NumList[8] = {2,5,8,12,15,25,37,57};
    int temp, SearchingElement = 0;
    int start, middle, end, position;

    cout<<"Data Array : "<<endl;
    for (int i=0; i<ArraySize; i++){
        cout<<"Indeks ke-"<<i<<" = "<<NumList[i]<<endl;
    }
    cout<<endl<<endl;
    /*Proses pengurutan data (Digunakan apabila kebutuhan data array yang mau dicari belum diurutkan)*/
    for(int i=1; i<ArraySize; i++){
        for (int j=ArraySize-1; j>=i; j--){
            if(NumList[j]<NumList[j-1]){
                temp = NumList[j];
                NumList[j]=NumList[j-1];
                NumList[j-1]=temp;
            }
        }
    }
    cout<<"Data array setelah diurutkan :"<<endl;
    for(int i=0; i<ArraySize;i++){
        cout<<"Indeks ke-"<<i<<" = "<<endl;
    }
    cout<<endl<<endl;
    cout<<"Masukkan data yang akan anda cari = ";
    cin>>SearchingElement;
    
    //proses pencarian data
    start = 0;
    end = ArraySize-1;
    middle = (start+end)/2;
    position = -1;
    do{
        if(SearchingElement<NumList[middle]){
            end = middle-1;
        }
        else if(SearchingElement>NumList[middle]){
            start = middle+1;
        }
        middle = (start+end)/2;
    }
    while(start<=end && SearchingElement != NumList[middle]);

    if(SearchingElement == NumList[middle]){
        position = middle;
    }

    if(position != -1){
        cout<<"\n\nData "<<SearchingElement<<" berada di indeks ke-"<<position<<endl;
    }
    else
    {
        cout<<"\n\nMaaf, data "<<SearchingElement<<"tidak ada."<<endl;
    }
}