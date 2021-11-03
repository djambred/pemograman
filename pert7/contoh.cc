#include <iostream>
#include <string.h>
using namespace std;

class Mahasiswa {
    public:
        string fname;
        string lname;
};

int main(){
    Mahasiswa mhs;
    mhs.fname = "John";
    mhs.lname = "Doe";

    cout<<mhs.fname<<endl;
    cout<<mhs.lname<<endl;
    cout<<mhs.fname + " " + mhs.lname<<endl;
    return 0;
}