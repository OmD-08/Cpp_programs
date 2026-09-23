#include<iostream>
using namespace std;

int main(){
	float temp;
	
	cout<<"Enter temperature in celsius : ";
	cin>>temp;
	
	temp = (temp * 9/5) + 32;
	
	cout<<"\nThe temperature in fahrenheit is : "<<temp;
	
	return 0;
}

