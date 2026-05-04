#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    for(int i = 0; i < size/2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

void display(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10];

    cout << "Enter 10 numbers:\n";
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    cout << "Before Reverse: ";
    display(arr, 10);

    reverseArray(arr, 10);

    cout << "After Reverse: ";
    display(arr, 10);

    return 0;
}