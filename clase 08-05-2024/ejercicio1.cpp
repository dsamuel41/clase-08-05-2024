#include <iostream>
using namespace std;
int main ()
{
    char opcion, variable = 'a,b,c';

    do
    {
        cout <<"menu"<< "\n";
        cout <<"a carne asada"<< "\n";
        cout <<"b pollo"<< "\n";
        cout <<"c cerdo"<< "\n";
        cout <<"seleccione una opcion"<< "\n";
        cin>> opcion;
        cout <<"opcion seleccionada"<<opcion<<"\n";


    } while (opcion != 'a' && opcion!= 'b' && opcion!='c');

    



    return 0;

}