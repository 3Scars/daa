#include <iostream>
#include "clock.cc"
using namespace std;

int main(int argc, char const *agrv[]){
    Clock t;

    int jamInput = 0, menitInput = 0, detikInput = 0;
    cout<<"Jam : "<<endl;
    cin>>jamInput;
    cout<<"Menit : "<<endl;
    cin>>menitInput;
    cout<<"Detik : "<<endl;
    cin>>detikInput;

    t.setWaktu(jamInput, menitInput, detikInput);
    cout<<endl;
    cout<<t.getJam()<<":"
        <<t.getMenit()<<":"
        <<t.getDetik()<<endl;
    
    cout<<"Tambahkan Jam"<<endl;
    t.tambahJam();
    t.tambahMenit();
    t.tambahDetik();
    cout<<endl;

    return 0;
}