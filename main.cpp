#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor
    Complex(double r = 0, double i = 0) {
        real = r;
        imag = i;
    }

    // Overload + operator
    Complex operator+(const Complex& c) const {
        return Complex(real + c.real, imag + c.imag);
    }

    // Overload - operator
    Complex operator-(const Complex& c) const {
        return Complex(real - c.real, imag - c.imag);
    }

    // Overload << operator
    friend ostream& operator<<(ostream& out, const Complex& c) {
        out << c.real;

        if (c.imag >= 0)
            out << " + " << c.imag << "i";
        else
            out << " - " << -c.imag << "i";

        return out;
    }
};

int main() {
    double r1, i1, r2, i2;

    cout << "====================================\n";
    cout << "    COMPLEX NUMBER CALCULATOR\n";
    cout << "====================================\n";

    cout << "\nEnter real part of first number: ";
    if (!(cin >> r1)) {
        cout << "Invalid input! Please enter numbers only.\n";
        return 1;
    }

    cout << "Enter imaginary part of first number: ";
    if (!(cin >> i1)) {
        cout << "Invalid input! Please enter numbers only.\n";
        return 1;
    }

    cout << "Enter real part of second number: ";
    if (!(cin >> r2)) {
        cout << "Invalid input! Please enter numbers only.\n";
        return 1;
    }

    cout << "Enter imaginary part of second number: ";
    if (!(cin >> i2)) {
        cout << "Invalid input! Please enter numbers only.\n";
        return 1;
    }

    Complex c1(r1, i1);
    Complex c2(r2, i2);

    Complex sum = c1 + c2;
    Complex difference = c1 - c2;

    cout << "\n----------- RESULTS -----------\n";
    cout << "First complex number:  " << c1 << '\n';
    cout << "Second complex number: " << c2 << '\n';
    cout << "Addition:              " << sum << '\n';
    cout << "Subtraction:           " << difference << '\n';
    cout << "--------------------------------\n";

    return 0;
}