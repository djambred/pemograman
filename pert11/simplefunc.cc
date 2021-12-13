#include <iostream>
using namespace std;

void data(){
    string nama [100];
    int i;
    for (i=1; i<=5; i++){
        cout<<"masukkan nama "<<i<<": ";
        cin >> nama[i];
    }
    cout<<"No"<<" | "<<"Daftar Nama\n";
    for (i=1; i<=5; i++){
        cout<<i<<'\t'<<nama[i]<<endl;
    }
}


int main(){
    data();
    return 0;
}