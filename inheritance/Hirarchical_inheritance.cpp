#include<iostream>
using namespace std;

class Animal{
	protected:
		void eat(){
			cout<<"Animals can eat."<<endl;
		}	
};
class Dog : public Animal{
	public:
		void bark(){
			eat();
			cout<<"Dog barks"<<endl; 
		}
};

class Cat : public Animal{
	public:
		void meow(){
			Dog d;
			d.bark();
			cout<<"Cat meows."<<endl;
		}
};

// Here both 'Class Dog' and 'Cat' are derived from 'Class Animal'

int main(){

Cat C;
C.meow();
return 0;


return 0;
}

