#include<iostream>
#include<string>
using namespace std;

int sum(int a , int b){
	return a + b ;
}

float average(int a , int b ){
	return (a+b) /2.0 ;
}

string greet(string name){
	return "hello" + name;
}

bool isEven (int num){
	return num % 2 == 0 ; 
}

int main(){
	int a = sum(2,3);
	float b = average(3.4,4.8);
	string c = greet("OM");
	bool d = isEven(26);
	
	cout<<a<<endl<<b<<endl<<c<<endl<<d;
	
return 0;
}

