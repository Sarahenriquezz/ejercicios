#include <iostream>
using namespace std;

int main() {
    int numero;

    do {
        cout << "Ingresa un numero positivo: ";
        cin >> numero;

        if(numero < 0) {
            cout << "El numero es negativo, intenta otra vez.\n";
        }

    } while(numero < 0);

    cout << "Ingresaste: " << numero;

    return 0;
}