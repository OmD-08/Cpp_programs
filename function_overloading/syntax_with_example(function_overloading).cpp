#include<iostream>
using namespace std;

class Box{
	private:
		int length,width;
	
	public:
		Box(){
			length = 1;
			width = 1;
		}
		Box(int l,int w){
			length = l;
			width = w;
		}
		void area(){
			cout<<"Area = "<<length*width<<endl;
		}	
};


int main(){

Box b1;
Box b2(5,4);
b1.area();
b2.area();


return 0;
}

