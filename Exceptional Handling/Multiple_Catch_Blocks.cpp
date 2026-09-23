#include <iostream>
using namespace std;

int main() {
    int a, b, choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Enter choice (1 for int, 2 for string, 3 for double): ";
    cin >> choice;

    try {
        if (choice == 1) {
            if (b == 0)
                throw 100;

            cout << "Result: " << a / b << endl;
        }
        else if (choice == 2) {
            throw string("Invalid input"); // throwing string
        }
        else if (choice == 3) {
            throw 3.14;                    // throwing double
        }
        else {
            throw string("Invalid choice");
        }
    }
    catch (int e) {
        cout << "Exception: Integer exception: " << e << endl;
    }
    catch (string s) {
        cout << "Exception: String exception: " << s << endl;
    }
    catch (...) {
        cout << "Exception: Unknown exception!" << endl;
    }

    cout << "Program ended safely." << endl;

    return 0;
}
