#include<iostream>
using namespace std;
int main(){

int option;
float a,b;

cout<<"Enter the 1st value : ";
cin>>a;
cout<<"Enter the 2nd value : ";
cin>>b;

cout<<"------Choose one of the option------\n";
cout<<"1 :- Add\n";
cout<<"2 :- Substract\n";
cout<<"3 :- Multiply\n";
cout<<"4 :- Divide\n";
cout<<"Your option : ";
cin>>option;
	switch(option){
		case 1:
			cout<<"Result : "<<a+b;
			break;
		case 2:
			cout<<"Result : "<<a-b;
			break;
		case 3:
			cout<<"Result : "<<a*b;
			break;	
		case 4:
			cout<<"Result : "<<a/b;
			break;
		
		default:cout<<"Please try again..... ";	
		}
	if(a==0 || b==0){
		cout<<"Error!Please try again!....";
	}
	



return 0;
}

