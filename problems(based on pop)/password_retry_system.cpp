#include<iostream>
#include<string>
using namespace std;
int main(){

string password_1 = "om123"; 
string password_2;

	for(int i = 1;i<=3;i++){
		
		cout<<"Enter the password : ";
		cin>>password_2;
		
		if(password_2 == password_1){
			cout<<"\nYou entered correct password ! ";
			break;
		}
		else{
			cout<<"Wrong password ! \n";
			cout<<3-i<<" attempts left !\n";
		}
		if(i==3){
				cout<<"Your password is locked\n";
			}
	}

return 0;
}

