#include <iostream>
using namespace std;
int main()
{
float area, volume;
char r,h;

cout << "Enter the radius \n";
cin >>r;

cout << "Enter the height \n";
cin >> h;

area= 2*3.141592*r*h+2*3.141592*r*r;
volume= 3.141592*r*r*h;

cout <<"The Area of the cylinder is:" <<area <<endl;
cout <<"The Volume of the cylinder is:" << volume <<endl;

}