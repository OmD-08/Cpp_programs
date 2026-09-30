#include<iostream>
using namespace std;

class classA{
	protected:
		void displayA(){
			cout<<"Class A function"<<endl;
		}
};

class classB{
	protected:
		void displayB(){
			cout<<"Class B function"<<endl;
		}
};

class classC : public classA, public classB{  // 'Class C' is derived from 2 classes :- 'Class A' and 'Class B'
	public:
		void displayC(){
			displayA();
			displayB();
			cout<<"Class C function"<<endl;
			
		}
}; 

int main(){

classC obj;
obj.displayC();

return 0; 


return 0;
}

