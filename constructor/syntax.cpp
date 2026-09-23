#include<iostream>
using namespace std;

class Student{
	public:
		int id;
		string name;
		
		// Default constructor
		Student(){
			id = 0;
			name = "Unknown";
		}
		
		// Parametrized constructor
		Student(int x,string y){
			id = x;
			name = y;
		}
	};

int main(){
	Student s1;             // Default constructor
	Student s2(101,"Rahul");  // Parameterized constructor
	
	cout<<s1.id<<" "<<s1.name<<endl;
	cout<<s2.id<<" "<<s2.name<<endl;



return 0;
}

