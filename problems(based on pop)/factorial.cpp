#include<iostream>
using namespace std;
int main(){

int n,i;
int fact = 1;
cout<<"Enter the number : ";
cin>>n;
	
	 if(n<0){
		cout<<"Error ! Please try again.";
		return 0;
	}
	
	for(i=1;i<=n;i++){
		 fact = fact * i;
	}
	
cout<<"The factorial of "<<n<<" = "<<fact;

return 0;
}

