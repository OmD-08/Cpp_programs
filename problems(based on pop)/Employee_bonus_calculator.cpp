#include<iostream>
using namespace std;
int main(){

int salary;
int years;
float bonus=0.0f;

cout<<"Enter your salary : ";
cin>>salary;

cout<<"Enter your years of experience : ";
cin>>years;

	if(years<=2){
		cout<<"No bonus will be given";
	}
	else if(years>2 && years<=5){
		bonus = (5.0f / 100.0f) * salary;
	}
	else if(years>=6 && years<=10){
		bonus = (10 / 100) * salary;
	}
	else if(years<10){
		bonus = (15 / 100) * salary;
	}
	
	if(bonus>=100000){
		bonus = bonus - (2.0/100.0) * bonus;
	}
	
	cout<<"Your Bonus = "<<bonus;


return 0;
}

