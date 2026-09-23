#include<iostream>
using namespace std;
int main(){

float time;

cout<<"Enter time in seconds : ";
cin>>time;

cout<<"Time in minutes = "<<time / 60.0;
cout<<"\nTime in hours = "<<time / (60.0 * 60.0);


return 0;
}

