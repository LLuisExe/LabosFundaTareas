#include "iostream"
#include "math.h"

using namespace std;

int main(void)

{
    float a, b, c, valorx, bcuad, ac4, b4ac, raiz, suma, resta, dos_a, x1, x2;

    //Titulo del programa
    cout << "\n\n----------------------------------------------------------------------------------------------------"<<endl;
    cout << "| Encontrar el valor de (x) en un tinomio de la forma: \'ax+bx+c\' a partir de la formula cuadratica |" <<endl;
    cout << "----------------------------------------------------------------------------------------------------"<<endl <<endl;

    //Se le indica al usuario ingresar los valores de las variables "a", "b" y "c"
    cout <<"Ingrese el valor de \"a\": ";
    cin  >> a;
    cout <<endl;
    cout <<"Ingrese el valor de \"b\": ";
    cin  >> b;
    cout <<endl;
    cout <<"Ingrese el valor de \"c\": ";
    cin  >> c;
    cout <<endl <<endl;

    //Se procede a realizar la operacion, en base a la formila cuadratica 
        //Se trabaja la parte de la raiz cuadrada
        bcuad = pow(b,2);
        ac4 = -4 * a * c;
        b4ac = bcuad + ac4;
        raiz = sqrt(b4ac);

        /*Despues de trabajar la raiz, la operacion
        se divide en dos caminos distintos, uno en donde
        el resultado de la raiz es positivo y otro en 
        donde es negativo*/
        //Haciendo que hallan dos resultados de "X" osea:"x1" y "x2"

        //Resultado de la raiz positiva 
        suma = -b + raiz;
        dos_a = 2 *a;
        x1 = suma / dos_a;

        //Resultado de la raiz negativa
        resta = -b -raiz;
        x2 = resta / dos_a;

    //Resultados mostrados en la terminal
    cout << "Los dos resultados de \'x\' son: " <<endl <<endl;
    cout <<"El resultado de x1 es: " << x1 <<endl;
    cout <<"El resultado de x2 es: " << x2 <<endl;
    cout << "---------------------------------------------------------------------------------------------------"<<endl
    ;






}