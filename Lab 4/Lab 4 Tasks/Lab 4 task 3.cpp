#include <iostream>
using namespace std;

int main() {
    int choice;   // declares an integar variable name choice.
    double value, result;   // declares two variable.

    cout << "1 -> Convert kilometers to Meters\n";   // these line print the menu.
    cout << "2 -> Convert Meters to Centimeters\n";
    cout << "3 -> Convert Kilograms to Grams\n";
    cout << "4 -> Convert Celsius to Fahrenheit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter value: ";   // ask the user to select an option.
    cin >> value;   // store input.

    switch(choice)   // switch statement.
	 {
        case 1:   // if choice is 1.
            result = value * 1000;
            cout << "Result: " << result << " meters";   // convert kilometer to meter.
            break;
        case 2:
            result = value * 100;
            cout << "Result: " << result << " centimeters";
            break;
        case 3:
            result = value * 1000;
            cout << "Result: " << result << " grams";
            break;
        case 4:
            result = (value * 9/5) + 32;
            cout << "Result: " << result << " Fahrenheit";
            break;
        default:    // if user enter something other than 1-4.
            cout << "Invalid choice";   // show error message.
    }

    return 0;
}