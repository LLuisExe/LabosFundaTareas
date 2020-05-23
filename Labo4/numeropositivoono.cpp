#include "iostream"
#include "math.h"

using namespace std;

int main(void)
{
    cout << "Verificar si un numero es positivo, negativo o cero" <<endl <<endl;

    float a;

    cout << "Ingrese el numero a evaluar: ";
    cin  >> a;
    cout <<endl <<endl;

    if(a == 0)
    {
        cout << "Este numero no es pisitivo ni negativo, es un cero." <<endl <<endl;
    }
    else if(a < 0)
    {
        cout << "El numero " << a << " es negativo." <<endl <<endl;
    }
    else if(a > 0)
    {
        cout << "El numero " << a << " es positivo." <<endl <<endl;
    }

    return 0;
}