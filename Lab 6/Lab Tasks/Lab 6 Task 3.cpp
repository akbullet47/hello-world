#include <iostream>
using namespace std;

int main()
{
 cout << "\nTask 3: Sum of numbers\n";
    int num, sum = 0;  // declares variables
    cout << "Enter a positive integer: ";
    cin >> num;

    for(int j = 1; j <= num; j++)  // loop from 1 to num.
    {
        sum += j;  // add j to sum.  ( sum = sum + j)
    }

    cout << "Sum = " << sum << endl;
    return 0;
}