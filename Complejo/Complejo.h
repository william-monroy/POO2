// Escribe la clase complejo de acuerdo con la descripción
/*
Escribe la clase Complejo que contenga:
• 2 atributos de tipo double: uno para la parte real y otro para la parte imaginaria.
• Un constructor default que inicialice el número complejo con el valor 0 + 0i
• Un constructor que inicialice el número con los 2 valores que recibe como parámetro.
• Un método de acceso y modificación para cada uno de los atributos.
• El método suma (para sumar 2 complejos) que recibe como parámetro un número complejo y regresa como valor de retorno un número complejo que contiene la suma del número complejo actual con el número complejo recibido.
*/
#ifndef Complejo_h
#define Complejo_h

class Complejo
{
private:
    double real;
    double imag;

public:
    Complejo();
    Complejo(double real, double imag);
    double getReal() { return this->real; }
    void setReal(double real) { this->real = real; }
    double getImag() { return this->imag; }
    void setImag(double imag) { this->imag = imag; }
    Complejo suma(Complejo c2);
    void muestra();
};

Complejo::Complejo()
{
    this->real = 0;
    this->imag = 0;
}

Complejo::Complejo(double real, double imag)
{
    this->real = real;
    this->imag = imag;
}

Complejo Complejo::suma(Complejo c2)
{
    Complejo c3(this->real + c2.real, this->imag + c2.imag);
    return c3;
}

void Complejo::muestra()
{
    cout << this->real << " + " << this->imag << "i" << endl;
}

#endif

// Para el método muestra usa la siguiente línea.
// cout << real << " + " << imag << "i"<< endl;