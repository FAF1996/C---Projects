#include <iostream>
using namespace std;

int main(){
	cout<<"This program will Calculate the grade of a student" <<endl;
	cout<<"Enter the mark of Subject 1 "<< endl;
	int m1;
	cin >> m1;
	cout<<"Enter the mark of Subject 2 "<< endl;
	int m2;
	cin >> m2;
	cout<<"Enter the mark of Subject 3 "<< endl;
	int m3;
	cin >> m3;
	cout<<"Enter the mark of Subject 4 "<< endl;
	int m4;
	cin >> m4;
	cout<<"Enter the mark of Subject 5 "<< endl;
	int m5;
	cin >> m5;
	int total=m1+m2+m3+m4+m5;
	cout <<"total number is: " << total << endl;
	int average=total/5;
	cout <<"Average number is: " << average << endl;

	 if (average<50){
		 cout <<"Grade is Fail" <<endl;
	 }
	 else if (average>=50 && average<60){
		 cout <<"Grade is D" <<endl;
	 }
	 else if (average>=60 && average<70){
		 cout <<"Grade is C" <<endl;
	 }
	 else if (average>=70 && average<80){
		 cout <<"Grade is B" <<endl;
	 }
	 else if (average>=80 && average<90){
		 cout <<"Grade is A" <<endl;
	 }
	 else if (average>=90 && average<=100){
		 cout <<"Grade is A" <<endl;
	 }
	 else cout <<"Invalid input";
	 return 0;
}