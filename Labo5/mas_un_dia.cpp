#include "iostream"
#include "math.h"

using namespace std;

//esta funcion solo recibe el valor entero del año
int bisiesto(int year) //Esta es la funcion para calcular si un año es bisiesto
{
    int p1, p2_1, p2_2;//Estas son las variables en donde se almacenaran los resultados de las pruevas
    bool tipo;//En esta variable se almacenara el valor 0 o 1 para saver si es bisiesto o no 

    p1 = year % 400;//primera prueba: el año sea divisibles entre 400

    //la prueva 2 contanta de dos partes
    p2_1 = year % 4;//la primera: el año sea divisible entre 4
    p2_2 = year % 100;//la segunda: el año no sea divisible entre 100

    if(p1 == 0)//por medio de este if se verifica si la primera prueva se cumple(sea divisible entre 400)
        tipo = 1;//Si se cumple tipo es igual a 1 
    else if((p2_1 == 0)&&(p2_2 != 0))//por medio de este if se verifica si la Segunda prueva se cumple(sea divisible entre 4 y que no sea dibisible entre 100)
        tipo = 1;//Si se cumple tipo es igual a 1 
    else 
        tipo = 0;//Si no se cumple ninguan de las pruevas tipo es igual a 0

return tipo;
}

//esta funcion es la que se encarga de calcular cual es el siguiente dia
int nuevodd(int dd, int mm, int bi_yy)//variables que solisita la funcion
{
    int New_dd;

    //primero dividiremos en que tipo de mes se encuentra el dia
    if((mm == 3) || (mm == 1) || (mm == 7) || (mm == 8) || (mm == 10) || (mm == 12))//para los meses de 31 dias
    {
        New_dd = dd + 1;
        if(New_dd > 31)
        {
            //si, al sumarle uno al dia, el dia supero el rango de 1 a 31 pasa a ser 1 
            New_dd = 1;
        }
        else//si no supera el rango sigue mantenenien el valor de New_dd = dd +1
        {
            New_dd = New_dd;//eso es como forma representativa de que sigue siendo igual
        }       
    }
    else if((mm == 4) || (mm == 5) || (mm == 6) || (mm == 9) || (mm == 11))//para los meses de 30 dias
    {
        New_dd = dd + 1;
        if(New_dd > 30)
        {
            //si, al sumarle uno al dia, el dia supero el rango de 1 a 30 pasa a ser 1 
            New_dd = 1;
        }
        else//si no supera el rango sigue mantenenien el valor de New_dd = dd +1
        {
            New_dd = New_dd;//eso es como forma representativa de que sigue siendo igual
        }
    }
    else//solo para el mes de febrero
    {    
        New_dd = dd + 1;
        if((bi_yy == 1) && (New_dd > 29))//si el año es bisiesto
        { 
            //si, al sumarle uno al dia, el dia supero el rango de 1 a 29 pasa a ser 1 
            New_dd = 1;
        }
        else if((bi_yy == 0) && (New_dd > 28))//si el año es bisiesto
        { 
            //si, al sumarle uno al dia, el dia supero el rango de 1 a 28 pasa a ser 1 
            New_dd = 1;
        }
        else//si no supera el limite de dias no afecta si es bisiesto o no
        {
            New_dd = New_dd;//eso es como forma representativa de que sigue siendo igual
        }
    }
return New_dd;
}

int nuevomm(int New_dd, int mm)
{
    int New_mm;

    //teniendo en cuenta que, si el dia nueva es 1 quiere decir que avanzo un mes
    if(New_dd == 1)
    {
        //si el dia es 1 el mes aumenta
        New_mm = mm + 1;

        if((New_mm > 12) && (New_dd == 1))
        {
            //si el aumento de mes anterior sobrepasa a 12 el mes sera  igual a 1 osea enero
            New_mm = 1;
        }
        else if(New_dd == 1)
        {
            //si el aumento de mes anterior sobrepasa a 12 el mes sera  igual a 1 osea enero
            New_mm = mm + 1;
        }
        else
        {
            //si no es dia 1 el mes es igual
            New_mm = mm;//eso es como forma representativa de que sigue siendo igual
        }
    }
    else
    {
        //si no es dia 1 el mes es igual
        New_mm = mm;//eso es como forma representativa de que sigue siendo igual
    }
    
return New_mm;
}

