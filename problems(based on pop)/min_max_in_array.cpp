#include<iostream>
using namespace std;

int max(int arr[],int size){
	int temp = 0;
    temp = arr[0];

	for(int i = 1;i<size;i++){
		if(temp<arr[i]){
			temp = arr[i];
		}
	}
	
	return temp;
}

int min(int arr[],int size){
	int temp = 0;
    temp = arr[0];
	
	for(int i = 1;i<size;i++){
		if(temp>arr[i]){
			temp = arr[i];
		}
	}
	
	return temp;
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

int a = max(arr,size);
cout<<"The max number = "<<a<<endl;

int b = min(arr,size);
cout<<"The min number = "<<b<<endl;

return 0;
}

