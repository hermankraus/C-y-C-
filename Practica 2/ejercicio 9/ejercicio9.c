#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main(){

    float altura=0;

    printf ("Ingrese su altura en cm: \n");
    scanf("%f", &altura);

    if (altura<=150)
                {
                  printf("Persona  de  altura  por  debajo  de  la  media");
                }

    else if (altura>=151 && altura<= 170)
                          {
                            printf("Persona  de  altura  media");
                          }
    else if (altura>171)
                          {
                            printf("Persona de  altura por arriba de  la  media");
                          }


}