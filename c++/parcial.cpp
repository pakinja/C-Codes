#include <stdio.h>
#include <stdlib.h>

#define FILAS 7

int main()
{
    float ventas[FILAS] = {
    123.50, 234.60, 345.45, 321.40, 345.00, 456.65, 0.0 };

    float total = 0;
    int i;

    puts("Ventas de la semana");
    puts("-------------------");

    for (i=0; i<FILAS; i++) {
        total += ventas[i];
        printf( "%8.2f\n", ventas[i] );
    }

    puts("--------");
    printf("%8.2f\n", total );

    system("pause");
    return 0;
}
