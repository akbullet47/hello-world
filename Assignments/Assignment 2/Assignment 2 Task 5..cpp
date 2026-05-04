#include <iostream>
using namespace std;

double totalLoad(double arr[], int size) {
    double sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

double peakLoad(double arr[], int size) {
    double max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) max = arr[i];
    }
    return max;
}

int main() {
    double load[24];

    cout << "Enter load for 24 hours:\n";
    for(int i = 0; i < 24; i++) {
        cin >> load[i];
    }

    cout << "Total Load = " << totalLoad(load, 24) << endl;
    cout << "Peak Load = " << peakLoad(load, 24) << endl;

    return 0;
}