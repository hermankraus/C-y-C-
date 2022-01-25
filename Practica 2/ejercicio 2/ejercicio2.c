#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main(){

    float a=0, b=0;

    printf ("Ingrese el primer n%cmero: \n", 163);
    scanf("%f", &a);

    printf ("Ingrese el segundo n%cmero: \n", 163);
    scanf("%f", &b);

    if (a>b)
            {
                printf("El n%cmero %f es mayor que %f.", 163, a, b);
            }

    else if (b>a)
                {
                    printf("El n%cmero %f es mayor que %f.", 163, b, a);
                }

    else if (b=a)
                {
                 printf("Ambos numeros son iguales.");
    }
    

}
