#include <iostream>
using namespace std;

int main(){
    cout << "area calculator" << endl;
    cout << "1. Area for circle" << endl;
    cout << "2. Area for square" << endl;
    cout << "3. Area for rectangle" << endl;
    cout << "4. Area for triangle" << endl;
    int choice;
    double area;
    cout <<"enter the number of your choice: ";
    cin >> choice;
              if (choice ==1){
                cout << " enter the radius of circle " << endl;
                double radius;
                cin >> radius;
                 area =3.1416*radius* radius;
                 cout <<"the area of the circle is :" << area << endl;
              }
            else if (choice ==2){
                cout << " enter the side of square " << endl;
                double side;
                cin >> side;
                 area =side* side;
                 cout <<"the area of the square is :" << area << endl;
              }
            else if (choice ==3){
                cout << " enter the length and breadth of rectangle " << endl;
                double length, breadth;
                cin >> length >> breadth;
                 area =length* breadth;
                 cout <<"the area of the rectangle is :" << area << endl;
              }
              else if (choice ==4){
                cout << " enter the base and height of triangle " << endl;
                double base, height;
                cin >> base >> height;
                 area =0.5*base* height;
                 cout <<"the area of the triangle is :" << area << endl;
              }
              else{
                cout << "invalid choice" << endl;
              }

              
    return 0;
}