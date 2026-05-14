#include <iostream>
#include <cmath>

using namespace std;

int main() {

    float a, b, c;
    float x1, x2, x;
    float discriminante;

    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout << "Ingrese el valor de c: ";
    cin >> c;

    // Verificar si es ecuacion lineal
    if(a == 0){

        cout << "La ecuacion no es cuadratica, es lineal." << endl;

        x = -c / b;

        cout << "La raiz es: " << x << endl;
    }

    else{

        discriminante = (b * b) - (4 * a * c);

        // Verificar si hay raices complejas
        if(discriminante < 0){

            cout << "No se puede realizar el calculo." << endl;
            cout << "Existen raices complejas conjugadas." << endl;
        }

        else{

            x1 = (-b + sqrt(discriminante)) / (2 * a);
            x2 = (-b - sqrt(discriminante)) / (2 * a);

            cout << "Raiz 1: " << x1 << endl;
            cout << "Raiz 2: " << x2 << endl;
        }
    }

    return 0;
}