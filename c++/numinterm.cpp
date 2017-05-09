#include <stdio.h>
#include <iostream>
using namespace std;

main()
{
    int x, y, i;

    cout << "Introducir numero: ";
    cin >> x;

   do
   {
    cout << "Introduce un numero mayor al anterior: ";
    cin >> y;
   }
   while(y < x);


    for(i = x + 1 ; i < y; i++)
    {
        cout << i <<endl;
    }


    return 0;
}
