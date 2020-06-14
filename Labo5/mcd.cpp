#include "iostream"
#include "math.h"

using namespace std;

int min(int a,int b) {
    int residuo, mcd;
    do
    {
        residuo = a % b;
        if (residuo != 0)
        {
            a = b;
            b = residuo;
        }
    }
    while(residuo != 0);

    return b;
}

int main(void)
{
    int primer, segundo, minCD;

    cout <<endl <<endl;
    cout << "MCD de dos numeros" <<endl <<endl;
    cout << "Ingrese el primer numero: ";
    cin  >> primer;
    cout <<endl <<endl;
    cout << "Ingrese el segundo numero: ";
    cin  >> segundo;
    cout <<endl <<endl;
    
    minCD = min(primer,segundo);

    cout << "El minimo comun divisor es: ";
    cout << minCD;
    cout <<endl <<endl;
    return 0;
}