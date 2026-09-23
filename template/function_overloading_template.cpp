#include<iostream>
using namespace std;

template<class T>
class Base
{
	public:
		virtual void show(T value)							//virtual function
		{
			cout << "Base class: Value = " << value << endl;
		}
};

template<class T>
class Derived : public Base<T>
{
	public:
		virtual void show(T value)
		{
			cout << "Derived class: value = " << value << endl;
		}
};

int main()
{
	Base <int> *ptr;
	Derived <int> d;
	ptr = &d;
	ptr -> show(10);
	(*ptr).Base<int> :: show(50);
	
	return 0;
}
