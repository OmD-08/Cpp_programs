#include <iostream>
using namespace std;

float calculateAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
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

    float average = calculateAverage(numbers, size);

    cout << "Average: " << average << endl;

    return 0;
}

