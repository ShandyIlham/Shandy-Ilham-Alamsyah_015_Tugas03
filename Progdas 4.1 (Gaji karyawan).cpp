/* Buatlah program untuk menghitung gaji karyawan, Dengan ketentuan sbb:
 - Input : Nama karyawan (bisa memuat spasi, contoh: rendra rena); NIK; Jenis kelamin[0=Perempuan,1=laki-laki]; Status pernikahan[0=single,1=menikah]
		   Kendaraan[0=motor,1=mobil]; Gaji pokok; Uang makan
 - Output: 1. Tunjangan dengan syarat : Jika jenis kelamin laki-laki dan status menikah maka mendapat 500 selain itu
			  tunjangan 0
		   2. Transport dengan syarat : jika kendaraan mobil maka mendapat 1000; jika kendarran motor maka mendapat 500; jika selain itu maka 0
		   3. Gaji kotor = gaji pokok + tunjangan + uang makan + transport
		   4. Pajak = 5% dari gaji kotor -> 0.05*gaji kotor
		   5. Gaji bersih = gaji kotor - pajak */
#include <iostream>
#include <conio.h>
using namespace std;

main(){
	char nama[200], nik[16];
	int jklmn, status, kndrn;
	long double gajipk, uangmkn, tnjngn, trnspt, gajikt, pjk, gajibr;
	
	//input
	cout<<"\n\t PROGRAM GAJI KARYAWAN"<<endl;
	cout<<"============================================"<<endl;
	cout<<" Nama : "; gets(nama);
	cout<<" NIK : "; gets(nik);
	cout<<"--------------------------------------------"<<endl;
	cout<<" Jenis kelamin"<<endl;
	cout<<" (0 = Perempuan / 1 = Laki-laki) : "; cin>>jklmn;
	cout<<"\n Status pernikahan"<<endl;
	cout<<" (0 = single / 1 = menikah) : "; cin>>status;
	cout<<"\n Kendaraan"<<endl;
	cout<<" (0 = motor / 1 = mobil) : "; cin>>kndrn;
	cout<<"--------------------------------------------"<<endl;
	cout<<" Gaji pokok : US$"; cin>>gajipk;
	cout<<" Uang makan : US$"; cin>>uangmkn;
	cout<<"============================================"<<endl;
	
	//tunjangan
	if(jklmn==1 && status==1){
		tnjngn = 500;
	}
	else{
		tnjngn = 0;
	}
	
	//transport
	if(kndrn==1){
		trnspt = 1000;
	}
	else if(kndrn==0){
		trnspt = 500;
	}
	
	//gaji kotor
	gajikt=gajipk+tnjngn+uangmkn+trnspt;
	
	//pajak
	pjk=(0.05*gajikt);
	
	//gaji bersih
	gajibr=gajikt-pjk;
	
	cout<<" Tunjangan\t= US$ "<<tnjngn<<endl;
	cout<<" Uang Transport\t= US$ "<<trnspt<<endl;
	cout<<" Gaji Pokok\t= US$ "<<gajikt<<endl;
	cout<<" Pajak\t\t= US$ "<<pjk<<endl;
	cout<<" Gaji Bersih\t= US$ "<<gajibr<<endl;
	
	getch();
}
