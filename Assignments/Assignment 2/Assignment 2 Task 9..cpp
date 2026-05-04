#include <iostream>
using namespace std;

void totalPerRegion(float arr[4][7]) {
    for(int i = 0; i < 4; i++) {
        float sum = 0;
        for(int j = 0; j < 7; j++) {
            sum += arr[i][j];
        }
        cout << "Region " << i+1 << " Total = " << sum << " MW\n";
    }
}

int highestDay(float arr[4][7]) {
    float dayTotal[7] = {0};

    for(int j = 0; j < 7; j++) {
        for(int i = 0; i < 4; i++) {
            dayTotal[j] += arr[i][j];
        }
    }

    int index = 0;
    for(int i = 1; i < 7; i++) {
        if(dayTotal[i] > dayTotal[index]) {
            index = i;
        }
    }
    return index;
}

float overallAverage(float arr[4][7]) {
    float sum = 0;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 7; j++) {
            sum += arr[i][j];
        }
    }
    return sum / (4 * 7);
}

int main() {
    float grid[4][7];

    cout << "Enter power consumption for 4 regions over 7 days:\n";
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 7; j++) {
            cin >> grid[i][j];
        }
    }

    cout << "\nTotal Consumption per Region:\n";
    totalPerRegion(grid);

    int day = highestDay(grid);
    cout << "\nDay with Highest Demand = Day " << day + 1;

    cout << "\nOverall Average Consumption = " << overallAverage(grid) << " MW\n";

    return 0;
}