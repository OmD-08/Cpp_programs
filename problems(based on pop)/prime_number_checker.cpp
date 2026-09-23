#include<iostream>
using namespace std;
int main(){

int a;

cout<<"Enter the value : ";
cin>>a;
	
	if(a<0){
		cout<<"Prime number cannot  be negative ";
	}
	
	if(a==1){
		cout<<"1 is not a prime number";
	}
	
	for(int i=2;i<a;i++){
		if(a%i==0){
			cout<<"The number "<<a<<" is not a prime number";
			return 0;
		}
	} 
		
cout<<"The number "<<a<<" is a prime number";
			

return 0;
}
