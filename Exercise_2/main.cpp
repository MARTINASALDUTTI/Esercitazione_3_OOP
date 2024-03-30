#include "ComplexNumber.hpp"
#include <iostream>

int main()
{
    // Creazione di due numeri complessi
    ComplexLibrary::Complex c1(1.0, 2.0);
    ComplexLibrary::Complex c2(3.0, -4.0);

    // Stampa dei numeri complessi
    std::cout << "Numero complesso c1: " << c1 << std::endl;
    std::cout << "Numero complesso c2: " << c2 << std::endl;

    // Calcolo del coniugato del primo numero complesso
    ComplexLibrary::Complex conjugate_c1 = ComplexLibrary::coniugate(c1);
    std::cout << "Coniugato di c1: " << conjugate_c1 << std::endl;

    //Calcolo la somma dei due numeri complessi
    ComplexLibrary::Complex result = c1 + c2;
    std::cout << "Risultato della somma: " << result << std::endl;

    // Verifica dell'uguaglianza tra i due numeri complessi
    if (c1 == c2) {
        std::cout << "I numeri complessi c1 e c2 sono uguali." << std::endl;
    } else {
        std::cout << "I numeri complessi c1 e c2 non sono uguali." << std::endl;
    }

    return 0;
}
