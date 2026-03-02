#include <iostream>  // name abbas fazal etea id 5120321
using namespace std;

int main()
{ int age;  // declares variable.

    cout << "Enter your age: ";   // asking user to enter age.
    cin >> age; // take input from user

    if (age >= 18)  // check if age is greater than or equal to 18.
        cout << "You are 18 or above." << endl; // print message if condition is true.
    else
        cout << "You are under 18." << endl;  // print message if condition is false.

    return 0;

}