int nuevoyy(int New_dd, int New_mm, int yy)//esta funcion calcula el año nuevo
{
    int New_yy;

    //teniendo en cuenta que, el dia y el mes sean 1 (1 de enero) quiere decir que ha pasado un año
    if((New_dd == 1) && (New_mm == 1))
    {
        //si el dia es 1 y el mes es 1 aumenta un año
        New_yy = yy + 1;
    }
    else
    {
        //si no es dia 1 o el mes no es 1 , el año sigue igual
        New_yy = yy;//eso es como forma representativa de que sigue siendo igual
    }
return New_yy;
}

int main(void)
{
    int dd=1, mm=1, yy=1;//siendo estas las variables de dia, mes y año;
    int bi_yy=1;//esta es para almacenar el dato si es visiseto el año
    int New_dd, New_mm, New_yy;//seran las variables donde se almacenara la fecha ingresada mas un dia
    string prueba;

    //presentacion
    cout <<endl <<endl;
    cout << "\t-- Mas un Dia --";
    cout <<endl <<endl;


    //El usuario ingresa una fecha
    cout << "Ingrese una fecha en el siguiete orden:" <<endl;
    cout << "A" << char(164) << "o que quieras: ";
    cin  >> yy;
    bi_yy = bisiesto(yy);

    //este do...while es para comprovar si el mes ingresado es real osea un umero entre 1 y 12
    do
    {
        cout << "Mes del 1 al 12: ";
        cin  >> mm;

    }while((mm < 1) || (mm > 12));

    //este if es para saver que rango de dias pedirle al usuario dependiendo del mes
    if((mm == 3) || (mm == 1) || (mm == 7) || (mm == 8) || (mm == 10) || (mm == 12))//para los meses de 31 dias
    {
        do
        {        
            cout << "Ingrese el dia del mes (Entre 1 y 31): ";
            cin  >> dd;
        }while((dd < 1) || (dd > 31));
    }
    else if((mm == 4) || (mm == 5) || (mm == 6) || (mm == 9) || (mm == 11))//para los meses de 30 dias
    {    
       do
        {        
            cout << "Ingrese el dia del mes (Entre 1 y 30): ";
            cin  >> dd;
        }while((dd < 1) || (dd > 30));
    }
    else//solo para el mes de febrero
    {    
        if(bi_yy == 1)//si el año es bisiesto
        { 
            do
            {        
                cout << "Ingrese el dia del mes (Entre 1 y 29): ";
                cin  >> dd;
            }while((dd < 1) || (dd > 29));
        }
        else//esto aplica cuando el año no es bisiesto
        {
            do
            {        
                cout << "Ingrese el dia del mes (Entre 1 y 28): ";
                cin  >> dd;
            }while((dd < 1) || (dd > 28));
        }
    }

    //al finalizar los if y los do..while quedaran estas variables ya cada una con su respectivo dato.
    //cout << yy <<endl;
    //cout << mm <<endl;
    //cout << dd <<endl;


    //estas funciones son las que calcularan la nueva fecha
   New_dd = nuevodd(dd, mm, bi_yy);
   New_mm = nuevomm(New_dd, mm);
   New_yy = nuevoyy(New_dd, New_mm, yy);

   cout <<endl <<endl;
   cout << "Si le sumamos un dia a la fecha que ingresastes ";
   cout << dd << "/" << mm << "/" << yy <<endl;
   cout << "La nueva fecha seria: ";
   cout << New_dd << "/" << New_mm << "/" << New_yy <<endl <<endl;
}