#include<iostream>
using namespace std;

class B; // Forward decleration
class A{
	
	private:
		int numA;
		
	public:
		A(){
			numA = 5;
		}
		
	friend void add(A,B); //Friend decleration
};

class B{
	
	private:
		int numB;
		
	public:
		B(){
			numB = 10;
	}
	
	friend void add(A,B);		
};

void add(A objA,B objB){
	
	cout<<"Sum = "<<objA.numA + objB.numB<<endl;
	
}

int main(){

A a;
B b;
add(a,b);



return 0;
}

