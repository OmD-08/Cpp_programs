#include <iostream>
using namespace std;

int main() {
    int n, d, result;

    cout << "Enter two numbers: ";
    cin >> n >> d;

    try {
        if (d == 0)
            throw d;

        result = n / d;
        cout << "Result: " << result << endl;
    }
    catch (int e) {
        cout << "Error: Division by zero is not allowed! : " << e << endl;
    }

    cout << "Program continues normally..." << endl;

    return 0;
}
