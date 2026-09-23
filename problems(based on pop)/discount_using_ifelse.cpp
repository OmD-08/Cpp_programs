#include<iostream>
using namespace std;
int main(){
float amount = 0;
float discount = 0;
cout<<"Enter your total shopping amount : ";
cin>>amount;

if(amount>1000){
    discount = 10.0/100.0;
}
else{
	discount = 5.0 / 100.0;
}

float final = amount - (amount * discount);

cout<<"Your final amount is : "<<final;

return 0;
}

