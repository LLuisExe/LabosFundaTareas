#include "iostream"
#include "math.h"
#include "string"

using namespace std;

int main(void)
{
    string cadena1;
    int numletras, mod;

    cout << "\n\nMedidor de palabras";

    cout << "\n\n" << "Ingrese la palabra a evaluar: ";
    cin  >> cadena1;
    cout <<endl <<endl;
    numletras = cadena1.length();
    mod = numletras % 2;


    if(numletras > 10)
    {
        cout << "La palabra " << cadena1 << " tiene mas de diez caracteres." <<endl;
    }

    else if(numletras < 10)
    {
        cout << "La palabra \"" << cadena1 << "\" tiene menos de diez caracteres." <<endl;
    }

    else
    {
        cout << "La palabra \"" << cadena1 << "\" tiene diez caracteres." <<endl;
    }


    if(mod == 0)
    {
        cout << "La cantidad de caracteres es par" <<endl <<endl;
    }

    else
    {
        cout << "La cantidad de caracteres es impar" <<endl <<endl;
    }   

    return 0;

}