#include <iostream>
using namespace std;

void countAndPrintNegatives(int arr[], int size, int &negativeCount) {
    negativeCount = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            negativeCount++;
        }
    }

    if (negativeCount == 0) {
        cout << "No negative found" << endl;
    } else {
        cout << "Negative numbers found: ";
        for (int i = 0; i < size; i++) {
            if (arr[i] < 0) {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
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

    int negatives = 0;
    countAndPrintNegatives(numbers, size, negatives);

    cout << "Total negative numbers: " << negatives << endl;

    return 0;
}
