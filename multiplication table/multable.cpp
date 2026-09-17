#include <iostream>
using namespace std;

int main(){
	cout<<"This program will create a multiplication table" <<endl;
	cout<<"Enter the number for the table "<< endl;
	int number;
	cin >> number;
	 for (int i=1; i<11; i++){
		 cout <<i<<" * "<<number<<" = "<<i*number<<endl;
	 }
	 return 0;
}