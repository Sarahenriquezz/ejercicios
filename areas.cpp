#include <iostream>

using namespace std;




int main() {
int n1, n2, n3;
float area;
char opc;

cout <<"bienvenido al menu de areas, para calcular el area de un cuadrado ingrese C, para calcular el area de un rectangulo ingrese R, para calcular el area de un triangulo ingrese T"<< endl;
cin >> opc;

switch (opc)
{
case 'C':
case 'c':
    cout <<"ingrese el lado del cuadrado: "<< endl;
    cin >> n1;
    area = n1 * n1;
    cout <<"el area del cuadrado es: "<< area << endl;
    break;
case 'R':
case 'r':
    cout <<"ingrese la base del rectangulo: "<< endl;
    cin >> n1;
    cout <<"ingrese la altura del rectangulo: "<< endl;
    cin >> n2;
    area = n1 * n2;
    cout <<"el area del rectangulo es: "<< area << endl;
    break;
case 'T':
case 't':
    cout <<"ingrese la base del triangulo: "<< endl;
    cin >> n1;
    cout <<"ingrese la altura del triangulo: "<< endl;
    cin >> n2;
    area = (n1 * n2) / 2;
    cout <<"el area del triangulo es: "<< area << endl;
    break;

default:
    cout <<"opcion invalida"<< endl;
    break;
}
 
return 0;



}