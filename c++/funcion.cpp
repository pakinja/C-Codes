#include <iostream>
#include <stdio.h>

using namespace std;
int num1=2;
int num2=4;
int suma;

    void funcion()
    {
    cout<<"funci�n sin valor de retorno"<< endl;
    }
    int sumar(int a, int b)
    {
    return a+b;
    }

int main()
{
    suma=sumar(num1,num2);
    cout << suma << endl;
    funcion();
    cin.get();

    return 0;
}
