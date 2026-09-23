#include<iostream>
using namespace std;

class Student{
	public:
		int roll;
		string name;
		
	void display(){
		cout<<"Roll no: "<<roll<<endl;
		cout<<"Name: "<<name<<endl;
	}
};

int main(){

Student s1;  // object creation
s1.roll = 101; // Accessing data member
s1.name = "Rahul";
s1.display();  // Calling function



return 0;
}

