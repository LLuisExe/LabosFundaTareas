#include "iostream"
#include "math.h"

using namespace std;

int main(void)
{
    //Declaracion de variables
    string nproducto = "";
    float cantidad, precio, dinerog;
    string  *codigo;

    //Titulo del programa
    cout << "\n\n---------------------" << endl;
    cout << "| Caja Registradora |" <<endl;
    cout << "---------------------" << endl <<endl <<endl;

    //Se le indica al usuario que ingrese los datos del producto
    cout << "-Ingrese el nombre del producto: ";
    cin  >> nproducto;
    cout << "\n-Ingrse el precio del producto: $";
    cin  >> precio; 
    cout << "\n-Ingrse la cantidad de producto: ";
    cin  >> cantidad;
    cout << "" <<endl <<endl;

    //Operacion para encontrar el dinero gastado
    dinerog = precio * cantidad;

    //El codigo de el producto dado en la factura sera la direcion de la variable en la memoria RAM
    codigo = &nproducto;

    //Imprecion de la factura
    //
    cout <<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" <<endl;
    cout <<"::      Factura                                             Tienda C++      ::" <<endl;
    cout <<"::--------------------------------------------------------------------------::" <<endl;
    cout <<":: Codigo   | Producto\t\t\t\t| Cantida | Precio unitario ::" <<endl;
    cout <<":: "<<codigo<<" |"<<" " <<nproducto<<"\t\t\t\t"<<"|"<<" "<<cantidad <<"\t" <<"  |"<<" \t$" <<precio<<"\t"<<"    ::" <<endl;
    cout <<"::          |                                   |         |                 ::" <<endl;
    cout <<"::          |                                   |         |                 ::" <<endl;
    cout <<"::          |                                   |         |                 ::" <<endl;
    cout <<"::          |                                   |         |                 ::" <<endl;
    cout <<"::--------------------------------------------------------------------------::" <<endl;
    cout <<"::\t\t\t\t\t\tDinero Gastado: $"<< dinerog<<"\t" <<  "    ::" <<endl;
    cout <<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" <<endl;


    


}