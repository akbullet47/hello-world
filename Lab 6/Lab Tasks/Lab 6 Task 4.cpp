#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;
     // outer loop control  no of rows
    for(int i = 1; i <= rows; i++) {
    	// inner loop prints stars
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;  // move to next line
    }

    return 0;
}