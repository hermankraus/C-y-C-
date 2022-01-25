#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main(){

    float a=0, b=0, c=0;

    printf ("Ingrese el primer n%cmero: \n", 163);
    scanf("%f", &a);

    printf ("Ingrese el segundo n%cmero: \n", 163);
    scanf("%f", &b);

    printf ("Ingrese el tercer n%cmero: \n", 163);
    scanf("%f", &c);

    if (a>b && a>c)
            {
                printf("El n%cmero %f es el mayor.", 163, a);
            }

    else if (b>a && b>c)
                {
                    printf("El n%cmero %f es el mayor.", 163, b);
                }

    else if (c>a && c>b)
                {
                 printf("El n%cmero %f es el mayor.", 163, c);
                }
    

}
