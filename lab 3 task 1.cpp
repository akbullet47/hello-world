#include <iostream>  // Name Abbas Fazal ETEA Id 5120321
using namespace std;

int main() {
    int num1, num2;  // variables to store user input.

    cout << "Enter first number: ";  // tells the user to enter the first number.
    cin >> num1;  // read the first num from user and store it in num 1.

    cout << "Enter second number: ";  // tells to enter the second number.
    cin >> num2;

    if (num1 == num2)  // condition if number 1 is equall to number 2. 
        cout << "Both numbers are equal." << endl;
    else if (num1 > num2) // this is condition if first number is greater than second.
        cout << "First number is greater than second." << endl;
    else // if none of the two conditions satisfy.
        cout << "First number is less than second." << endl;

    return 0;
}

