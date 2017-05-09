#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
using namespace std;

typedef struct
{
    int paginas;
    char nombre [50];
    float precio;
}
libro;

int main ()
{
    int i;
    libro JT[10];

    for ( i=0; i<10; i++)
    {
        JT[i].precio = 25 + i;
        cout << "El precio de la estructura  " << i << " es " << JT[i].precio << endl;
    }
}
