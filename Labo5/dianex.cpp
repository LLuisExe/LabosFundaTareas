#include "iostream"
#include "math.h"
#include "ctime"

using namespace std;

int main(void)
{
    int aa, dd, mm, dia, mes, ano;
    double totalseg;
    time_t tiempo = time(NULL);
    struct tm fecha;
    
    cout <<endl <<endl;
    cout << "Ingrese el a" << char(164) << "o: ";
    cin  >> aa;
    cout << "Ingrese el mes: ";
    cin  >> mm;
    cout << "Ingrese el dia: ";
    cin  >> dd;

   /* totalseg = (aa * (3.154*pow(10,7)))+(mm * (2.628*pow(10,6)))+(dd * 86400);
    
    tiempo = totalseg + 86400;

    fecha = tiempo;
    ano = fecha.tm_year;
    mes = fecha.tm_mon;
    dia = fecha.tm_wday+1;*/


    fecha = *localtime( &tiempo );
    ano = fecha.tm_year ;
    mes = fecha.tm_mon + 1;
    dia = fecha.tm_mday;


    cout << ano << " - " << mes << " - " << dia <<endl;






    cout << "";
    


}