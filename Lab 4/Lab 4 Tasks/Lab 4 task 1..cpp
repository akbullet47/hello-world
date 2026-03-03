#include <iostream>
using namespace std;

int main() {
    int day;  // declare variable.

    cout << "Enter day number (1-7): ";  //  asking user to enter a number.
    cin >> day; // take input from user and store it in variable.

    switch(day) {
        case 1:  // if user enter 1.
            cout << "Monday";   // this will be print.
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:   // if user enter number othe rthan 1-7.
            cout << "Invalid day number";  // will display error message.
    }

    return 0;
}