#include<iostream>
#include<string>
using namespace std;
int main(){

	string username1 = "omdubey@gmail.com";
	string password1 = "om123";
	string status;
	string username2;
	string password2;
	
	cout<<"Is your account active or inactive ? : ";
	cin>>status;

	cout<<"Enter your username : ";
	cin>>username2;

	cout<<"Enter you password : ";
	cin>>password2;

	if(status == "active" || status == "ACTIVE"){
		if(username2 == username1){	
			if(password2 == password1){
				cout<<"______________ Login succeed ! ___________ ";
			}
			else{
				cout<<"Wrong password";
			}		
		}
		else{
			cout<<"Wrong username";
		}
}
	else{
		cout<<"Account is deactivated";
	}

return 0;
}

