#include <iostream>
#include <string>
using namespace std;

class MyString {
private:
    string str;

public:
    MyString(string s = "") {
        str = s;
    }

    void display() const {
        cout << str;
    }

    MyString operator+(const MyString &s) const {
        MyString temp;
        temp.str = str + s.str; 
        return temp;
    }
};

int main() {
    string s1, s2;

    cout << "Enter first string: ";
    getline(cin, s1);

    cout << "Enter second string: ";
    getline(cin, s2);

    MyString str1(s1), str2(s2);
    MyString result;

    result = str1 + str2; 

    cout << "\nConcatenated string: ";
    result.display();
    cout << endl;

    return 0;
}
