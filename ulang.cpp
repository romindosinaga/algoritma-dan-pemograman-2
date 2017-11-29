#include <iostream>
using namespace std;

int main()
{
    int bil;

    cout << "Masukkan sebuah bilangan ganjil: ";
    cin >> bil;

    while ((bil % 2)==0){
        cout << "masukan sebuah bilangan ganjil:";
        cin >> bil;
   }
    return 0;
}