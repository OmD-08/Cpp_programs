#include<iostream>
using namespace std;

template<class T>
class Check
{
	public:
		void show(T x)
		{
			cout << "General Type: " << x << endl;
		}
};

//SPECIALIZATION FOR CHAR*
template<>
class Check<char*>
{
	public:
		void show(char* x)
		{
			cout << "Character pointer: " << x << endl;
		}
};

int main()
{
	Check<int> cl;
	cl.show(10);
	
	Check<char*> c2;
	c2.show("Hello World!");
}
