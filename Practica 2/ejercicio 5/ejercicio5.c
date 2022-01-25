#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main(){

    int a, par=2;

    printf ("Ingrese el n%cmero: \n", 163);
    scanf("%d", &a);

    if (a==0)
            {
                printf("El n%cmero %d no es par ni impar.", 163, a);
            }

    else if (a%par!=0)
                    {
                        printf("El n%cmero %d es impar.", 163, a);
                    }
    else if (a%par==0)
                    {
                        printf("El n%cmero %d es par.", 163, a);
                    }
    

    
    }
    