#include <iostream>
using namespace std;


int main(){
 float monto1, descuento, total;
 int result;

 cout <<"ingrese el monto"<< endl; 
 cin >> monto1;
 if (monto1 > 100){
    descuento = monto1 * 0.30;
} else if (monto1 > 50){
    descuento = monto1 * 0.20;
} else if (monto1 >= 20){
    descuento = monto1 * 0.10;
} else if (monto1 < 20){
    descuento = 0;
}

total = monto1 - descuento;

cout << "descuento: " << descuento << endl;
cout << "Total a pagar: " << total;

return 0;
 

}