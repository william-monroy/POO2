/*
"Escribe una clase llamada Fraccion que permita trabajar con aritmética de fracciones. --
Usa variables enteras para representar los datos privados de la clase: el numerador y el denominador. Escribe un constructor que permita que un objeto de ésta clase sea inicializada cuando se declara.
El constructor debe contener valores por defecto en caso de que no haya inicializadores (0/1), y deben almacenar la fracción en forma reducida. Por ejemplo, la fracción 2 / 4 se almacenaría en el objeto como 1 en el numerador y 2 en el denominador.
Al crear la fracción, evitar (numerador y denominador negativos), (numerador positivo y denominador negativo).
Las fracciones SIEMPRE deben almacenarse de manera simplificada
Escribe funciones miembras públicas para realizar cada una de las siguientes tareas:
- Suma de dos Fracciones. El resultado debe almacenarse en forma reducida.
tiplicación de dos Fracciones. El resultado debe almacenarse en forma reducida.
- Imprimir Fracciones en la forma a / b, donde a es el numerador y b es el denominador."
*/

#include <iostream>

using namespace std;

#include "Fraccion.h"

int main(){

    Fraccion f1(15,30);
    Fraccion f2(35,50);

    Fraccion f3;
    f3 = f1.suma(f2);
    f3.imprimir();

    Fraccion f4; 
    f4 = f1.multiplicacion(f2);
    f4.imprimir();


    return 0;
}