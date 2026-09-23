#include<iostream>
using namespace std;
int main(){

	int Physics;
	int Chemistry;
	int Maths;
	int English;
	int CS;

	cout<<"Enter the marks of Physics : ";
	cin>>Physics;

	cout<<"Enter the marks of Chemistry : ";
	cin>>Chemistry;

	cout<<"Enter the marks of Maths : ";
	cin>>Maths;

	cout<<"Enter the marks of English : ";
	cin>>English;

	cout<<"Enter the marks of CS : ";
	cin>>CS;

	int total = Physics + Chemistry + Maths + English + CS;

	float percentage = (total / 500.0)* 100;
	
	if (percentage >= 75) { 
        cout << "Congratulations! You passed with Distinction!" << endl; 
    } 
    else if (percentage >= 60) { 
        cout << "Congratulations! You passed in First Class!" << endl; 
    } 
    else if (percentage >= 50) { 
        cout << "Congratulations! You passed in Second Class!" << endl; 
    } 
    else if (percentage >= 35) { 
        cout << "Congratulations! You passed!" << endl; 
    } 
    else { 
        cout << "Unfortunately, you failed." << endl; 
    } 
	
	cout<<"Your percentage = "<<percentage<<"%";

return 0;
}
