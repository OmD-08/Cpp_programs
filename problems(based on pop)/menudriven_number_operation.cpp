#include <iostream>
using namespace std;

int main() {
    int option;
    
    do {
    	cout<<"----------------------------------------\n";
        cout << "1 : Check even/odd.\n";
        cout << "2 : Check positive/negative/zero.\n";
        cout << "3 : Find factorial.\n";
        cout << "4 : Check prime number.\n";
        cout << "5 : Exit\n";
        cout << "Enter your option : ";
        cin >> option;
		cout<<"-----------------------------------------\n";
        switch (option) {
            case 1: {
                int N;
                cout << "Enter the number : ";
                cin >> N;
                int sum_even = 0;
                int sum_odd = 0;
                for (int i = 1; i <= N; i++) {
                    if (i % 2 == 0) {
                        sum_even += i;
                    } else {
                        sum_odd += i;
                    }
                }
                cout << "The sum of all even numbers = " << sum_even << "\n";
                cout << "The sum of all odd numbers = " << sum_odd << "\n";
                break;
            }
            case 2: {
                int num;
                cout << "Enter the number : ";
                cin >> num;
                cout << "You entered : " << num << "\n";
                if (num > 0) {
                    if (num % 2 == 0) {
                        cout << "It is a positive even number\n";
                    } else {
                        cout << "It is a positive odd number\n";
                    }
                } else if (num < 0) {
                    if (num % 2 == 0) {
                        cout << "It is a negative even number\n";
                    } else {
                        cout << "It is a negative odd number\n";
                    }
                } else {
                    cout << "The number is zero\n";
                }
                break;
            }
            case 3: {
                int n;
                long long fact = 1;
                cout << "Enter the number : ";
                cin >> n;
                if (n < 0) {
                    cout << "Error ! Please try again.\n";
                } else {
                    for (int i = 1; i <= n; i++) {
                        fact = fact * i;
                    }
                    cout << "The factorial of " << n << " = " << fact << "\n";
                }
                break;
            }
            case 4: {
                int a;
                bool isPrime = true;
                cout << "Enter the value : ";
                cin >> a;
                if (a <= 1) {
                    cout << "The number " << a << " is not a prime number\n";
                    break;
                }
                for (int i = 2; i * i <= a; i++) {
                    if (a % i == 0) {
                        isPrime = false;
                        break;
                    }
                }
                if (isPrime) {
                    cout << "The number " << a << " is a prime number\n";
                } else {
                    cout << "The number " << a << " is not a prime number\n";
                }
                break;
            }
            case 5:
                cout << "Exiting program :)\n";
                break;
        }
    } while (option != 5);

    return 0;
}

