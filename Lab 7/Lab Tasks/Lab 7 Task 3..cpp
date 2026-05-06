#include <iostream>
using namespace std;

int main() {
    // Source array initialization
    int source[5] = {5, 10, 15, 20, 25};
    
    // Destination array declaration
    int destination[5];

    // Copy karne ke liye loop
    for(int i = 0; i < 5; i++) {
        destination[i] = source[i];
    }

    // Source array display
    cout << "Source Array:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << source[i] << " ";
    }

    cout << endl;

    // Destination array display
    cout << "Destination Array:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << destination[i] << " ";
    }

    return 0;
}