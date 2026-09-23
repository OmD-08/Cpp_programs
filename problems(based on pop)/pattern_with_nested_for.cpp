#include<iostream>
using namespace std;

void pattern(){
		
int N;
cout<<"Enter the number of rows (1-20) : ";
cin>>N;
	if(N>=1 && N<=20 ){
	
		for(int i = 1;i<=N;i++){
			for(int j = 1;j<=i;j++){
				cout<<" * ";
			}
			cout<<endl;
		}
		
	}
	else{
		cout<<"Error : Number must be between 1 and 20.";
	}
}

int main(){

pattern();

return 0;
}

