#include <iostream>
using namespace std;

// Function jo value return karta hai
int getSquare(int number) {
    return number * number;
}

int main() {
    int result = getSquare(6);

    cout << "Square = " << result << endl;

    return 0;
}