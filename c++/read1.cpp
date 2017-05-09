#include <fstream>
#include <iostream>
# include <stdio.h>
using namespace std;

/* Archivo de cabecera */



/* Aquí comienza la función principal main */

  main(){

/*abrir el archivo*/
int i;
FILE *buffer_prt;
buffer_prt = fopen ("fichero.txt","r");

cout << buffer_prt;
//apertura del archivo de ejemplo

/* cerrar el archivo*/

fclose(buffer_prt);

}

