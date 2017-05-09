#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

using namespace std;

double factorial (double a);

main()
{
   double x, y;
   double fact1, fact2;

   cout << "Introduce el primer numero para calcular el factorial: " << endl;
   cin >> x;
   fact1 = factorial(x);
   cout << fact1 << endl;

   cout << "Introduce el primer numero para calcular el factorial: " << endl;
   cin >> y;
   fact2 = factorial(y);
   cout << fact2 << endl;

    return 0;
}

   double factorial (double a)
{
   double i;
    double aux;
    aux = 1;

    for ( i = 1; i<=a; i++)
    {
        aux *= i;
    }

    return aux;
}

