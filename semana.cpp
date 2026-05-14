#include <iostream>

using namespace std;
int main(){
    int numero = 0;
    cout<<"ingresar un numero del 1 al 7"<<endl;
    cin>> numero;


switch (numero)
{case 1:
    cout<<"El numero corresponde al dia lunes"<<endl;
    break;


case 2:
    cout<<"el numero corresponde al dia martes"<<endl;
    break;


case 3:
    cout<<"el numero corresponde al dia miercoles"<<endl;
    break; 

case 4:
   cout<<"el numero corresponde al dia jueves"<<endl;
    break;


case 5:
    cout<<"el numero corresponde al dia viernes"<<endl;
    break;


case 6:
    cout<<"el numero corresponde al dia sabado "<<endl;
    break;

case 7:  
  cout<<"el numero corresponde al dia domingo"<<endl;
  break;

  //verificando error del rango
default: 
  cout<<"ERROR, fuera del rango"<<endl;

return 0;


    

}






}