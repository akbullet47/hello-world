#include <iostream>
#include <string>
using namespace std;

// Declare structure
struct Person
{
    string name;
    int age;
    string address;
};

int main()
{
    // Declare and initialize structure variable
    Person person1;

    person1.name = "Abbas Fazal";
    person1.age = 18;
    person1.address = "Rawalpindi";

    // Display values using dot notation
    cout << "Person Details:" << endl;
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Address: " << person1.address << endl;

    return 0;
}