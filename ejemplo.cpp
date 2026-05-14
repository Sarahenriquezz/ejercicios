#include <iostream>
using namespace std;

int main() {

    int opcion;

    cout << "1. Hola\n";
    cout << "2. Adios\n";
    cout << "Seleccione: ";
    cin >> opcion;

    switch(opcion){

        case 1:
            cout << "Hola";
            break;

        case 2:
            cout << "Adios";
            break;

        default:
            cout << "Opcion invalida";
    }

    return 0;
}