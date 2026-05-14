#include <iostream>

using namespace std;

int main(){
int opc, nota1, nota2, nota3;
float promedio;
 

cout<<"Bienvenido al sistema de notas"<<endl;
cout<<"para matematicas ingrese 1 / Para Programacion ingrese 2 / Para Fisica ingrese 3"<<endl;
cin>> opc;


switch (opc)
{
case 1:
cout<<"Ingrese la nota 1: "<<endl;
cin>> nota1;
cout<<"Ingrese la nota 2: " <<endl;
cin>> nota2;
cout<<"Ingrese la nota 3: "<<endl;
cin>> nota3;
    promedio = (nota1 + nota2 + nota3) / 3.0f ;
    cout<<"El promedio es: "<<promedio<<endl;
    if (promedio >= 6.0f)
    {
        cout<<" Felicidades ha aprobado"<<endl;
    } else if (promedio < 6.0f)
    { cout <<"Lo siento ha reprobado"<<endl;
   
    }
    
    
    break;
case 2:
cout<<"Ingrese la nota 1: "<<endl;
cin>> nota1;
cout<<"Ingrese la nota 2: "<<endl;
cin>> nota2;
cout <<"Ingrese la nota 3: " <<endl;
cin>> nota3;
    promedio = (nota1 + nota2 + nota3) / 3.0f ;
    cout<<"El promedio es: "<<promedio<<endl;
    if (promedio >= 6.0f)
    {
        cout<<" Felicidades ha aprobado"<<endl;
    } else if (promedio < 6.0f)
    { cout <<"Lo siento ha reprobado"<<endl;
   
    }
    break;
case 3:
cout<<"Ingrese la nota 1: "<<endl;
cin>> nota1;
cout<<"Ingrese la nota 2: "<<endl;
cin>> nota2;
cout<<"Ingrese la nota 3: "<<endl;
cin>> nota3;
    promedio = (nota1 + nota2 + nota3) / 3.0f ;
    cout<<"El promedio es: "<<promedio<<endl;
    if (promedio >= 6.0f)
    {
        cout<<" Felicidades ha aprobado"<<endl;
    } else if (promedio < 6.0f)
    { cout <<"Lo siento ha reprobado"<<endl;
   
    }
break;

default: 
cout<<"Error opcion invalida"<<endl;

return 0; 

}









}
