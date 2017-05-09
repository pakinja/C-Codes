#include <iostream>
#include <stdio.h>
using namespace std;

void ordenar (int a[]);
void imprimir (int x[]);

int main ()
{
    int v[10]={3,5,2,5,6,8,9,2,0,10};
    ordenar (v);
    imprimir (v);

    return 0;
}

void ordenar (int a[])
{
    int i, j, aux;

    for (i=0; i<10; i++)
    {
        for ( j=i; j<10; j++)
        {
            if (a[i]< a[j])
            {
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
        }
    }
}
void imprimir (int x[])
{
    int i;
    for (i=0; i<10; i++)
    {
        cout << x[i]<< ",";
    }
}
