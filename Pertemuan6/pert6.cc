#include <iostream>
using namespace std;

int main(){
    int pil,a,b,c;
    char back;
    do{
        cout<<"0. Exit"<<endl;
        cout<<"1. input nilai 1"<<endl;
        cout<<"2. input nilai 2"<<endl;
        cout<<"3. Tambah"<<endl;
        cout<<"4. Kurang"<<endl;
        cout<<"5. Kali"<<endl;
        cout<<"6. Bagi"<<endl;
        cout<<"Input Pilihan : ";
        cin>>pil;
        switch(pil)
        {
        case 0:
            cout<<"Exit";
            break;
        case 1:
            cout<<"Masukkan nilai 1 : ";
            cin>>a;
            break;
        case 2:
            cout<<"Masukkan nilai 2 : ";
            cin>>b;
            break;
        case 3:
            c=a+b;
            cout<<a<<" + "<<b<<" = "<<c<<endl;
            break;
        case 4:
            c=a-b;
            cout<<a<<" - "<<b<<" = "<<c<<endl;
            break;
        case 5:
            c=a*b;
            cout<<a<<" * "<<b<<" = "<<c<<endl;
            break;
        case 6:
            c=a/b;
            cout<<a<<" / "<<b<<" = "<<c<<endl;
            break;
        default:
            cout<<"Pilihan salah"<<endl;
            break;
        }
        cout<<"Pilih kembali? (y/n)"<<endl;
        cin>>back;
    }while(back !='n');
    cout<<"thanks"<<endl;
    return 0;
}
/*
if else, do while, while memiliki kondisi yang jelas
kalau for memiliki kondisi yang tidak jelas
*/