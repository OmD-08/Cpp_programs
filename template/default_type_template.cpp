#include<iostream>
using namespace std;

template<class T >
T add(T a, T b)
{
	return a + b;
}

inline int square(int x)
{
	return x * x;
}

int main()
{
	int a, b;
	
	cout << "Enter the values: ";
	cin >> a >> b;
	
	cout << "Addition = " << add(a, b) << endl;
	cout << "Square of first number = " << square(a) << endl;
	
	return 0; 
}
