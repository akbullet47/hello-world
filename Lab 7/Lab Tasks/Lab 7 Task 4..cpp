#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    int sum = 0;

    // User se input lena
    cout << "Enter 5 numbers:" << endl;
    for(int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    // Sum calculate karna
    for(int i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    // Result display karna
    cout << "Sum = " << sum << endl;

    return 0;
}