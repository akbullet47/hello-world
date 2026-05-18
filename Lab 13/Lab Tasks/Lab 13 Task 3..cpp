#include <iostream>
#include <string>
using namespace std;

// Declare structure
struct Student
{
    string name;
    int age;
    char grade;
};

int main()
{
    // Declare and initialize structure variable
    Student student1;

    student1.name = "Abbas Fazal";
    student1.age = 18;
    student1.grade = 'A';

    // Display structure member values
    cout << "Student Details:" << endl;
    cout << "Name: " << student1.name << endl;
    cout << "Age: " << student1.age << endl;
    cout << "Grade: " << student1.grade << endl;

    return 0;
}