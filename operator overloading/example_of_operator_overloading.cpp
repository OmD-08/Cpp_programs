#include<iostream>
using namespace std;

class Complex{
	private:
		int real,imagi;
		
	public:
		// Constructor
		Complex(int r = 0,int i = 0){
			real = r;
			imagi = i;
		}
		
		//Operator Overload
		Complex operator + (Complex obj){
			Complex result;
			result.real = real + obj.real;
			result.imagi = imagi + obj.imagi;
			return result;
		}
		void display(){
			cout<<real<<"+"<<imagi<<"i"<<endl;
		}	
};

int main(){

Complex c1(5,3);
Complex c2(2,4);
Complex c3 = c1 + c2; // using overload '+'
c3.display(); 




return 0;
}

