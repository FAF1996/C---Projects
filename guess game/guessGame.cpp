#include <iostream>
using namespace std;

int main(){
	cout<<"This is a simple guess game" <<endl;
	int target=6;
	cout<<"U can guess for 3 times"<< endl;
	for(int i=0;i<3;i++){
		cout<<"enter a number to guess "<< endl;
		int guess;
		cin >> guess;
			 if (target<guess){
					 cout <<"Wrong!!! Guess a smaller number" <<endl;
				 }
				 else if (target>guess){
					 cout <<"Wrong!!! Guess a bigger number" <<endl;
				 }
				 else if (target==guess){
					 cout <<"Congratulations !!! this is the correct hidden number." <<endl;
                     break;
				 }
				 else cout <<"Invalid input";
		}
	 return 0;
}