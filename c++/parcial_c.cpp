#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define dim1 7
#define dim2 4
using namespace std;

int main()
{
   int i,j;

   float mat[dim1][dim2];
   FILE *f;
   // Loading Adjacency Matrix
f = fopen("ficheroII.txt", "r");
for(i = 0; i < dim1; i++){
    for(j = 0; j < dim2; j++){
        fscanf(f, "%f", &mat[i][j]);
		}
	}

  cout << mat[1][1];
   return 0;
}
