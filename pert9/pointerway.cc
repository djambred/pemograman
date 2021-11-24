#include <iostream>
using namespace std;


int main(){

    string nama = "Jefry";
    string* ptr = &nama;

    cout << nama << endl;
    cout << &nama << endl;

    cout << *ptr << endl;
    *ptr = "Jefry Sunupurwa Asri";

    cout << *ptr << endl;
    cout << nama << endl;
    return 0;
}
