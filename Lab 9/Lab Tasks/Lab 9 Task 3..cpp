#include <iostream>
using namespace std;

// Function to calculate sum
int calculateSum(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int numbers[10];

    // Input lena
    cout << "Enter 10 numbers:" << endl;
    for(int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }

    // Function call
    int sum = calculateSum(numbers, 10);

    // Average calculate karna
    double average = (double)sum / 10;

    // Output
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}