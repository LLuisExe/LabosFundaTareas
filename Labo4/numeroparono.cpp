#include "iostream"
#include "math.h"

using namespace std;

int main(void)
{
    cout << "Comprovar si un numero entero es par o impar" <<endl <<endl;
    int a, mod;
    cout << "Ingrese el numero a evaluar: ";
    cin  >> a;
    cout <<endl <<endl;
    mod = a%2;

    if(mod == 0)
    {
        cout << "El numero " << a <<" es par"<<endl <<endl;
    }
    else
    {
        cout << "El numero " << a <<" es impar"<<endl <<endl;
    }
    
    return 0;

}