#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int temp, pos, NumList[8] = {5, 34, 32, 25, 75, 42, 22, 2};
    cout<<"Data sebelum diurutkan : ";
    for(int i=0; i<8;i++)
    {
        cout<<setw(3)<<NumList[i];
    }
    cout<<endl<<endl;

    //proses pengurutan data
    for(int i=0;i<8;i++)
    {
        pos=i;

        for(int j=i+1;j<8;j++)
        {
            if(NumList[j]<NumList[pos])
            {
                pos=j;
            }
        }
        if(pos != 1)
        {
            temp=NumList[pos];
            NumList[pos]=NumList[i];
            NumList[i]=temp;
        }
    }
    cout<<"Data setelah diurutkan : ";
    for(int i=0;i<8;i++)
    {
        cout<<setw(3)<<NumList[i];
    }
    cout<<endl<<endl;
}