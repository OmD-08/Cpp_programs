#include<iostream>
using namespace std;

class Grandparent{
	protected:
		void displayGrandparent(){
			cout<<"This is Grandparent class."<<endl;
		}
};

class Parent : public Grandparent{
	protected:
		void displayParent(){
			cout<<"This is Parent Class."<<endl;
		}
};

class Child : public Parent{
	public:
		void displayChild(){
			displayGrandparent();
			displayParent();
			cout<<"This is Child Class."<<endl;
			
		}
};

int main(){

Child obj;
obj.displayChild();


return 0;
}

