#include "iostream"
#include "math.h"
#include "time.h"

using namespace std;

int main(void)
{
    int hora, min, seg1, seg;//variables correspondientes a la hora, minutos y segundos.
    
    //tengo entendido que esta es una variable para trabajar con la libreria "time.h"
    time_t t = time(NULL);/*se pone NULL para poner que la variable esta vacia 
    Ej cuando una variable va a multiplicar se le pone igual a 1 
    para esta no afecte de otra forma haciendo como que este vacia*/
    
    //el tiempo (en segundos) se calcula desde la 00:00 de 1 de 1900
    struct tm today = *localtime(&t);//*localtime lee la hora del PC
    //Y se almacena el tiempo en las estructuras tm
    
    hora = today.tm_hour;//.tm_hour asigna las horas que han pasado desde las 00:00
    min = today.tm_min;//.tm_min asigna los minutos que han pasado desde 00 minutos
    seg = today.tm_sec;//.tm_min asigna los segundos que han pasado desde 00 
    //con la diferencia que le sumo uno para ver la hora un segundo despues
    
    cout <<endl <<endl;
    cout << "-------------------------------" <<endl;
    cout << "Hora: " << hora << ":" << min << ":" << seg <<endl;
    //cout << t; (Esto lo utilize para poder comprovar lo del tiempo
    // osea si es verdad que comienza en 1900 :O 
    cout <<endl;
    
    //calcula nuevamente la hora +1seg
    hora = today.tm_hour;
    min = today.tm_min;
    seg1 = today.tm_sec + 1; 
    //con la diferencia que le sumo uno para ver la hora un segundo despues
    
    cout << "Hora mas un segundo: " << hora << ":" << min << ":" << seg1 <<endl;
    //cout << t; (Esto lo utilize para poder comprovar lo del tiempo
    // osea si es verdad que comienza en 1900 :O 
    cout << "-------------------------------" <<endl;
    cout <<endl <<endl;
}