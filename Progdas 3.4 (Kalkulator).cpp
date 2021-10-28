/*Buatlah program kalkulator menggunakan untuk operasi-operasi sbb :
a. Tambah  d. Bagi
b. Kurang  e. Modulo
c. Kali    */
#include <iostream>
#include <conio.h>
#include <math.h>
#include <string>
using namespace std;

int main(){
	int a, b, pil;
	float hasil;
	char opr, yn;
	
	awal :
	cout<<"\t OPERASI ARITMATIKA"<<endl;
	cout<<"======================================"<<endl;
	cout<<" 1. penjumlahan"<<endl;
	cout<<" 2. pengurangan"<<endl;
	cout<<" 3. perkalian"<<endl;
	cout<<" 4. pembagian"<<endl;
	cout<<" 5. modulus"<<endl<<endl;
	cout<<" masukkan operasinya = "; cin>>pil;
	cout<<" masukkan bilangan pertama "; cin>>a;
	cout<<" masukkan bilangan kedua "; cin>>b;
	
	switch(pil){
		case 1 : hasil=a+b;
			opr='+';
			break;
		case 2 : hasil=a-b;
			opr='-';
			break;
		case 3 : hasil=a*b;
			opr='*';
			break;
		case 4 : hasil=a/b;
			opr='/';
			break;
		case 5 : hasil=a%b;
			opr='%';
			break;
		default :
			cout<<"Operasi yang anda masukkan salah"<<endl;
	}
	
	cout<<"========================================"<<endl;
	cout<<""<<a<<opr<<b<<" = "<<hasil<<endl;
	cout<<"========================================"<<endl<<endl;
	cout<<" apakah anda ingin menghitung dengan kalkulator sederhana lagi? [Y] atau [N] "; cin>>yn;
	if (yn=='Y' || yn=='y'){
		goto awal;
	} else {
		cout<<"\n Terima kasih, semoga membantu :) "<<endl<<endl;
	}
	
	
	getch();
}
