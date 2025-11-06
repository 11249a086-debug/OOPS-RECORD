#include<iostream>
using namespace std;

class Book {
private:
    string nameOfTheBook;
    string authorName;
    float price;

public:
    void input() {
        cout << "Enter name of the book: ";
        cin >> nameOfTheBook;
        cout << "Enter author name: ";
        cin >> authorName;
        cout << "Enter price: ";
        cin >> price;
    }

    void display() {
        cout << "Name of the book: " << nameOfTheBook << "\n";
        cout << "Author name: " << authorName << "\n";
        cout << "Price: " << price << "\n";
    }
};

int main() {
    int n;
    cout << "Enter number of books details needed: ";
    cin >> n;
    Book books[n]; // C++11 and later supports variable-length arrays
    for(int i = 0; i < n; i++) {
        cout << "Enter details for Book " << i + 1 << "\n";
        books[i].input();
    }
    for(int i = 0; i < n; i++) {
        cout << "Details of Book " << i + 1 << ":\n";
        books[i].display();
    }

    return 0;
}
