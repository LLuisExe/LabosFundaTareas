#include "iostream"
#include "math.h"

using namespace std;

int main()
{
    //Declaracion de las variables a utilizar
    int a, b, c, suma, promedio3; 

    //Nombre pricipal del programa
    cout << "--------------------------"<<endl;
    cout << "| Calculador de promedio |"<< endl;
    cout << "--------------------------"<<endl <<endl <<endl;

    //Es la instruccion que le dice a usuario que igrese los numeros que decea que promedie
    cout <<"-Ingrese el primer valor: "; 
    cin  >> a;
    cout << "\n-Ingrese el segundo valor: ";
    cin  >> b;
    cout << "\n-Ingrese el tercer valor: ";
    cin  >> c;


    //Este es el proceso para sacar el promedio

        //Primero la suma de los tres numeros
        suma= a+b+c;

        //Luego el resultado de la suma se divide entre tres(es la cantida de datos dados)
        promedio3 = suma/3;
      
    //Finalmente se expone el resultado en la consola
    cout << "\nSu promedio es:"; 
    cout << "\t"<< promedio3 << endl << endl;
    cout << "--------------------------"<<endl;
    
    return 0;


}