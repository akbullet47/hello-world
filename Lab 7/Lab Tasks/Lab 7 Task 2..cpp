#include <iostream>
using namespace std;

int main() {
    // Character array declaration aur initialization
    char message[] = "HELLO";

    // Loop ke zariye har character access karna
    for(int i = 0; message[i] != '\0'; i++) {
        cout << message[i] << endl;
    }

    return 0;
}