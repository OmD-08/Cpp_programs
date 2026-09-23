#include<iostream>
using namespace std;
int main(){

int balance,withdrawal;

	cout<<"Enter your account balance : ";
	cin>>balance;

	cout<<"Enter your withdrawl : ";
	cin>>withdrawal;

	if(withdrawal % 500 == 0 && withdrawal <= balance && (balance - withdrawal) >= 1000 && withdrawal <= 25000){
		cout<<"Amount withdrawal accepted \n";
		cout<<"Your account balance : "<<balance - withdrawal;
	}
	else{
		cout<<"Withdrawal rejected, try again ";
	}



return 0;
}

