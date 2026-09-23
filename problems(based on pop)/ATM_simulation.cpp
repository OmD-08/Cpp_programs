#include<iostream>
using namespace std;
int account_balance = 100000;

void check_balance(){
	cout<<"Your current account balance = "<<account_balance<<endl;
}

void deposit(){
	int amount;
	cout<<"Enter the amount you want to deposit :";
	cin>>amount;
	cout<<"Now your current account balance = "<<account_balance+amount<<endl;
}

void withdraw(){
	int amount;
	cout<<"Enter amount you want to withdraw : ";
	cin>>amount;
	cout<<"Now your current account balance = "<<account_balance-amount<<endl;
}

int exit(){
	cout<<"Thank you ! ";
	return 0;
}

int main(){
	int option;
do{
	
	cout<<"-_-_-_-_-_-_Welcome to ATM_-_-_-_-_--_\n";
	cout<<"1 :- Check Balance.\n";
	cout<<"2 :- Deposit.\n";
	cout<<"3 :- Withdraw.\n";
	cout<<"4 :- Exit.\n";
	cout<<"Enter your option : ";
	cin>>option;
	cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n";
	
	switch(option){
		case 1:
			check_balance();
			break;
		case 2:
			deposit();
			break;
		case 3:
			withdraw();
			break;
		case 4:
			exit();
			break;	
	}
	
}while(option!=4);
return 0;
}

