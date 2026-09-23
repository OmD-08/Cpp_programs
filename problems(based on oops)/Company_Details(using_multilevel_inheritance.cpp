#include<iostream>

using namespace std;

class Company{
	protected:
		string company_name;
		string company_address;
};

class Employee : public Company{
	protected:
		string employee_name;
		string employee_ID;
		double phone_no;
};

class Department : public Employee{
	public:
			void getData(){
			
			cout<<"Enter company name : ";
			getline(cin,company_name);
			
			cout<<"Enter company address : ";
			getline(cin,company_address);
			
			cout<<"Enter your Name : ";
			getline(cin,employee_name);
			
			cout<<"Enter your ID : ";
			cin>>employee_ID;
			
			cout<<"Enter your phone no. : ";
			cin>>phone_no;
		}
		
		void getDetails(){
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nDetails : \n";
			cout<<"Company Name : "<<company_name<<endl;
			cout<<"Company address : "<<company_address<<endl;
			cout<<"Employee Name : "<<employee_name<<endl;
			cout<<"Employee ID : "<<employee_ID<<endl;
			cout<<"phone no. : "<<phone_no<<endl;
			
		}
};

int main(){

Department comp;
comp.getData();
comp.getDetails();
	

return 0;
}

