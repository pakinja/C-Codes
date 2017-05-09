#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int n, i,j, aux;
    cout << "Introduce un numero"<< endl;
    cin >> n;

   j = 0;

    for ( i = 2; i<n; i++)
    {
        aux = n % i;
        if (aux == 0)
        {
            j = 1;
        }
    }
    if(j == 1)
    {
        cout << n <<" no es primo"<< endl;
    }
    else
    {
        cout << n << " es primo" << endl;
    }

    return 0;
}
