#include<iostream>
using namespace std;
int main(){

int Physics;
int Chemistry;
int Maths;
int English;
int CS;

cout<<"Enter the marks of Physics : ";
cin>>Physics;

cout<<"Enter the marks of Chemistry : ";
cin>>Chemistry;

cout<<"Enter the marks of Maths : ";
cin>>Maths;

cout<<"Enter the marks of English : ";
cin>>English;

cout<<"Enter the marks of CS : ";
cin>>CS;

int total = Physics + Chemistry + Maths + English + CS;

int avg = (Physics + Chemistry + Maths + English + CS) / 5;

cout<<"Your total marks are : "<<total;

cout<<"\nYour average marks are : "<<avg;


return 0;
}

