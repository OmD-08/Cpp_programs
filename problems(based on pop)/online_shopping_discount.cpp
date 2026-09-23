#include <iostream>

using namespace std;

int main() {
    double amount;
    char member;
    double discount = 0.0;

    cout << "Enter amount: ";
    cin >> amount;
    cout << "Premium member? (y/n): ";
    cin >> member;
	 
    if (amount >= 10000) {
        discount = 0.20;
    } else if (amount >= 5000) {
        discount = 0.10;
    }
   
    if (member == 'y') {
        discount = discount + 0.05;
    }

    
    double final_price = amount - (amount * discount);
    cout << "Final price: " << final_price << endl;

    return 0;
}
