#include<iostream>
using namespace std;
int main(){
	
int sum;
int arr[3][3];

cout<<"Enter the value for 3 x 3 matrix :";

for(int i = 0;i<3;i++){
	for(int j = 0;j<3;j++){
		cin>>arr[i][j];
	}
}

cout<<"===========================================\n";
cout<<"You entered :  \n ";

for(int i = 0;i<3;i++){
	for(int j = 0;j<3;j++){
		cout<<arr[i][j]<<" \t";
	}
	cout<<"\n ";
}

for(int i = 0;i<3;i++){
		sum = 0;
	for(int j = 0;j<3;j++){
		sum += arr[j][i];
	}
	cout<<"============================================\n";
	cout<<"The sum of all elements of "<<i+1<<"column"<<" = "<<sum<<endl;
}

return 0;
}

