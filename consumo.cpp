#include <iostream>
using namespace std;

int main() {
int consumo, subtotal, descuento;
float precio, d, total;

cout <<"ingreso de consumo: " << endl;
cin >> consumo;

if (consumo < 100) {
    total = consumo *0.12; 
} else if (consumo >= 100 && consumo <= 300) {
    d= 0.08;
    precio= 0.12;
    subtotal= consumo *precio;
    descuento= subtotal *d;
    total= subtotal - descuento; 
} else if (consumo >= 300 && consumo <= 500) {
    d= 0.015;
    precio= 0.12;
    subtotal= consumo *precio;
    descuento= subtotal *d;
    total= subtotal - descuento;
} else  
       { d= 0.025;
        precio= 0.12;
        subtotal= consumo *precio;
        descuento= subtotal *d;
        total= subtotal - descuento;
}

cout<<"total a pagar:  " << total <<endl;

return 0;




} 