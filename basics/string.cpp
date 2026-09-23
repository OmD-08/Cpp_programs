#include<iostream>
#include<string>
using namespace std;
int main(){
	
	cout<<"Enter the sentence : ";
	
	char str[20];
	cin>>str;
	
	cout<<"You entered : ";
	
		for(int i= 0;str[i] !='\0';i++){
		cout<<str[i];
	}




return 0;
}

