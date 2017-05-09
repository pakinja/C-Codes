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
     libro JT;
     JT.paginas = 50;
     strcpy (JT.nombre, " Juego de tronos");
     JT.precio = 25.5;

     cout << "El libro juego de tronos tiene " << JT.paginas << " paginas " << endl;
     cout << " EL nombre del libro es " << JT.nombre << endl;
     cout << "El precio de Juego de tronos es " << JT.precio << endl;

     system ("pause");
     return 0;
}
