#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[5];

    cout << "Enter 5 student names:\n";
    for(int i = 0; i < 5; i++) {
        cin >> names[i];
    }

    // Sorting (Bubble Sort)
    for(int i = 0; i < 5 - 1; i++) {
        for(int j = 0; j < 5 - i - 1; j++) {
            if(names[j] > names[j+1]) {
                string temp = names[j];
                names[j] = names[j+1];
                names[j+1] = temp;
            }
        }
    }

    cout << "Sorted Names:\n";
    for(int i = 0; i < 5; i++) {
        cout << names[i] << endl;
    }

    return 0;
}