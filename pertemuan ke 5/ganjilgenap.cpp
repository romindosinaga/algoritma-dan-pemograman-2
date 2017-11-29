#include <iostream>
using namespace std;

int main()
{
    int bil;

    cout << "Masukkan sebuah bilangan: ";
    cin >> bil;

    if (bil % 2){
        cout << "termasuk bilangan ganjil" << endl;
    }else{
        cout << "termasuk bilangan genap" << endl;
    }

    return 0;
}
