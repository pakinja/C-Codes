#include<iostream>
#include<fstream>
using namespace std;

using namespace std;

char CADENA[640];

int main()
{

    //abrimos un fichero de entrada
    ifstream fe ("fichero.txt");

    fe.getline (CADENA, 40);

    cout << CADENA << endl;

    return 0;

}
