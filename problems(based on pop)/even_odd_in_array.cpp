#include <iostream>
using namespace std;

void countEvenOdd(int arr[], int size, int &evenCount, int &oddCount) {
    evenCount = 0;
    oddCount = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
}

int main() {
    int size;
    cout << "Enter the total number of elements: ";
    cin >> size;

    int numbers[size];
    cout << "Enter " << size << " numbers: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    int evens = 0;
    int odds = 0;
    countEvenOdd(numbers, size, evens, odds);

    cout << "Even numbers: " << evens << endl;
    cout << "Odd numbers: " << odds << endl;

    return 0;
}

