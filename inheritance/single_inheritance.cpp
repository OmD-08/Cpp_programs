#include<iostream>
using namespace std;

class Parent{
	public:
		void showParent(){
			cout<<"This is Parent class."<<endl;
		}
};

class Child : public Parent{  // 'Class Child' is derived from 'Class Parent'
	public:
		void showChild(){
			cout<<"This is Child class."<<endl;
		}
};

/* Note:
1. Default visibility mode is private
2.
Public Visibility Mode: Public members of the base class becomes Public members of the derived class
3.
Private Visibility Mode: Public members of the base class becomes Private members of the derived class
4. Private members are never inherited
*/

int main(){

Child obj;
obj.showParent();  // Access from Parent
obj.showChild();   // Access from child


return 0;
}

