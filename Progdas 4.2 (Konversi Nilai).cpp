/*Buatlah program konversi nilai huruf dari nilai yang diinputkan user!
	A >> 80-100
	B >> 65-79
	C >> 50-64
	D >> 35-49
	E >> 0-34
*/
#include <iostream>
#include <conio.h>
using namespace std;

main(){
	int nilai;
	string grd;
	char yn;
	
	//memasukkan nilai
	awal :
	cout<<"\n\n Program Konversi Nilai"<<endl;
	cout<<"|======================|"<<endl;
	cout<<"| A -> 80-100          |"<<endl;
	cout<<"| B -> 65-79           |"<<endl;
	cout<<"| C -> 50-64           |"<<endl;
	cout<<"| D -> 35-49           |"<<endl;
	cout<<"| E -> 0-34            |"<<endl;
	cout<<"|======================|"<<endl;
	cout<<" masukkan nilai anda : "; cin>>nilai;
	
	//kasus A-E
	switch(nilai)
	{
		case 80 ... 100: grd="A";
		break;
		case 65 ... 79: grd="B";
		break;
		case 50 ... 64: grd="C";
		break;
		case 35 ... 49: grd="D";
		break;
		case 0 ... 34: grd="E";
		break;
		
		default :cout<<"nilai anda diluar jangkauan. \n";
	}
	
	//tampilan nilai
	cout<<" konversi nilai anda : "<<grd<<endl<<endl;
	cout<<" apakah anda ingin mengkonversi nilai lagi? [Y] atau [N] "; cin>>yn;
	if (yn=='Y' || yn=='y'){
		goto awal;
	} else {
		cout<<"\n Terima kasih, semoga membantu :) "<<endl<<endl;
	}
	
	getch();
}
