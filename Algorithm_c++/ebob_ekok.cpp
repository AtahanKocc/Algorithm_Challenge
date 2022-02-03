#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int sayi1,sayi2,buyukSayi;
	
	cout<<"Sayi1: ";
	cin>> sayi1;
	
	cout<<"Sayi2: ";
	cin>> sayi2;
	
	for(int i=1; i<=sayi1*sayi2; i++) {
		if( (i%sayi1==0) && (i%sayi2==0) ){
			cout << "EKOK: " << i;
			break;
		}
	}
	cout<<endl;
	
	if(sayi1>sayi2) {
		buyukSayi = sayi1;
	} else {
		buyukSayi = sayi2;
	}
	
	for(buyukSayi; buyukSayi>0; buyukSayi--) {
		if( (sayi1%buyukSayi==0) && (sayi2%buyukSayi==0) ) {
			cout << "EBOB: " << buyukSayi;
			break;
		}
	}
			
}
