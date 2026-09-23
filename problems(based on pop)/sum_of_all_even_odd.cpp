#include<iostream>
using namespace std;
int main(){

int N;

cout<<"Enter the number : ";
cin>>N;

int sum_even = 0;
int sum_odd = 0;

	for(int i = 1;i<=N;i++){
		if(i%2==0){
			sum_even += i;
		}
		else{
			sum_odd += i;
		}
		
	}	
	
	cout<<"The sum of all even numbers = "<<sum_even;
	cout<<"\nThe sum of all odd numbers = "<<sum_odd;

return 0;
}

