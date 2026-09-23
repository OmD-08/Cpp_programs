#include<iostream>
using namespace std;

int main(){
int a = 2;
cout<<"The value of a before swapping = "<<a<<endl;
int b = 3;
cout<<"The value of b before swapping = "<<b<<endl;

int temp = a;
a = b;
b = temp;

cout<<"The value of a after swapping = "<<a<<endl;	
cout<<"The value of b after swapping = "<<b<<endl;

return 0;
}
