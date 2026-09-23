#include<iostream>
using namespace std;
int main(){

float r;
float pi = 3.14;
cout<<"Enter the radius of circle : ";
cin>>r;

float Area = pi * r * r ;

float Diameter = 2 * r;

float Circumference = 2 * pi * r;

cout<<"\n The Area of circle = "<<Area;
cout<<"\n The Diameter of circle = "<<Diameter;
cout<<"\n The Circumference of circle = "<<Circumference;

return 0;

}


