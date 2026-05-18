#include <iostream>
using namespace std;

int main()
{
    // Declare and initialize an integer array
    int numbers[] = {10, 20, 30, 40, 50};

    // Declare a pointer and point to first element of array
    int *ptr = numbers;

    // Display array elements using pointer arithmetic
    cout << "Array elements using pointer arithmetic:" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << endl;
    }

    return 0;
}