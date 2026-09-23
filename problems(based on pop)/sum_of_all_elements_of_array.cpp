#include<iostream>
using namespace std;

int sum(int arr[],int size){
	int total = 0;
	for(int i = 0;i<size;i++){
		total += arr[i];
	}
	
	return total;
}

int main(){

int size;
cout<<"Enter the size : ";
cin>>size;

int arr[size];
cout<<"Enter the numbers : ";

	for(int i=0;i<size;i++){
		cin>>arr[i];
	}

int a = sum(arr,size);
cout<<"The sum of all elements of array = "<<a;


return 0;
}

