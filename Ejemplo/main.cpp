#include <iostream>
#include <stdlib.h>
#include <fstream>


using namespace std;

int main() {

    int dim;
    ifstream archivo;
    archivo.open("file.txt");
    archivo >> dim;
    while (!archivo.eof())
    {
        string linea;
        string num, den, x;
        //linea.replace(linea.length(), 1, "");
        getline(archivo, num, ' ');
        getline(archivo, den, ' ');
        getline(archivo, x);
        cout << num << "/" << den << "-" << x << endl;
    }
    archivo.close();
    cout << "Un arreglo de " << dim << " dimensiones" << endl;

    return 0;
}