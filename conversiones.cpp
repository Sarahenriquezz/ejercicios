#include <iostream>
using namespace std;

int main() {
    int opc;
    double valor, resultado;

    // Mostrar menú
    cout <<"MENU DE CONVERSOR" << endl;
    cout << "1. Celsius a Fahrenheit" << endl;
    cout << "2. Metros a centimetros" << endl;
    cout << "3. Dolares a euros" << endl;
    cout << "Seleccione una opcion: ";
    cin >> opc;

    // Pedir valor
    cout << "Ingrese el valor a convertir: ";
    cin >> valor;

    // Procesar opción
    switch(opc) {
        case 1:
            resultado = (valor * 9/5) + 32;
            cout << "Resultado: " << resultado << " Fahrenheit" << endl;
            break;

        case 2:
            resultado = valor * 100;
            cout << "Resultado: " << resultado << " centimetros" << endl;
            break;

        case 3:
            resultado = valor * 0.92; // cambio aproximado
            cout << "Resultado: " << resultado << " euros" << endl;
            break;

        default:
            cout << "Opcion no valida." << endl;
    }

    return 0;
}

