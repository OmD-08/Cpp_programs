#include<iostream>
using namespace std;
int main(){

int num;

cout<<"Enter the number : ";
cin>>num;
cout<<"You entered : "<<num<<endl;

if(num>0){
	if(num%2==0){
		cout<<"It is a positive even number\n";
	}
	else{
		cout<<"It is a positive odd number\n";
	}
}
else if(num<0){
	if(num%2==0){
		cout<<"It is a negative even number\n";
	}
	else{
		cout<<"It is a negative odd number\n";
	}
}
else if(num==0){
	cout<<"The number is zero";
}




return 0;
}

