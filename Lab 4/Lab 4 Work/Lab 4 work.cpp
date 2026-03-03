#include <iostream>
using namespace std;

int main()
{
    int num1, num2;  // declares variables.
    char op;

    cout << "Enter two numbers: ";  // ask user to enter numbers.
    cin >> num1 >> num2;  // take number as input.

    cout << "Enter operator (+, -, *, /): ";  // ask user to enter operater.
    cin >> op;  // take input.

    switch(op)  // 
    {
        case '+':  // if operater is +.
            cout << "Result = " << num1 + num2;  // will add numbers.
            break;  // stop here.

        case '-':
            cout << "Result = " << num1 - num2;
            break;

        case '*':
            cout << "Result = " << num1 * num2;
            break;

        case '/':  // if operater is /.
            if(num2 != 0)  // check division by zero.
                cout << "Result = " << num1 / num2;  // divides numbers.
            else
                cout << "Division by zero is not allowed!";  // error message.
            break;

        default:  // if operater is not valid.
            cout << "Invalid operator!";  // show error message.
    }

    return 0;
}