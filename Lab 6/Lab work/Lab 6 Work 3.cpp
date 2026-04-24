#include <iostream>
using namespace std;

int main()
{
    // OUTER LOOP: This controls the number of rows and the stopping point for each row.
    // It starts at 7 and goes down to 1 (num--).
    for (int num = 7; num > 0; num--)
    {
        // INNER (NESTED) LOOP: This prints the numbers on a single line.
        // It always starts at 1 and stops when it reaches the current value of 'num'.
        for (int j = 1; j <= num; j++) 
        {
            // Print the current value of j followed by a space
            cout << j << " ";
        }

        // After the inner loop finishes printing a row, 
        // we move the cursor to a new line (\n).
        cout << "\n";
    }

    return 0;
}