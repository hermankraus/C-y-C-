#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

    float saldo=0, retiro=0;

    printf ("Ingrese los datos de su cuenta bancaria. \n");
    scanf("%f", &saldo);

    printf ("Ingrese la cantidad deseada a retirar. \n");
    scanf("%f", &retiro);

    if (saldo<saldo-retiro)
    {
      printf("El valor a retirar es incorrecto.");
    }

    else 
    {
      printf("La cantidad a retirar es %0.2f. Su saldo final es %0.2f", retiro, (saldo-retiro));
    }
}   