#include <iostream>
#include <string.h>

using namespace std;

int main(){
    
    char firstname [50] = "John";
    char middlename [50] = "Michael";    
    char lastname [50] = "Doe";
    char temp [100];
 
    strcpy(temp, firstname);
    cout<<"STRCPY FUNCTION : "<<temp<<endl;

    strcat(strcat(temp, " "),middlename);
    strcat(strcat(temp, " "),lastname);
    cout<<"STRCAT FUNCTION : "<<temp<<endl;

    int len;
    len = strlen(temp);
    cout<<"STRLEN FUNCTION : "<<len<<endl;

    int fstrcmp;
    fstrcmp = strcmp(firstname,lastname);
    if(fstrcmp == 0){
        cout<<"STRCMP FUNCTION : "<<"SAMA"<<endl;
    }else{
        cout<<"STRCMP FUNCTION : "<<"BEDA"<<endl;
    }

    const char *kata = "John Doe";
    char cari = 'o';
    const char *hasilcari = kata;

    while ((hasilcari = strchr(hasilcari, cari)) != NULL) {
        cout<<"STRCHR FUNCTION : "<<cari<<" DITEMUKAN : "<<hasilcari<<endl;
        ++hasilcari;
    }    
    
    char str[] ="John Doe";
    char * hasil;

    // cari kata "code"
    hasil = strstr(str,"Doe");

    // lalu ubah kata "code" menjad "kode"
    strncpy (hasil, "Doel", 5);
    cout<<"STRSTR FUNCTION : ";
    puts(str);

    return 0;
}