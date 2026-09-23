#include<iostream>
using namespace std;

class Account{
	
	private:
		double acc_no;
		double balance;
		
	public:
		void set_data(double accno,double bal){
			acc_no = accno;
			balance = bal;
		}
		
		void get_data(){
			cout<<"Account number : "<<acc_no<<endl;
			cout<<"Account balance : "<<balance<<endl;
		}
};

int main(){
Account obj;
obj.set_data(123456,100000);
obj.get_data();

return 0;	
	
}
