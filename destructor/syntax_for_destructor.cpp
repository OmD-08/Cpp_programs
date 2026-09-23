#include<iostream>
using namespace std;

class Demo{
	public:
		Demo(){
			cout<<"Constructor called\n";
		}
		~Demo(){
			cout<<"Destructor called\n";
		}
};

int main(){

	Demo d1; // Constructor runs
	cout<<"Inside main function\n";


return 0;
}// object goes out of scope,destructor runs


