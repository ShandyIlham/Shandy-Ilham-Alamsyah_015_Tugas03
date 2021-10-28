/*Buatlah program untuk menentukan tahun kabisat dari thun yang iinputkan user.*/
#include <iostream>
#include <conio.h>
using namespace std;

main(){
	int a;
	char yn;
	
	//input tahun
	cout<<"|\t PROGRAM HITUNG KABISAT \t|"<<endl;
	cout<<" ======================================="<<endl;
	awal :
	cout<<"\n masukkan tahun : "; cin>>a;
	
	//tahun kabisat
	if (a%4==0){
		cout<<" Merupakan tahun kabisat"<<endl;
	} else {
		cout<<" Bukan tahun kabisat"<<endl;
	}
	
	cout<<"\n apakah anda ingin menentukan tahun kabisat lagi? [Y] atau [N]"; cin>>yn;
	if (yn=='Y' || yn=='y'){
		goto awal;
	} else {
		cout<<"\n Terima kasih, semoga membantu :)";
	}
	
	getch();
}
