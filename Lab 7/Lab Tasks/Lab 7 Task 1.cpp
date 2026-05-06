#include <iostream>
using namespace std;

int main() {
    // 1. Array declaration aur initialization
    int numbers[5] = {10, 20, 30, 40, 50};

    // 2. Loop ke zariye values display karna
    for(int i = 0; i < 5; i++) {
        cout << "Element " << i << " = " << numbers[i] << endl;
    }

    return 0;
}