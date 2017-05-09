#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define FILAS 7
#define COLS 4
using namespace std;

int main()
{
    float VentaSemanaQ[FILAS][COLS];
    FILE *fp1;
    int i,j;

    fp1 = fopen("ficheroII.txt", "r");   //Abrimo  el archivo

for(i=0; i<FILAS; i++)                                   //Iteramos i,j para  ir almacenando los valores.
    for(j=0; j<COLS; j++)
    {
        fscanf(fp1, "%8.2f", &VentaSemanaQ[i][j]);            // Leemos un float y lo guardamos en A en la posicion i,j
        //fscanf(fp1, "%f", &B[i][j]);            // Leemos un float y lo guardamos en B en la posicion i,j
        printf("Matriz A: %8.2f \n", VentaSemanaQ[i][j]);
        //printf("Matriz B: %.2f \n", B[i][j]);

    }
fclose(fp1);

system("PAUSE");
return 0;
}

