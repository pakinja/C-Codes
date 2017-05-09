#include <stdio.h>
#include <iostream>
using namespace std;

int my_array[]={1,23,17,4,-5,100};
int *ptr;

int main ()
{
    int i;
    ptr = my_array;

    cout << endl;

    for ( i = 0; i < 6; i++)
    {
        cout << my_array[i] << endl;
        cout << *(ptr+i) << endl;
    }
return 0;
}
