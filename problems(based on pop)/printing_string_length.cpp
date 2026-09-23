#include<iostream>
#include<string>
using namespace std;
int main(){
	
	cout<<"Enter the sentence : ";
	
	string str[20];
	cin>>str;
	strlen(str);
	cout<<"You entered : ";
	
		for(int i= 0;str[i] !='\0';i++){
		cout<<str[i];
	}
	cout<<endl;
	
	
	
	
	


return 0;
}

