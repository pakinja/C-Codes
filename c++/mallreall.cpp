#include <stdio.h>
#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;

void aleatorio (int *vector, int N);

int main ()
{
    int i, j,k;
    int N = 10;
    int *vector;
    vector = (int*)malloc(N*sizeof(int)); //asigna tamaño al vector (malloc)
    if(vector==NULL)
    {
        cout << "no se ha podido reservar espacio de memoria"<<endl;
    }
    else
    {
        aleatorio (vector,N);

        for ( i= 0; i < N; i++)
        {
            j = i+1;
            while(j < N)
            {
                if(*(vector+i)==*(vector+j))
                {
                    for(k = j; k+1 < N; k++)
                    {
                        *(vector+k)=*(vector+k+1);
                    }
                    N--;
                }
                else
                {
                    j++;
                }
            }
        }
        vector = (int*)realloc(vector,N*sizeof(int));//redimensiona el vector conservando valores
        if (vector==NULL)
        {
            cout << "no se ha podido reservar espacio en memoria"<<endl;
        }
        else
        {
            for(i=0; i < N; i++)
            {
                cout << *(vector+i)<<" ,";
            }
        }
    cout << endl;
    }

    system ("pause");
    return 0;
}

void aleatorio (int *vector, int N)
{
    int i;
    srand (time(NULL));

    for (i = 0; i < N; i++)
    {
        *(vector+i) = rand() %3;
        cout << *(vector+i)<< " ,";
    }
cout<<endl;
}
