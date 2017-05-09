#include <stdio.h>

int main()

{
    float x,vo,t,a;
    printf("introduzca la posicion inicial\n");
    scanf("%f",&x);
    printf("introduzca la velocidad inicial\n");
    scanf("%f",&vo);
    printf("introduzca el tiempo\n");
    scanf("%f",&t);
    printf("introduzca la aceleracion\n");
    scanf("%f",&a);
 printf("la posicion final es %f",x+vo*t+((0.5)*a*t*t));

    return 0;
}
