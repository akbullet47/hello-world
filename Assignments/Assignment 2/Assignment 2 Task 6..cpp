#include <iostream>
#include <string>
using namespace std;

int findTopper(int marks[], int size) {
    int index = 0;
    for(int i = 1; i < size; i++) {
        if(marks[i] > marks[index]) {
            index = i;
        }
    }
    return index;
}

void passFail(int marks[], int size) {
    for(int i = 0; i < size; i++) {
        if(marks[i] >= 50)
            cout << "Pass\n";
        else
            cout << "Fail\n";
    }
}

void searchStudent(string names[], int marks[], int size, string key) {
    for(int i = 0; i < size; i++) {
        if(names[i] == key) {
            cout << "Found! Marks = " << marks[i];
            return;
        }
    }
    cout << "Student not found";
}

int main() {
    string names[5];
    int marks[5];

    cout << "Enter names and marks:\n";
    for(int i = 0; i < 5; i++) {
        cin >> names[i] >> marks[i];
    }

    int topper = findTopper(marks, 5);
    cout << "Topper: " << names[topper] << endl;

    cout << "\nPass/Fail Status:\n";
    passFail(marks, 5);

    string search;
    cout << "\nEnter name to search: ";
    cin >> search;

    searchStudent(names, marks, 5, search);

    return 0;
}