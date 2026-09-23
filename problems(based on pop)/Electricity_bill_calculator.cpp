#include<iostream>
using namespace std;
int main(){

int units;
int amount;
cout<<"Enter the number of units consumed :";
cin>>units;
if(units>=0){
	if(units>=0 && units<=100){
		amount = units * 5;
			if(amount<=5000){
				amount = amount + (amount * 10/100);
			}
			cout<<"The total bill you have to pay = "<<amount;
	}

	if(units>=101 && units<=200){
		amount = units * 7;
			if(amount<=5000){
				amount = amount + (amount * 10/100);
			}
			cout<<"The total bill you have to pay = "<<amount;
  	} 
  
	if(units>=201 && units<=500){
			
		amount = units * 10;
			if(amount<=5000){
				amount = amount + (amount * 10/100);
			}
			cout<<"The total bill you have to pay = "<<amount;
  	}
  
	if(units>=500){
		
		amount = units * 15;
			if(amount<=5000){
				amount = amount + (amount * 10/100);
			}
			cout<<"The total bill you have to pay = "<<amount;
	}
}
else{
	cout<<"Wrong units entered !\nPlease try again ";
}


return 0;
}

