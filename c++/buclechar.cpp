#include <stdio.h>
#include <iostream>
using namespace std;

int main()

{
    char c;

    do
    {
        cout <<"Introduce una letra: " << endl;
        fflush (stdin);
        cin >> c;
    }
    while (c !='s' && c !='S');

return 0;
}
