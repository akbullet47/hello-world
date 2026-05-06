#include <iostream>
using namespace std;

int main() {
    int matrix[4][4] = {
        {12, 5, 7, 9},
        {3, 15, 8, 1},
        {6, 11, 20, 4},
        {2, 14, 10, 13}
    };

    int max = matrix[0][0];

    // Maximum find karna
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }

    cout << "Maximum value = " << max << endl;

    return 0;
}