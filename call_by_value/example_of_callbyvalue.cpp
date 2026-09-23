#include<iostream>
using namespace std;

void changeValue(int x){
	x = 50; // Cant change this value outside the function once its defined
	cout<<"The value of X is : "<<x<<endl; 
}

int main(){

int x = 10;
cout<<"Before function call : "<<x<<endl;
changeValue(x);
cout<<"After Function call "<<x;


return 0;
}

