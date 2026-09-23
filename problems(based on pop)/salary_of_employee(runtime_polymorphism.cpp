#include<iostream>
using namespace std;

class company{
	public:
		virtual void salary(){
			cout<<"The salary = "<<endl;
		}
};

class Manager:public company{
	
	public:
		void salary() override{
			cout<<"1.Manager = 10,000"<<endl;
		}
};

class Employee:public company{
	
	public:
		void salary() override{
			cout<<"2.Employee = 1,000"<<endl;
		}
};

class Developer:public company{
	
	public:
		void salary() override{
			cout<<"3.Developer = 10,00,000"<<endl;
		}
	
};

int main(){


company* c;

Manager m;
Employee e;
Developer d;

c = &m;
c->salary();

c = &e;
c->salary();

c = &d;
c->salary();



return 0;
}

