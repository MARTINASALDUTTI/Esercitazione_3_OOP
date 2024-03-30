#ifndef __COMPLEX_H // Header guards
#define __COMPLEX_H

#include <iostream>

using namespace std;

namespace ComplexLibrary{

struct Complex
{
    double real;
    double imag;

    Complex(double a, double b): real(a), imag(b) {};
    Complex() = default;
};

ostream& operator<<(ostream& os, const Complex &c);

Complex operator+(const Complex &c1, const Complex &c2);

bool operator== (const Complex &c1, const Complex &c2);

Complex coniugate(const Complex& c);

}
#endif
