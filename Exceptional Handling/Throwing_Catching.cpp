#include <iostream>
using namespace std;

void divide(int a, int b) {
    if (b == 0)
        throw "Division by zero error!";

    cout << "Result: " << a / b << endl;
}

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    try {
        divide(a, b);
    }
    catch (const char *msg) {
        cout << "Exception caught: " << msg << endl;
    }

    cout << "Program continues..." << endl;

    return 0;
}

//main()
//  ↓
//try
//  ↓
//divide(10, 0)
//  ↓
//b == 0 ?
//  ↓
//YES
//  ↓
//throw "Division by zero error!"
//  ↓
//Leave divide()
//  ↓
//catch(const char *msg)
//  ↓
//display error
//  ↓
//Program continues
