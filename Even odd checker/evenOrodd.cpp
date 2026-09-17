#include <iostream>
using namespace std;

int main(){
    cout << "This program checks whether the number is even or odd" << endl;
    cout <<" Enter the Number  : ";
    int number;
    cin >> number;
    if (number % 2 ==0){
        cout << number << " is an even number" << endl;
    }
    else{
        cout << number << " is an odd number" << endl;
    }
    return 0;
}