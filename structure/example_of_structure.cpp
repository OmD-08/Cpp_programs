#include<iostream>
using namespace std;

struct student{
	char name[30];
	int roll_no;
	double fees;
	float id;
	
	void stud_func(){
		cout<<"The student name : "<<name<<endl;
		cout<<"The student roll_no : "<<roll_no<<endl;
		cout<<"The student's fees :  "<<fees<<endl;
		cout<<"The student ID : "<<id;
	}
};

int main(){

student s1 = {	"Anurag",10,10000.5,10.01};

s1.stud_func();


return 0;
}

