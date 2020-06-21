#include "iostream"
#include "math.h"

using namespace std;

void leerArre(int tm, int arreglo_a[]);
void sumaArre(int tm, int arreglo_a[], int arreglo_b[], int arreglo_ab[]);
void outArre(int tm, int arreglo_a[], int arreglo_b[], int arreglo_ab[]);

//funcion prinsipal para ingresar datos
int main(void)
{
    int tm = 0;
    int arreglo_a [tm], arreglo_b [tm], arreglo_ab[tm];
    
    cout <<endl <<endl;
    cout << "\t--Suma de arreglos--" <<endl <<endl;
    cout << "Ingrese el tama" << char(164) << "o de los arreglos: ";
    cin  >> tm;

    cout << "Agregue los elemntos del primer arreglo:" <<endl;
    leerArre(tm, arreglo_a);

    cout << "Agregue los elemntos del segundo arreglo:" <<endl;
    leerArre(tm, arreglo_b);

    sumaArre(tm, arreglo_a, arreglo_b, arreglo_ab);
    
    outArre(tm, arreglo_a, arreglo_b, arreglo_ab);


return 0;
}

//solicitar datos sobre los arreglos 
void leerArre(int tm, int x[])
{
    x[tm];

    //llenado del arreglo a
    for(int i = 0;i < tm;i++)
    {
        cout << "Ingrese en numero que pertenecera a casilla " << i << ": ";
        cin  >> x[i]; 
    }
    cout <<endl <<endl;
}

//realiza la suma de los arreglos
void sumaArre(int tm, int a[], int b[], int ab[])
{
    a[tm];
    b[tm];
    ab[tm];

    //se repite hasta haver suamdo todos los elementos de los areglos
    //solo se suman los elementos en el mismo numero de casilla 
    for(int i = 0 ; i < tm ; i++)
    {
        ab[i] = a[i] + b[i]; 
    }
}


//presenta la suma de los arreglos
void outArre(int tm, int a[], int b[], int ab[])
{
    a[tm];
    b[tm];
    ab[tm];

    for(int i = 0;i < tm;i++)
    {
        cout << "La suma de " << a[i] << " + " << b[i] << " es igual a: " << ab[i];
        cout <<endl;
    }
    cout <<endl;
}