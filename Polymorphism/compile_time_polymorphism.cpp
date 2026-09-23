#include<iostream>
using namespace std;

class Print{
	public:
		void show(int a){
			cout<<"Integer : "<<a<<endl;
		}
		void show(double a){
			cout<<"Double : "<<a<<endl;
		}
		void show(string a){
			cout<<"String : "<<a<<endl;
		}
};

int main(){

Print obj;
obj.show(10);     // Calls show(int)
obj.show(15.75);  // Calls show(double)
obj.show("Hello");// Calls show(String)

return 0;
}

