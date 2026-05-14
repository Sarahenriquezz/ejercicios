#include <iostream>
using namespace std;

int main(){
    int cantidad;
    float precio, subtotal, propina, total;

    cout << "Ingrese la cantidad de productos: " << endl;
    cin >> cantidad;

    cout << "Ingrese el precio de cada producto: " << endl;
    cin >> precio;

    subtotal = cantidad * precio;
    propina = subtotal * 0.10;
    total = subtotal + propina;

    cout << "Subtotal: " << subtotal << endl;
    cout << "Propina: " << propina << endl;
    cout << "Total a pagar: " << total << endl;

    return 0;
}