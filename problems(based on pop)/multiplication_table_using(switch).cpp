#include <iostream>
using namespace std;

int main() {
    int choice;
    
    do {
        cout << "1. Print table of a specific number\n";
        cout << "2. Print tables from 1 to N\n";
        cout << "3. Exit\n";
        cout << "Enter your choice (1-3): ";
        cin >> choice;
        
        switch(choice) {
            case 1: {
                int num;
                cout << "Enter the number: ";
                cin >> num;
                
                cout << "\n--- Table of " << num << " ---\n";
                for(int i = 1; i <= 10; ++i){
                    cout << num << " x " << i << " = " << (num * i) << "\n";
                }
                break;
            }
            case 2: {
                int n;
                cout << "Enter the value of N: ";
                cin >> n;
                
                for(int i = 1; i <= n; ++i){
                    cout << "\n--- Table of " << i << " ---\n";
                    for(int j = 1; j <= 10; ++j){
                        cout << i << " x " << j << " = " << (i * j) << "\n";
                    }
                }
                break;
            }
            case 3:
                cout<<"Exiting the program.\n";
                break;
                
            default:
                cout<<"Invalid choice! Please enter a number between 1 and 3.\n";
        }
    } while(choice != 3);
    
    return 0;
}
