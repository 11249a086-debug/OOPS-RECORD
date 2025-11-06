#include <iostream>
using namespace std;
class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0.0, double i = 0.0)
        : real(r), imag(i)
    { }
    Complex add(const Complex &other) const {
        Complex result;
        result.real = real + other.real;
        result.imag = imag + other.imag;
        return result;
    }
    void display() const {
        cout << real << " + i" << imag << endl;
    }
};
int main() {
    Complex c1(9.86, 5.78);
    Complex c2(12.1, 337.2);
    cout << "First complex number: ";
    c1.display();
    cout << "Second complex number: ";
    c2.display();
    Complex sum = c1.add(c2);
    cout << "Sum of the two complex numbers: ";
    sum.display();
    return 0;
}

