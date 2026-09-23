#include <iostream>
using namespace std;

int main() {
    // Dynamic memory allocation
    int* ptr1 = new int(10);
    cout << "Value of ptr1: " << *ptr1 << endl;

    delete ptr1;
    ptr1 = NULL;

    int* ptr2 = new int(20);
    cout << "Value of ptr2: " << *ptr2 << endl;

    delete ptr2;
    ptr2 = NULL;

    ptr2 = new int(30);
    cout << "New value of ptr2: " << *ptr2 << endl;

    delete ptr2;
    ptr2 = NULL;

    int* arr = new int[5];

    for(int i = 0; i < 5; i++)
        arr[i] = i + 1;

    cout << "Array values: ";

    for(int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    cout << endl;

    delete[] arr;
    arr = NULL;

    int* ptr4 = new int(40);
    cout << "Value of ptr4: " << *ptr4 << endl;

    // MEMORY LEAK HERE
    // delete ptr4 is missing

    int* ptr5 = new int(50);
    cout << "Value of ptr5: " << *ptr5 << endl;

    // MEMORY LEAK HERE
    // delete ptr5 is missing

    return 0;
}
