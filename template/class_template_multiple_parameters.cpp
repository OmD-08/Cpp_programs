#include<iostream>
using namespace std;

template <class A, class B = int>
class demo
{
	A a;
	B b;
	public:
		demo(A x, B y)
		{
			a = x;
			b = y;
		}
		
		void show()
		{
			cout << a << " and " << b << endl;
		}
};

int main()
{
	float a;
	int b;
	cout << "Enter the float value: " ;
	cin >> a;
	cout << "Enter the integer value: ";
	cin >> b;
	demo<float> p1(a, b);
	demo<string> p2("Marks: ", 95);
	
	p1.show();
	p2.show();
}
