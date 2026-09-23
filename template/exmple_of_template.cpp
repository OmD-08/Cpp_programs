#include<iostream>
using namespace std;


template <class T>

T add(T a, T b){
	return a+b;
}

int main(){

cout<<add(5,25)<<endl;   // int
cout<<add(5.5,2.5)<<endl; //  float
cout<<add(string("Hello "),string("World"))<<endl; // string


return 0;
}

