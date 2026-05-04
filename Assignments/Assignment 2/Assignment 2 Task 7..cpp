#include <iostream>
using namespace std;

// Function to calculate total energy
double totalEnergy(double arr[], int size) {
    double sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to find hour with maximum generation
int maxHour(double arr[], int size) {
    int index = 0;
    for(int i = 1; i < size; i++) {
        if(arr[i] > arr[index]) {
            index = i;
        }
    }
    return index;
}

// Function to calculate average
double averageEnergy(double arr[], int size) {
    return totalEnergy(arr, size) / size;
}

int main() {
    double energy[24];

    cout << "Enter energy generated for 24 hours:\n";
    for(int i = 0; i < 24; i++) {
        cin >> energy[i];
    }

    double total = totalEnergy(energy, 24);
    int max_index = maxHour(energy, 24);
    double avg = averageEnergy(energy, 24);

    cout << "\nTotal Energy = " << total << " kWh";
    cout << "\nMaximum Generation at Hour = " << max_index;
    cout << "\nAverage Energy = " << avg << " kWh\n";

    return 0;
}