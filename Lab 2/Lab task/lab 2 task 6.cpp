#include <iostream>
using namespace std;

int main()
{ int number;

    cout << "Enter an integer: ";
    cin >> number;

    if (number >= 0)   // this is condition of if number is greater or equall to 0.
    {
        cout << "You entered a positive integer: " << number << endl;  // print if condition is correct.
    }
    else
    {
        cout << "You entered a negative integer: " << number << endl;  // print this one if condition is wrong.
    }

    return 0;

}

