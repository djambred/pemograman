#include <iostream>

using namespace std;

int main(){
    int nil1=1, nil2=2;
    int *ptr;
    ptr=&nil1;
    *ptr=10;
    ptr=&nil2;
    *ptr=20;
    cout<<"nilai 1 = "<<nil1<<" dan nilai 2 = "<<nil2<<endl;

    cout<<"jumlah = "<<nil1+nil2<<endl;
    
}