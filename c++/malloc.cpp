/* malloc example: random string generator*/
#include <stdio.h>      /* printf, scanf, NULL */
#include <stdlib.h>    /* malloc, free, rand */
#include <time.h>

int main ()
{
  srand (time(NULL));
  int i,n;
  float * buffer;

  printf ("How long do you want the string? ");
  scanf ("%f", &i);

  buffer = (float*) malloc (i+1);
  if (buffer==NULL) exit (1);

  for (n=0; n<i; n++)
    buffer[n]=rand()%26;
  buffer[i]='\0';

  printf ("Random string: %s\n",buffer);
  free (buffer);

  return 0;
}
