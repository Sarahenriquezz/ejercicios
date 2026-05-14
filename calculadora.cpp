#include <iostream>
using namespace std; 

int main() {
    int n1, n2, opc; 
    float result; 

    cout <<"Bienvenido a la calculadora"<< endl;
    cout << "Para sumar ingrese 1, Para restar ingrese 2, Para multiplicar ingrese 3, Para dividir ingrese 4" <<  endl;
    cin >> opc; 
    cout <<"ingrese el primer numero"<< endl;
    cin >> n1;
    cout <<"ingrese el segundo numero"<< endl;
    cin >> n2;

switch (opc)
{case 1:
    result = n1 + n2;
    cout <<"el resultado de la suma es: "<< result << endl;
    break;

case 2:
    result = n1 - n2;
    cout <<"el resultado de la resta es: "<< result << endl;
    break;          
case 3:
    result = n1 * n2;
    cout <<"el resultado de la multiplicacion es: "<< result << endl;
    break;
case 4:
    if (n2 != 0){
        result = n1 / n2;
        cout <<"el resultado de la division es: "<< result << endl;
    } else {
        cout <<"Error: No se puede dividir por cero." << endl;
    }
    break;
default:
    cout <<"Opcion invalida, por favor ingrese una opcion del 1 al 4." << endl;


return 0;   



}

}