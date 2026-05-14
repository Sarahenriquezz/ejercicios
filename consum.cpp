#include <iostream>
using namespace std;

int main() {
    int consumo;
    float TA, precio, total; 

    cout << "Ingrese el consumo: " << endl;
    cin >> consumo;

    if (consumo <= 10){
        total = 2.29 + 0.10;
    } else if (consumo > 10 && consumo <= 20){ 
        precio = 0.21; 
        TA = 0.10;
        total = (consumo * precio) + TA;
    } else if (consumo > 20 && consumo <= 30){
        precio = 0.37; 
        TA = 1.8;
        total = (consumo * precio) + TA;
    } else {
        precio = 0.76;
        TA = 3.00;
        total = (consumo * precio) + TA; 

    }

    cout << "Total a pagar: " << total << endl;


    return 0;
}
