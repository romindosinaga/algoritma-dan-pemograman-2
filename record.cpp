#include <iostream>
using namespace std;

typedef struct { 
	int tgl;
	string hari;
	string bulan;
	int tahun;
} tanggal;

int main () { 
	tanggal A;
	cin >> A.tgl;
	cin >> A.hari;
	cin >> A.bulan;
	cin >> A.tahun;

	cout << "data yang dimasukan adalah tanggal " << A.tgl 
		 <<" hari " << A.hari
		 <<" bulan " << A.bulan
		 <<" tahun " << A.tahun << endl;


return 0;
}


//buat lah sebuah program tiket KA
input
nama penumpang 
no ktp
alamat
umur 
gol darah

asal 
tujuan 
jam
tanggal


selamat datang do program kareta api 
===================================
nama penumpang :record 
nama penumpang :
no ktp
alamat
umur 
gol darah

kepergian record
asal 
tujuan 
kereta

jam keberangkatan //record 
	jam 
	menit 
	detik
tanggal //recorc
	tgl
	hari 
	bulan 
	tahun
=======================================
cetak 
	tiket anda adalah 

nama penumpang :
no ktp
alamat
umur 
gol darah

asal 
tujuan 
jam keberangkatan : 17:50:30
tanggal
================================
