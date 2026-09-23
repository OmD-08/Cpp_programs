#include<iostream>
#include<string>
using namespace std;
int main(){

int age;
string status1 = "yes";
string status2;
int score;

cout<<"Enter your age : ";
cin>>age;

cout<<"Do you have learning license : ";
cin>>status2;

cout<<"Enter your test score : ";
cin>>score;

	if(age>=18 && age<60){
		if(status2 == status1){
			if(score>=60){
				cout<<"Your Liscense is Approved ! ";
			}
			else{
				cout<<"Invalid score ! please try again.";
			}
		}
		else{
				cout<<"Invalid status! please try again.";
			}
	}
	 else if(age>=60 && age<=100){
			if(score>=70){
				cout<<"Your Liscense is Approved ! ";
			}
	}
	else{
				cout<<"Invalid age ! please try again.";
			}



return 0;
}

