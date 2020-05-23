#include "iostream"
#include "math.h"

using namespace std;

int main(void)
{
    //Variables a utilizar
    float radio, perimetro, area0, cuarad, pi, pirad;
    
    //El valor del numero PI es 3.14159265358979323846
    pi= 3.14159265358979323846;
    
    //Titulo del programa
    cout << "\n----------------------------------------------------"<<endl;
    cout << "| \"Area y Perimetro de un circulo segun su radio\" |"<<endl;
    cout << "----------------------------------------------------"<<endl <<endl <<endl;

    //Se le indica al usuario ingresar el valor de el radio
    cout << "- Ingresa el valor de el radio: ";
    cin  >> radio;

    //Se calcula el Area del circulo 
        //Se eleva el radio al cuadrado
        cuarad = pow(radio,2);

        //Se efectua la multiplicación de PI y el radio al cuadrado
        pirad = pi * cuarad;

        //El resultado del producto anterior (PI y el radio al cuadrado) es dividido entre dos
        area0 = pirad /2;
    
    //Reprecentacion de el resultado final obtenido
    cout << "\nEl Area del circulo es: " << area0 <<endl <<endl;

    //Se calcula el perimetro del circulo
        perimetro = pi * radio * 2;
    
    //Reprecentacion de el resultado obtenido
    cout << "El Perimetro del circulo es: " << perimetro <<endl <<endl;
    cout << "----------------------------------------------------" <<endl;



}


