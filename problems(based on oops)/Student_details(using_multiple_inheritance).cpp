#include<iostream>
#include<string>
using namespace std;

class A{
	private:
		string name;
		int age;	
	
	protected:
		void getDetailsA(){
			cout<<"Enter your name : ";
			getline(cin,name);
			
			cout<<"Enter your age : ";
			cin>>age;
			
		}
		
		string getName(){
			return name;
		}
		
		int getAge(){
			return age;
		}
};

class B{
	private:
		string course_name;
		int marks;
	
	protected:
		void getDetailsB(){
			cout<<"Enter your course name : ";
			cin.ignore();
			getline(cin,course_name);
			
			cout<<"Enter the marks : ";
			cin>>marks;
			
		}
		
		string getCourseName(){
			return course_name;
		}
		
		int getMarks(){
			return marks;
		}
};

class C : public A,public B{
	private:
		char section;
		int roll_no;
		
	public:
		void getDetailsC(){
			
			getDetailsA();
			getDetailsB();
			cout<<"Enter your section : ";
			cin>>section;
			cout<<"Enter your roll no. : ";
			cin>>roll_no;
			
		}
		
		void getData(){
			
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nDisplaying Data : \n";
			cout<<"Name = "<<getName()<<endl;
			cout<<"Age = "<<getAge()<<endl;
			cout<<"Roll no. = "<<roll_no<<endl;
			cout<<"Section = "<<section<<endl;
			cout<<"Course name = "<<getCourseName()<<endl;
			cout<<"Marks = "<<getMarks()<<endl;
			
		}
		
	
};

int main(){
	
	C obj;

	obj.getDetailsC();
	obj.getData();


return 0;
}
