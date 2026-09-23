#include<iostream>
using namespace std;

class Compare{
	private:
		int value;
	
	public:
		Compare(int v){
			value = v;
		}
		
		bool operator == (Compare obj){
			return value == obj.value;
		}	
};

int main(){

Compare c1(10),c2(10),c3(20);

	if(c1 == c2){
		
		cout<<"c1 and c2 are Equal\n";
		
	}
	else{
	
		cout<<"c1 and c2 are not\n";
	
	}
	
	if(c1 == c3){
		
		cout<<"c1 and c3 are equal\n";
		
	}
	else{
		
		cout<<"c1 and c3 are not equal\n";
		
	}


return 0;
}

