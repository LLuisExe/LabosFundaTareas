#include "iostream"
#include "math.h"

using namespace std;

void leerArre(int tm, int x[]);
int contador_num(int num, int repe, int tm, int x[]);

//funcion main
int main(void)
{
    int tm = 0, num, repe=0;
    int arreglo_a [tm];
    
    cout <<endl <<endl;
    cout << "\t--Arreglo y un entero--" <<endl <<endl;
    cout << "Ingrese el tama" << char(164) << "o del arreglo: ";
    cin  >> tm;

    leerArre(tm, arreglo_a);

    cout << "Ingrese el numero a comparar: " ;
    cin  >> num;

    repe = contador_num(num, repe, tm, arreglo_a);

    cout <<endl;
    cout << "El numero " << num << " se repitio " << repe << " veses en el arreglo." <<endl;;
    cout <<endl;

}

//llenado del arreglo por medio de un for
void leerArre(int tm, int x[])
{
    x[tm];

    
    for(int i = 0;i < tm;i++)
    {
        cout << "Ingrese en numero que pertenecera a casilla " << i << ": ";
        cin  >> x[i]; 
    }
    cout <<endl <<endl;
}

//verifica cuantas veses se repite el numero pedido
int contador_num(int num, int repe, int tm, int x[])
{
    //se repite hasta haver comparado todos los elementos
    for(int i = 0;i < tm;i++)
    {
        if(x[i] == num)
        {
            repe++;
        }
        else
        {
            repe = repe;
        }

    }
return repe;
}