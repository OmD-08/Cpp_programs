#include<iostream>
using namespace std;

class Box{
	private:
		int length;
	
	public:
		Box(){
			length = 10;
		}
		
		friend void showLength(Box b);		//Friend function decleration	
};

void showLength(Box b){  //Friend function definition
	cout<<"Length of box : "<<b.length<<endl;
}

int main(){

Box b;
showLength(b); // calling friend function


return 0;
}

