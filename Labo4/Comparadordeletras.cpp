#include "iostream"
#include "math.h"
#include "string"

using namespace std;

int main(void)
{
    string pril, andl;
    string pal1;
    int numb;
    bool bol;
    cout << "_______________________________________________________________________________________";

    cout << "\n\n";

    cout << "\"Comparador de primer y ultima letra\"\n\n";

    cout << "Ingrese una palabra: ";
    cin  >> pal1;
    cout <<endl <<endl;

    numb = pal1.length();
    pril = pal1.at(0);
    andl = pal1.at(--numb);


    if(pril == andl)
    {
        cout << "La leta \"" << pril << "\" considen al inicio y al final de la palabra \"" << pal1 <<"\".";
        cout <<endl ;
    }
    else
    {
        cout << "La palabra \"" << pal1 << "\" comienza y termina con distinta letras.";
        cout <<endl ;
        
    }

    cout << "_______________________________________________________________________________________";


    

    return 0;

 


}