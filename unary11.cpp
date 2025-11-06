#include <iostream>
using namespace std;

class Number {
private:
    int x, y, z;

public:
    Number(int a = 0, int b = 0, int c = 0) {
        x = a;
        y = b;
        z = c;
    }

    void display() {
        cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    }

    void operator - () {
        x = -x;
        y = -y;
        z = -z;
    }
};

int main() {
    Number n1(10, -20, 30);

    cout << "Before applying unary minus:" << endl;
    n1.display();

    -n1;

    cout << "\nAfter applying unary minus:" << endl;
    n1.display();

    return 0;
}
