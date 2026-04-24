#include <iostream>
using namespace std;

int main() 
{
    int num;
    // Ask the user to input a number
    cout << "Enter a number please \n";
    cin >> num;

    
    int flag = 0;

    
    for (int i = 2; i < num; i++) 
    {
        // % is the modulo operator; it finds the remainder.
        // If remainder is 0, then i is a factor of num.
        if (num % i == 0) 
        {
            flag = 1; // Update flag because we found a divisor
            break;    // Exit the loop immediately to save time
        }
    }

    // After the loop, check the value of the flag
    if (flag == 1) 
    {
        cout << num << " is not a prime number \n";
    } 
    else 
    {
        
        cout << num << " is a prime number \n";
    }

    return 0;
}