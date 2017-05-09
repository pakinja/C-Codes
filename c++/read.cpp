#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ifstream archivo("fichero.txt");
    char linea[128];
    long contador = 0L;

    if(archivo.fail())
    cerr << "Error al abrir el archivo fichero.txt" << endl;
    else
    while(!archivo.eof())
    {
        archivo.getline(linea, sizeof(linea));
        cout << linea << endl;

        if((++contador % 24)==0)
        {
            cout << "CONTINUA...";
            cin.get();
        }
    }

    cout << archivo;
    archivo.close();
    return 0;
}
