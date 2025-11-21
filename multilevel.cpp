#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rno;

public:
    void getStudent() {
        cout << "Enter name of the student: ";
        cin >> name;
        cout << "Enter roll number of the student: ";
        cin >> rno;
    }

    void displayStudent() const {
        cout << "Name of the student: " << name;
        cout << "\nRoll number of the student: " << rno;
    }
};

class Test : public Student {
protected:
    int math, eng, sci;

public:
    void getTest() {
        getStudent();
        cout << "Enter Math marks: ";
        cin >> math;
        cout << "Enter English marks: ";
        cin >> eng;
        cout << "Enter Science marks: ";
        cin >> sci;
    }

    void displayTest() const {
        displayStudent();
        cout << "\nMath marks: " << math;
        cout << "\nEnglish marks: " << eng;
        cout << "\nScience marks: " << sci;
    }
};

class Result : public Test {
private:
    int total;
    float avg;

public:
    void getResult() {
        getTest();
        total = math + eng + sci;
        avg = total / 3.0f;
    }

    void displayResult() const {
        displayTest();
        cout << "\nTotal Marks: " << total;
        cout << "\nAverage Marks: " << avg;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Result students[n];  // Array of Result objects

    cout << "\n--- Enter details for each student ---\n";
    for (int i = 0; i < n; ++i) {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].getResult();
    }

    cout << "\n\n--- Student Results ---\n";
    for (int i = 0; i < n; ++i) {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].displayResult();
        cout << "\n----------------------\n";
    }

    return 0;
}
