#include <iostream>
using namespace std;

void totalAttendance(int arr[5][7]) {
    for(int i = 0; i < 5; i++) {
        int sum = 0;
        for(int j = 0; j < 7; j++) {
            sum += arr[i][j];
        }
        cout << "Student " << i+1 << " Attendance = " << sum << endl;
    }
}

int bestStudent(int arr[5][7]) {
    int maxSum = 0, index = 0;

    for(int i = 0; i < 5; i++) {
        int sum = 0;
        for(int j = 0; j < 7; j++) {
            sum += arr[i][j];
        }

        if(sum > maxSum) {
            maxSum = sum;
            index = i;
        }
    }
    return index;
}

float classPercentage(int arr[5][7]) {
    int totalPresent = 0;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 7; j++) {
            totalPresent += arr[i][j];
        }
    }

    return (totalPresent / 35.0) * 100;
}

int main() {
    int attendance[5][7];

    cout << "Enter attendance (1=Present, 0=Absent):\n";
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 7; j++) {
            cin >> attendance[i][j];
        }
    }

    cout << "\nTotal Attendance:\n";
    totalAttendance(attendance);

    int best = bestStudent(attendance);
    cout << "\nBest Student: Student " << best + 1;

    cout << "\nClass Attendance Percentage = " 
         << classPercentage(attendance) << "%\n";

    return 0;
}