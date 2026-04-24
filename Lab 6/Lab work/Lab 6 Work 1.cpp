#include <iostream>
using namespace std;

int main()
{
    // The for loop has three parts:
    // 1. Initialization: int i = 5 (start at 5)
    // 2. Condition: i > 0 (keep going as long as i is greater than 0)
    // 3. Update: i-- (subtract 1 from i after each loop)
    for (int i = 5; i > 0; i--)
    {
        // Print the current value of i
        // endl moves the cursor to the next line
        cout << i << endl;
    }

    // This line is outside the curly braces {}, 
    // so it only runs once the loop is completely finished.
    cout << "outside loop now";

    return 0;
}