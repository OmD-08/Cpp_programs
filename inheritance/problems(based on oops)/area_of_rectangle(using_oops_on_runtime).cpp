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
		cout<<"Area = "<<length*width<<endl;
	}	
};

int main(){

Rectangle r1;

int l;
cout<<"Enter the length of rectangle : ";
cin>>l;
 
int w; 
cout<<"Enter the width of rectangle : ";
cin>>w;

r1.setData(l,w);
r1.area();



return 0;
}

