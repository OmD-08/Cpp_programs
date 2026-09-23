#include<iostream>
using namespace std;
int main(){

	int a,b,c;

	cout<<"Enter the length of side a : ";
	cin>>a;

	cout<<"Enter the length of side b : ";
	cin>>b;

	cout<<"Enter the length of side c : ";
	cin>>c;

if ((a + b) > c && (a + c) > b && (b + c) > a) {
		
		if (a == b && b == c) {
			cout << "It is an Equilateral Triangle";
		}
		else if (a == b || b == c || a == c) {
			cout << "It is an Isosceles Triangle";
		}
		else {
			cout << "It is a Scalene Triangle";
		}
	}
	else {
		cout << "You entered wrong sides, please try again";
	}


return 0;
}

