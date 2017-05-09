#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main()
{
    int i, j;
    int escenario[50][50];
    FILE *fp;

    fp = fopen("fichero.txt","r");
    if(fp==NULL)
        printf("error");

    for(i=0;i<17;i++)
    {
        for(j=0;j<19;j++)
        {
            fscanf(fp, "%1d", &escenario[i][j]);//     se guarda en un array
            printf("%d", escenario[i][j]);        //       y se imprime a la vez (aprovechamos por que el bucle es el mismo)
        }
        printf("\n");      //cada vez que se termina una fila hay que pasar a la siguiente linea
    }

    fclose(fp);


    system("pause");
    return 0;

}
