#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {
        {3, 5, 2},
        {1, 4, 7},
        {6, 8, 9}
    };

    int totalSum = 0;

    // Row sums
    cout << "Row sums:" << endl;
    for(int i = 0; i < 3; i++) {
        int rowSum = 0;
        for(int j = 0; j < 3; j++) {
            rowSum += matrix[i][j];
        }
        cout << "Row " << i << " = " << rowSum << endl;
        totalSum += rowSum;
    }

    // Column sums
    cout << "\nColumn sums:" << endl;
    for(int j = 0; j < 3; j++) {
        int colSum = 0;
        for(int i = 0; i < 3; i++) {
            colSum += matrix[i][j];
        }
        cout << "Column " << j << " = " << colSum << endl;
    }

    // Total sum
    cout << "\nTotal Sum = " << totalSum << endl;

    return 0;
}