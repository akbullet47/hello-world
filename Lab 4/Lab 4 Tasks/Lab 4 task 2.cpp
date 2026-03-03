#include <iostream>
using namespace std;

int main()  
 {
    char grade; // declare svariable name grade.

    cout << "Enter grade (A, B, C, D, F): ";
    cin >> grade;

    switch(grade)  // switch statement. it will compare the value with each case.
	 {
        case 'A':   // if user input A or a.
        case 'a':
            cout << "Excellent";   // will print this.
            break;
        case 'B':
        case 'b':
            cout << "Very Good";
            break;
        case 'C':
        case 'c':
            cout << "Good";
            break;
        case 'D':
        case 'd':
            cout << "Pass";
            break;
        case 'F':
        case 'f':
            cout << "Fail";
            break;
        default:   // default run when no case match.
            cout << "Invalid Grade";  // display error message.
    }

    return 0;
}