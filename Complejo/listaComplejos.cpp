// Escribe aquí tu programa que soluciona el ejercicio

#include <iostream>
#include <fstream>

using namespace std;

#include "Complejo.h"

/*
Realiza un programa que tome datos de un archivo de texto llamado "numerosComplejos.txt" y los cargue a un arreglo de objetos de tipo complejo.
El archivo contiene 2 números enteros en cada renglón y no sabes cuantos renglones contiene.
El programa debe mostrar la lista de números complejos leídos, uno en cada renglón y al final la suma de todos los complejos del arreglo utilizando el formato del siguiente ejemplo.

Ejemplo:
Si el archivo de entrada contiene esto:
5 4
2 -3
-1 6
El programa mostrará lo siguiente:
5 + 4i
2 + -3i
-1 + 6i
Suma: 6 + 7i
*/

int main(){ 
    
    Complejo complejos[10];
    int cantComplejos = 0;
    double real, imag;
    ifstream file;
    file.open("numerosComplejos.txt");
    while(!file.eof()){
        file >> real >> imag;
        complejos[cantComplejos].setReal(real);
        complejos[cantComplejos].setImag(imag);
        cantComplejos++;
    }
    file.close();
    Complejo sumaComplejo;
    for (int i = 0; i < cantComplejos; i++)
    {
        complejos[i].muestra();
        sumaComplejo = sumaComplejo.suma(complejos[i]);
    }
    
    cout << "Suma: " ;
    sumaComplejo.muestra();
    
    return 0;
}