#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal eats food." << endl;
    }
};

class Dog : public Animal {   // Single Inheritance
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

int main() {
    Dog d;
    d.eat();   // inherited from Animal
    d.bark();  // Dog's own function
    return 0;
}
