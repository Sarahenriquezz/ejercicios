#include <iostream>
using namespace std;

int main() {
    int a, b, c, central;

    // Pedir los números
    cout << "Ingrese el primer numero: ";
    cin >> a;

    cout << "Ingrese el segundo numero: ";
    cin >> b;

    cout << "Ingrese el tercer numero: ";
    cin >> c;

    // Determinar el número central
    if ((a > b && a < c) || (a < b && a > c)) {
        central = a;
    }
    else if ((b > a && b < c) || (b < a && b > c)) {
        central = b;
    }
    else {
        central = c;
    }

    // Mostrar resultado
    cout << "El numero central es: " << central << endl;

    return 0;
}

