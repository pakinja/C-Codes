#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int i;
    int N;
    int *vector;

    cout << "Dame un valor para N: " << endl;
    cin >> N;

    vector = (int*)malloc(N*sizeof(int));
    if (vector==NULL)
    {
        cout << "No se ha podido reservar la memoria" << endl;
    }
    else
    {
        for(i = 0; i < N; i++)
        {
            *(vector + i) = i;
        }
        for(i = 0; i < N; i++)
        {
            cout << *(vector + i) << ",";
        }
        cout << endl;

        cout << "Dame otro valor para N: " << endl;
        cin >> N;

        vector = (int*)malloc(N*sizeof(int));
        if (vector==NULL)
    {
        cout << "No se ha podido reservar la memoria" << endl;
    }
    else
    {
        for(i = 0; i < N; i++)
        {
            *(vector + i) = i;
        }
        for(i = 0; i < N; i++)
        {
            cout << *(vector + i) << ",";
        }
        cout << endl;
    }

    }
return 0;
}
