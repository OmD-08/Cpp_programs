#include<iostream>
using namespace std;

class Student{
	private:
		int roll;
		string name;
	
	public:	
	void setData(){
		roll = 101;
		name = "Rahul";
	}
	void Display(){
		cout<<"Roll no: "<<roll<<endl;
		cout<<"Name: "<<name<<endl;
	}
};

int main(){

Student s1;  
s1.setData(); 
s1.Display();  


return 0;
}


