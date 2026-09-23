#include<iostream>
using namespace std;

class Example{
	
	private:
		int secret = 100;     //private : only inside the class
	
	protected:
		int code = 200;      //protected : for child classes
	
	public:
		int number = 300;  // public : accessible anywhere	
		
		void show(){
			cout<<"Secret = "<<secret<<endl<<"Code = "<<code<<endl<<"Number = "<<number<<endl;
		}	 
};

int main(){

Example obj;
// cout<<obj.secret; Error : private member
// cout<<obj.code; Error : protected member
cout<<obj.number<<endl; // Works
obj.show();  // Works (public function accessinng private data


return 0;
}

