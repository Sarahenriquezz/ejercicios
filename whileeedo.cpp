#include <iostream>
using namespace std;

int main() {
    int opcion;
    double saldo = 1000.0;
    double cantidad;
    int intentos = 0;
    int pin, pinCorrecto = 1234;

    // Verificación de PIN
    do {
        cout << "Ingrese su PIN: ";
        cin >> pin;

        if(pin != pinCorrecto) {
            cout << "PIN incorrecto.\n";
            intentos++;
        }

        if(intentos == 3) {
            cout << "Tarjeta bloqueada.\n";
            return 0;
        }

    } while(pin != pinCorrecto);

    // Menú principal
    do {
        cout << "\n===== CAJERO AUTOMATICO =====\n";
        cout << "1. Consultar saldo\n";
        cout << "2. Depositar dinero\n";
        cout << "3. Retirar dinero\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Saldo actual: $" << saldo << endl;
                break;

            case 2:
                cout << "Cantidad a depositar: ";
                cin >> cantidad;

                if(cantidad > 0) {
                    saldo += cantidad;
                    cout << "Deposito exitoso.\n";
                } else {
                    cout << "Cantidad invalida.\n";
                }
                break;

            case 3:
                cout << "Cantidad a retirar: ";
                cin >> cantidad;

                if(cantidad <= saldo && cantidad > 0) {
                    saldo -= cantidad;
                    cout << "Retiro exitoso.\n";
                } else {
                    cout << "Fondos insuficientes o cantidad invalida.\n";
                }
                break;

            case 4:
                cout << "Gracias por usar el cajero.\n";
                break;

            default:
                cout << "Opcion invalida.\n";
        }

    } while(opcion != 4);

    return 0;
}