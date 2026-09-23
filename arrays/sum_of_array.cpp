#include <iostream>
using namespace std;

int sum(int size) {
    int arr[size]; 
    int Sum = 0;
    
    cout << "Enter " << size << " elements:\n";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
        Sum += arr[i];
    }
    return Sum;
}

int main() {
    int size;
    cout << "Enter the size: ";
    cin >> size;
    
    cout << "The sum of all elements of an array = " << sum(size) << endl;
    return 0;
}

