#include <iostream>

using namespace std;


void prosesBaca () ;
void prosesTukar () ;
void prosesTampil () ;

	int a , b , c, temp;
int main () {
	prosesBaca () ;
	prosesTukar () ;
	prosesTampil () ;
return 0 ;
}
void prosesBaca () {

cout << "masukan nilai a: ";
cin >>a;
cout << "masukan nilai b: ";
cin >>b;
cout << "masukan nilai c: ";
cin >> c ;
}
void prosesTukar () {
temp = a ;
a = b ;
b = c ;
c = temp ;
}
void prosesTampil () {
cout << "nilai a sekarang: "<< a <<endl;
cout << "nilai b sekarang: "<< b <<endl;
cout << "nilai c sekarang: "<< c <<endl;

}
