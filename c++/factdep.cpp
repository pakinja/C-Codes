#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int x, i, fact;
    fact = 1;

    cout << "Introduce un numero para calcular su factorial" << endl;
        cin >> x;

        for( i = 1; i <= x; i++)
        {
           fact = fact*i;
        }

    cout << "El factorial es: " << fact << endl;

   return 0;
}
