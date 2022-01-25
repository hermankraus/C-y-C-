#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main(){

    float a=0;

    printf ("Ingrese el n%cmero: \n", 163);
    scanf("%f", &a);

    if (a>0)
            {
                printf("El n%cmero %f es positivo.", 163, a);
            }

    else if (a<0)
                {
                    printf("El n%cmero %f negativo.", 163, a);
                }

    else if (a==0)
                {
                 printf("El n%cmero es nulo.", 163);
    }
    

}
