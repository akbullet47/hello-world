#include <iostream>
using namespace std;

int countUnsafe(float arr[], int size, float low, float high) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] < low || arr[i] > high) {
            count++;
        }
    }
    return count;
}

void findMinMax(float arr[], int size, float &minV, float &maxV) {
    minV = maxV = arr[0];

    for(int i = 1; i < size; i++) {
        if(arr[i] < minV) minV = arr[i];
        if(arr[i] > maxV) maxV = arr[i];
    }
}

int main() {
    float voltage[20];
    float low = 3.0, high = 4.2;

    cout << "Enter 20 voltage readings:\n";
    for(int i = 0; i < 20; i++) {
        cin >> voltage[i];
    }

    float minV, maxV;
    findMinMax(voltage, 20, minV, maxV);

    int unsafe = countUnsafe(voltage, 20, low, high);

    cout << "\nMinimum Voltage: " << minV;
    cout << "\nMaximum Voltage: " << maxV;
    cout << "\nUnsafe Readings: " << unsafe;

    if(unsafe > 0) {
        cout << "\nWarning: Unsafe voltage detected!";
    }

    return 0;
}