#include <iostream>
#include <fstream>

using namespace std;

int main()

{
    ifstream fichero("fichero.dat");
    int caracter;

    while(fichero.get(caracter))
    cout << caracter;
    cout << endl;
    fichero.close();                     //cierre del flujo

return 0;
}
