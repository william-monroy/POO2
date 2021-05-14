#include <iostream>
#include <fstream>
using namespace std;

#include "Fraccion.h"

// función que recibe como parámetro una lista de Fracciones y su tamaño
// y muestra la lista de fracciones en la pantalla
void muestraLista(Fraccion lista[], int tam)
{
    for (int cont = 0; cont < tam; cont++)
        lista[cont].muestra();
}

int main()
{

    Fraccion listaFracciones[10];
    int cantFracciones = 0;

    ifstream archivo;
    archivo.open("archFracciones.txt");
    
    archivo >> 
    while (!archivo.eof())
    {
        
    }

    cout << "Lista de fracciones 1 " << endl;
    // llama a la función muestra lista con la primera lista de fracciones

    cout << "Lista de fracciones 2 " << endl;
    // llama a la función muestra lista con la segunda lista de fracciones

    cout << "Suma de las fracciones " << endl;
    // llama a la función muestra lista con la lista de fracciones que contiene la suma de las 2 listas anteriores

    return 0;
}
