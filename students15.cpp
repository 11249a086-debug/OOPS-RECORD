#include <iostream>
using namespace std;

class Student {
private:
    string name;
    float height; 

public:
    Student(string n = "", float h = 0.0) {
        name = n;
        height = h;
    }

    void display() const {
        cout << "Name: " << name << ", Height: " << height << " cm" << endl;
    }

    string getName() const {
        return name;
    }

    bool operator<(const Student &s) const {
        return height < s.height;
    }

    bool operator>(const Student &s) const {
        return height > s.height;
    }

    bool operator==(const Student &s) const {
        return height == s.height;
    }
};

int main() {
    string name1, name2;
    float h1, h2;

    cout << "Enter name of first student: ";
    cin >> name1;
    cout << "Enter height of first student (in cm): ";
    cin >> h1;

    cout << "\nEnter name of second student: ";
    cin >> name2;
    cout << "Enter height of second student (in cm): ";
    cin >> h2;

    Student s1(name1, h1);
    Student s2(name2, h2);

    cout << "\nStudent 1: ";
    s1.display();
    cout << "Student 2: ";
    s2.display();
    cout << endl;

    if (s1 == s2)
        cout << "Both students have the same height.\n";
    else if (s1 > s2)
        cout << s1.getName() << " is taller than " << s2.getName() << ".\n";
    else
        cout << s1.getName() << " is shorter than " << s2.getName() << ".\n";

    return 0;
}
