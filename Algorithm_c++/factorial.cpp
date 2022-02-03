#include <iostream>

using namespace std;

int main() {
	int factorial=1,number=0;
	
	cout<<"Please enter number: ";
	cin>> number;
	
	for(int i=2; i<=number;i++){
		factorial*=i;
	}
	cout<<factorial;
	
	return 0;
}
