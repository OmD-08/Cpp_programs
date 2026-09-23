#include<iostream>
using namespace std;
int main(){

int year;

cout<<"Enter the year : ";
cin>>year;

	if (year % 400 == 0) {
        cout<<"The year "<<year <<" is a Century Leap Year";
   	 }
		 else if (year % 100 == 0) {
   	     cout<<"The year "<<year <<" is a Common Century Year";
   	 } 
		else if (year % 4 == 0) {
   	     cout<<"The year "<<year <<" is a Standard Leap Year";
   	 }
		 else {
    	    cout<<"The year "<<year <<" is a Regular Common Year";
    	}




return 0;
}

