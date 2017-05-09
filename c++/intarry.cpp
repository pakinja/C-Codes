#include <fstream>
#include <iostream>
using namespace std;

int *ptr;

int main()
{
    char j;
    ifstream archivo("fichero.txt");
    char linea[128];
    long contador = 0L;

    if(archivo.fail())
    cerr << "Error al abrir el archivo fichero.txt" << endl;
    else
    while(!archivo.eof())
    {
       j= archivo.getline(linea, sizeof(linea));
        cout << linea << endl;
        if((++contador % 24)==0)
        {
            cout << "CONTINUA...";
            cin.get();
        }
    }

    cout << linea;
    archivo.close();
    return 0;
}
void array_ptr[]
{
    int i;
    for(i=0; i=j, i++)
        array_ptr[i]=*(ptr+i);
}
