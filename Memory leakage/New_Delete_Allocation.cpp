#include <iostream>
using namespace std;

int main() {
    int* ptr = new int;    // allocate memory
    *ptr = 10;
    cout << "Value: " << *ptr << endl;
    delete ptr;            // free memory

    *ptr = 20;
    cout << "Value: " << *ptr << endl;
    return 0;
}
