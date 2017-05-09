#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int x,y,res,n,i;
    cout <<"Introduce el numero de terminos para la sucesion"<<endl;
    cin >> n;

    i = 3;
    x = 0;
    y = 1;

    if( n == 1)
    {
        cout<<"0";
    }
    else
    {
       cout << "0,1,";
    }

    while( i <=n )
    {
        res = x + y;
            cout << res <<",";
        x = y;
        y = res;
        i++;
    }


    return 0;
}
