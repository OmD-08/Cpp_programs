#include<iostream>
using namespace std;

int main(){

int x = 10;
int &y = x; //y is reference to x

cout<<"x = "<<x<<endl;
cout<<"y = "<<y<<endl;

y = 20; // changing y

cout<<"After change : "<<endl;
cout<<"x = "<<x<<endl;
cout<<"y = "<<y<<endl;


return 0;
}

