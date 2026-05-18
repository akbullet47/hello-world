#include <iostream>
using namespace std;

int main()
{
    // Declare and initialize an integer variable
    int num = 25;

    // Declare a pointer variable
    int *ptr;

    // Initialize pointer to point to num
    ptr = &num;

    // Display the value of num
    cout << "Value of num: " << num << endl;

    // Display the value pointed to by ptr using dereference operator
    cout << "Value pointed to by ptr: " << *ptr << endl;

    return 0;
}