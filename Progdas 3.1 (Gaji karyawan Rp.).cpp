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

int main(){
	char nama[100], nik[16], yn;
	int klmn, status, kndrn;
	long int pkk, mkn, tnj, trn, ktr, pjk, brs;
	
	awal :
	cout<<"|\t PROGRAM GAJI KARYAWAN\t     |"<<endl;
	cout<<"======================================"<<endl;
	cout<<"| Nama\t: "; gets(nama);
	cout<<"| NIK\t: "; gets(nik);
	cout<<"| Jenis Kelamin\t: "<<endl;
	cout<<"| (0 = Perempuan, 1 = Laki-laki) : "; cin>>klmn;
	cout<<"| Status Pernikahan : "<<endl;
	cout<<"| (0 = single, 1 = menikah) : "; cin>>status;
	cout<<"| Kendaraan\t: "<<endl;
	cout<<"| (0 = motor, 1 = mobil) : "; cin>>kndrn;
	cout<<"| Gaji Pokok\t: Rp."; cin>>pkk;
	cout<<"| Uang Makan\t: Rp."; cin>>mkn;
	
	//Tunjangan
	if (klmn==1 && status==1){
		tnj = 500000;
	}else{
		tnj = 0;
	}
	
	//transport
	if (kndrn==1){
		trn = 1000000;
	}else if(kndrn==0){
		trn = 500000;
	}
	
	//gaji kotor
	ktr=pkk+tnj+mkn+trn;
	
	//pajak
	pjk=0.05*ktr;
	
	//gaji bersih
	brs=ktr-pjk;
	
	cout<<"======================================"<<endl;
	cout<<"| Tunjangan\t: Rp."<<tnj<<endl;
	cout<<"| Transport\t: Rp."<<trn<<endl;
	cout<<"| Gaji Kotor\t: Rp."<<ktr<<endl;
	cout<<"| Pajak\t\t: Rp."<<pjk<<endl;
	cout<<"| Gaji Bersih\t: Rp."<<brs<<endl;
	cout<<"======================================"<<endl<<endl;
	cout<<"apakah anda ingin menghitung gaji lagi? [Y] or [N] : "; cin>>yn;
	cout<<endl<<endl;
	if(yn=='Y' || yn=='y'){
		goto awal;
	}else if(yn=='N' || yn=='n'){
		cout<<"terima kasih sudah menggunakan program gaji karyawan ini"<<endl<<endl;
	}
	
	getch();
}
