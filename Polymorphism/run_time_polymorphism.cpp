#include<iostream>
using namespace std;

class Animal{
	public:
		virtual void sound(){  //Virtual function
			cout<<"Animal makes sound"<<endl;
		}
};

class Dog:public Animal{

	public:
		void sound() override{
			cout<<"Dog barks"<<endl;
		}
};

class Cat: public Animal{
	public:
		void sound() override{
			cout<<"Cat meows"<<endl;
		}
};

int main(){

Animal* a;  //Basse class pointer

Dog d;
Cat c;

a = &d;
a->sound(); // Calls Dog's version(not Animal's)

a = &c;
a->sound(); // Calls Cat's version(not Animal's)

return 0;
}

