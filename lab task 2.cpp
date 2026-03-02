#include <iostream> // Name Abbas Fazal Etea Id 5120321.
using namespace std;

int main()
{  int num;

    cout << "Enter a number: ";  // 
    cin >> num;

    if (num > 0 && num < 100)  // && logical AND operater;both condition must be true.
        cout << "Number is between 0 and 100." << endl;  // execute if both condition satisfies.
    else
        cout << "Number is not between 0 and 100." << endl; // execute if conditions not satisfies.
    return 0;

}

