#include <iostream>

using namespace std;

	int a , b , c, temp;
int main () {

cout << "masukan nilai a: ";
cin >>a;
cout << "masukan nilai b: ";
cin >>b;
cout << "masukan nilai c: ";
cin >> c ;

temp = a ;
a = b ;
b = c ;
c = temp ;

cout << "nilai a sekarang: "<< a <<endl;
cout << "nilai b sekarang: "<< b <<endl;
cout << "nilai c sekarang: "<< c <<endl;

return 0 ;
}
