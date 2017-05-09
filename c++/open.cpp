#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int i;
    i=10;
  //  while(i < 15)
  //  {
  //  cout << "esto no se va a ejecutar nunca" << endl;
  //   i++;
  //  }
    do
    {
      cout  << "esto se ejecuta al menos una vez" << endl;
      i++;
    }
    while (i < 15);

return 0;
}
