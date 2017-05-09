#include <iostream>
using namespace std;

main()
{
    char nota;
    cout<<"introduzca la calificacion (A - F)"<< endl;
    cin>>nota;

    switch(nota)
    {
        case 'A': cout<<"Excelente";
        break;
        case 'B': cout<<"Bueno";
        break;
        case 'C': cout<<"regular";
        break;
        case 'D': cout<<"Suficiente";
        break;
        case 'E': cout<<"reprobado";
        break;
        case 'F': cout<<"Pena Nieto";
        break;
        default: cout<<"no es posible esa nota";
    }

return 0;
}
