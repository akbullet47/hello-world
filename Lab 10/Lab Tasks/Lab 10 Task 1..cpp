#include <iostream>
using namespace std;

// Function declaration + definition
void multiply(int num1, int num2) {
    int product = num1 * num2;
    cout << "Product = " << product << endl;
}

int main() {
    // Function call (values pass ki)
    multiply(5, 4);

    return 0;
}