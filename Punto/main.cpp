#include <iostream>
#include <cmath>

#include "Punto.h"

using namespace std;

int main (){

    Punto p1(1,1);
    Punto p2(5,5);

    cout << "La distancia es: " << p1.distancia(p2) << endl;

    

    return 0;
}