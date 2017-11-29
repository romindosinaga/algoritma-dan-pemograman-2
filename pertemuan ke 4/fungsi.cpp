#include <iostream>

using namespace std;

int maks (int a,int b);

int main() {
		
	cout << "nilai terbesar : "<<maks (60,20);
	return 0;
}

	int maks (int a ,int b) {
		if( a > b){
		return a;
	}
	else if (a < b);{
		return b;
	}

}
