#include <iostream>
using namespace std;

int main()
{cout << "\nTask 2: Multiplication Table (1 to 10)\n";
    for(int row = 1; row <= 10; row++)   // outer loop used for rows.
    {
        for(int col = 1; col <= 10; col++)  // inner loop used for columns
        {
            cout << row * col << "\t";   //   multiply rows and column print result then give space.
        }
        cout << endl;
    }
}