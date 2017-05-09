#include <stdio.h>
#include <iostream>

using namespace std;

int maximo ();

int main ()
{
    int x, y, aux;
    x=3;
    y=10;

    aux = maximo(x,y);

    cout <<" el valor de x en main es "<<x<<"El valor de y es "<<y << endl;


    return 0;
}

int maximo(int a, int b)
{
    a=8;
    b=5;
    cout << "El valor de x es " << a << "El valor de y es " << b << endl;

    return 0;
}
