#include <iostream>
#include <stdio.h>
#include <fstream>
using namespace std;

char menu_art[60][150];


int main ()
{
    cout << menu_art;
}


    void get_menu_art(char menu_art[60][150])
    {
        int i;
        fstream fe("fichero.txt");
        for( i=0 ; !fe.eof() ; i++)
            fe.getline(menu_art[i],150);
        fe.close();
    }

