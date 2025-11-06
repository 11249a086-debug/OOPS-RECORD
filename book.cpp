#include<iostream>
using namespace std;

class Book {
private:
    string bookName;
    string authorName;
    float cost;

public:
    void input() {
        cout << "Enter name of the book: ";
        getline(cin, bookName); 
        cout << "Enter author name: ";
        getline(cin, authorName);  
        cout << "Enter cost: ";
        cin >> cost;
    }

    void display() {
        cout << "Name of the book: " << bookName << "\n";
        cout << "Author name: " << authorName << "\n";
        cout << "Cost: " << cost << endl;
    }
};

int main() {
    Book b;
    b.input();
    b.display();
    return 0;
}

