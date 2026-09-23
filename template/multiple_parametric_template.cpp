#include<iostream>
using namespace std;

template <class T1, class T2>

T2 add(T1 a, T2 b){
	cout<<a<<" + "<<b<<" = "<<a+b<<endl;
	return a+b;
} 

template <class T1,class T2>
T1 display(T1 a,T2 b){
	cout<<a<<" "<<b<<endl;
	return a+b;
}
int main(){

add(10,2.5);
display("Age : ",21);


return 0;
}

