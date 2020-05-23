#include "iostream"
#include "math.h"

using namespace std;

int main(void)
{
    
    cout << "_______________________________________________________________________________________";
    cout << "\nVerificar si dos numeros enteros son divisibles" <<endl <<endl;

    int num1, num2, mod, div;

    cout << "Ingrese el numero dividendo: ";
    cin  >> num1;
    cout <<endl <<endl;
    cout << "Ingrese el numero divisor: ";
    cin  >> num2;
    cout <<endl <<endl;

    /*Teniendo en cuenta que para que dos numeros enteros sean divisibles entre ellos no habra residuo*/
    mod = num1 % num2; 
    div = num1 / num2;

    /*En el momento que el modulo de las variables (num1 y num2) sea 0 quiere decir que son divisibles las dos variables
    en ese caso el programa confirmara que son divisibles y mostrara la respuesta de la division de los dos numeros dados
    en caso contrario el modulo no sea igual a 0, indica que no son divicibles los numeros*/
    if(mod == 0){
        
        cout << "Estos dos numeros si son divisibles. \nEl resultado de su division es: " << div <<endl <<endl;
    }else{
        cout << "Estos dos numeros no son divisibles" <<endl <<endl;
    }
    cout << "_______________________________________________________________________________________";


    return 0;

}