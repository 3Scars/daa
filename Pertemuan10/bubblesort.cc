#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int temp, NumList[8] = {5, 34, 32, 25, 75, 42, 22, 2};
    cout<<"Data sebelum diurutkan : ";
    for(int i=0; i<8;i++)
    {
        cout<<setw(3)<<NumList[i];
    }
    cout<<endl<<endl;

    //proses pengurutan data
    for(int i=1;i<8;i++)
    {
        for(int j=8-1;j>=1;j--)
        {
            if(NumList[j]<NumList[j-1])//perbandingan data dengan data sebelah kirinya
            {   //penukaran data menggunakan temp
                temp=NumList[j];
                NumList[j]=NumList[j-1];
                NumList[j-1]=temp;
            }
        }
    }
    cout<<"Data setelah diurutkan : ";
    for(int i=0;i<8;i++)
    {
        cout<<setw(3)<<NumList[i];
    }
    cout<<endl<<endl;
}