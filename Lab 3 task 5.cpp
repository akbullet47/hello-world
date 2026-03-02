#include <iostream> // name abbas fazal
using namespace std;

int main()
{  int num;  // declare variable

    cout << "Enter a number: "; // asking user to enter number
    cin >> num;  // stores input

    if (num > 0) // first condition
        cout << "Number is positive." << endl;
    else if (num < 0)  // second condition
        cout << "Number is negative." << endl;
    else
        cout << "Number is zero." << endl;

    return 0;

}

