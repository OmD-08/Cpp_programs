#include<iostream>
using namespace std;

void rev_order(int arr[],int size){
	cout<<"Printing it in reverse order : \n";
	
	for(int i=size-1;i>=0;i--){
		cout<<arr[i]<<endl;
	}
		
}
int main(){

int size = 0;
cout<<"Enter the size : ";
cin>>size;
int arr[size];

cout<<"Enter the numbers : ";
	for(int i = 0;i<size;i++){
		cin>>arr[i];
	}
	
rev_order(arr,size);

return 0;
}

