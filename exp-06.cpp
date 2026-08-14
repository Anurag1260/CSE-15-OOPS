#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;

public:
    // Default Constructor
    Student() {
        roll = 0;
        name = "Unknown";
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor
    Student(int r, string n) {
        roll = r;
        name = n;
        cout << "Parameterized Constructor Called" << endl;
    }

    // Copy Constructor
    Student(const Student &s) {
        roll = s.roll;
        name = s.name;
        cout << "Copy Constructor Called" << endl;
    }

    void display() {
        cout << "Roll No : " << roll << endl;
        cout << "Name    : " << name << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor Called" << endl;
    }
};

int main() {
    Student s1;                  // Default Constructor
    Student s2(101, "Anuj");     // Parameterized Constructor
    Student s3 = s2;             // Copy Constructor

    cout << "\nStudent 1 Details:\n";
    s1.display();

    cout << "\nStudent 2 Details:\n";
    s2.display();

    cout << "\nStudent 3 Details:\n";
    s3.display();

    return 0;
}