// COMPLETA LO QUE FALTA (métodos suma y simplifica)
//
//  Fraccion.h
//

#ifndef Fraccion_h
#define Fraccion_h

#include <iostream>

using namespace std;

class Fraccion
{
public:
    Fraccion();
    Fraccion(int, int);
    int getNumerador();
    int getDenominador();
    void setNumerador(int num) { numerador = num; }
    void setDenominador(int denom) { denominador = denom; }
    Fraccion suma(Fraccion f2); // completa el método suma
    void muestra();
    void simplifica(); // realiza el método simplifica
private:
    int numerador;
    int denominador;
};

Fraccion::Fraccion()
{
    numerador = 0;
    denominador = 1;
}

Fraccion::Fraccion(int num, int denom)
{
    if (denom < 0)
    {
        num *= -1;
        denom *= -1;
    }
    numerador = num;
    denominador = denom;
}

int Fraccion::getNumerador()
{
    return numerador;
}

int Fraccion::getDenominador()
{
    return denominador;
}

void Fraccion::muestra()
{
    cout << numerador << "/" << denominador << endl;
}

// Completa el método suma
Fraccion Fraccion::suma(Fraccion f2)
{
    Fraccion resultado;
    resultado.numerador = (this->numerador * f2.denominador) + (this->denominador * f2.numerador);
    resultado.denominador = (this->denominador * f2.denominador);
    resultado.simplifica();
    return resultado;
}

// Completa el método simplifica
void Fraccion::simplifica()
{

    for (int i = 10; i >= 2; i--)
    {
        while (this->numerador % i == 0 && this->denominador % i == 0)
        {
            this->numerador = this->numerador / i;
            this->denominador = this->denominador / i;
        }
    }
}

#endif /* Fraccion_h */
