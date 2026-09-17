#include <iostream>
using namespace std;

int main(){
	cout<<"This program will Calculate the grade of a student" <<endl;
	cout<<"Enter the everage mark of the student "<< endl;
	int mark;
	cin >> mark;
	 if (mark<50){
		 cout <<"Grade is Fail" <<endl;
	 }
	 else if (mark>=50 && mark<60){
		 cout <<"Grade is D" <<endl;
	 }
	 else if (mark>=60 && mark<70){
		 cout <<"Grade is C" <<endl;
	 }
	 else if (mark>=70 && mark<80){
		 cout <<"Grade is b" <<endl;
	 }
	 else if (mark>=80 && mark<90){
		 cout <<"Grade is A" <<endl;
	 }
	 else if (mark>=90 && mark<=100){
		 cout <<"Grade is D" <<endl;
	 }
	 else cout <<"Invalid input";
	 return 0;
}