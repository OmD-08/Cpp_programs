#include<iostream>
using namespace std;
int main(){
float l,b;
cout<<"Enter the length of rectangle : ";
cin>>l;

cout<<endl<<"enter the breadth of rectangle  : ";
cin>>b;

float Area = l * b;

float Perimeter = 2 * l * b;

cout<<"\n The Area of rectangle = "<<Area;
cout<<"\n The Perimeter of rectangle = "<<Perimeter;

return 0;
}
