#include<iostream>
using namespace std;

//Base Class
class Person{
	public:
		void showPerson(){
			cout<<"I am a Person."<<endl;
		}
};

//Derived Class 1(inherits virtually)
class Employee : virtual public Person{
	public:
		void showEmployee(){
			cout<<"I am an Employee"<<endl;
		}
};

// Derived class 2 (inherits virtually)
class Teacher : virtual public Person{
	public:
		void showteacher(){
			cout<<"I am a teacher."<<endl;
		}
}; 

// Derived class 3 (inherits virtually from both Employee and Teacher)
class Professor : public Employee , public Teacher{
	public:
		void showProfessor(){
			cout<<"I am a proffessor "<<endl;
		}
};
int main(){

Professor obj;
obj.showPerson();  // From Person (only one copy because of virtual function)
obj.showEmployee();
obj.showteacher();
obj.showProfessor(); 



return 0;
}

