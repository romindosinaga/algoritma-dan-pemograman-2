#include <iostream>
using namespace std;

int main() {
	int angka [10], maks = -999;
	for (int i=0; i<10; i++){
		cout <<"masukan Nilai : ";
		cin>> angka [i];
		if(angka [i] >= maks)
			maks = angka [i];
	}

	cout <<"=======================" <<endl;


	cout<<"Nilai Terbesar adalah : " <<maks<<endl;
	return 0;
}
