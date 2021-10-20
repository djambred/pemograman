#include<iostream>
using namespace std;
int main()
{
      int n, s, i, j;
      cout << "Masukkan jumlah baris: ";
      cin >> n;
      for (i = n; i >= 1; i--)
      {
            
            for (s = i; s < n; s++)
                  cout << " ";
            
            for (j = 1; j <= i; j++)
                  cout << "* ";
            
            cout << "\n";
      }
      return 0;
}