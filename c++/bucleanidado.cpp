#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

main()
{
    int i, j;

    for( i = 1; i<=9; i++)
    {
        for( j = 1; j <= 10; j++)
        {
            cout << i <<"x" << j << "=" << i * j << endl;
        }
        cout << endl;
        system ("pause");
    }

    return 0;
}
