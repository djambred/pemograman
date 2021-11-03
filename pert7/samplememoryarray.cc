#include <iostream>

using namespace std;

int main()
{
    int a [1], i;

    cout << "memory alokasi : "<< sizeof(int)<<endl;

    for (i=0; i<1; i++){
        cout<< "alamat memory : "<<i<<"-"<<&a[i]<<endl; 
    }

    return 0;
}