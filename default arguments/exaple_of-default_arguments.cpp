#include<iostream>
using namespace std;

int add(int a,int b = 10){
	
	return a+b;
	
}

int main(){

cout<<add(5)<<endl;  // uses b = 10
cout<<add(5,3)<<endl; // uses b = 3


return 0;
}

