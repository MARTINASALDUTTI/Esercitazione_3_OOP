#include "ComplexNumber.hpp"

namespace ComplexLibrary
{
    //stampa come z= a+bi
    ostream& operator<< (ostream& os, const Complex& c)
    {
        os << c.real;
        if (c.imag >= 0)
            os << "+";
        os << c.imag << "i";
        return os;
    }

    // somma di numeri complessi
    Complex operator+(const Complex &c1, const Complex &c2)
    {
        return Complex(c1.real + c2.real, c1.imag + c2.imag);
    }

    //definizione ==
    bool operator== (const Complex &c1, const Complex &c2)
    {
        if ((c1.real- c2.real < 1e-16) && (c1.imag- c2.imag < 1e-16))
            return true;
        else
            return false;
    }

    //stampa il coniugato
    Complex coniugate(const Complex& c)
    {
        Complex coniugate_c=Complex(c.real, -c.imag);
        return coniugate_c;
    }
}
