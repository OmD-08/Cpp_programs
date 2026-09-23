#include<iostream>
using namespace std;

int main(){
	int a = 6345;
	int temp = a;
	
	temp = a/1000;
	cout<<temp<<endl;
	a = a%1000;
	
	 temp = a/100;
	cout<<temp<<endl;
	a = a%100;
	
	 temp = a/10;
	cout<<temp<<endl;
	a = a%10;
	
	 temp = a%10;
	cout<<temp<<endl;
	a = a/10;
	
	return 0;
}
