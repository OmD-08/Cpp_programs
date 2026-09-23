#include<iostream>
using namespace std;

class Rectangle{
	private:
		int length,width;
	
	public:
		void setData(int l,int w){
			length = l;
			width = w;
		}
		
	void area(){
			cout<<"Area = "<<length * width<<endl;
		}
};

int main(){

Rectangle r1;
r1.setData(10,5);
r1.area();


return 0;
}

