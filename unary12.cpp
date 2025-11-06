#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter(int v = 0) {
        value = v;
    }

    void display() {
        cout << "Value: " << value << endl;
    }

    Counter operator ++ () {
        ++value;
        return *this;
    }

    Counter operator ++ (int) {
        Counter temp = *this;  
        value++;
        return temp;           
    }

    Counter operator -- () {
        --value;
        return *this;
    }

    Counter operator -- (int) {
        Counter temp = *this;  
        value--;
        return temp;          
    }
};

int main() {
    Counter c1(5);

    cout << "Initial ";
    c1.display();

    cout << "\nUsing Prefix Increment (++c1):" << endl;
    ++c1;
    c1.display();

    cout << "\nUsing Postfix Increment (c1++):" << endl;
    c1++;
    c1.display();

    cout << "\nUsing Prefix Decrement (--c1):" << endl;
    --c1;
    c1.display();

    cout << "\nUsing Postfix Decrement (c1--):" << endl;
    c1--;
    c1.display();

    return 0;
}
