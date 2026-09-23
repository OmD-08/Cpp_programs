#include<iostream>
using namespace std;

inline int square(int x){  // Inline function
	int result = x*x;
	
	return result;
}

float intrest(float principal,int time,float rate = 2.5){ // right to left to define the argument value 
	float s_i;
	s_i = (principal*time*rate) / 100;
	return s_i;
}

int main(){

int num = 9;
int result = square(num);
cout<<"Square of "<<num<<" = "<<result<<endl;

float p;
int t;

cout<<"Enter the principal and time value : ";
cin>>p>>t;

cout<<"Simple Intrest (with default rate = 2.5) = "<<intrest(p,t)<<endl;
cout<<"Simple Intrest (with rate = 5.5) = "<<intrest(p,t,5.5)<<endl;



return 0;
}

