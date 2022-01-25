#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

float valorUno, valorDos, suma, producto, resta;

printf("Ingrese primer numero:\n");
scanf("%f", &valorUno);

printf("Ingrese segundo numero:\n");
scanf("%f", &valorDos);

suma=valorUno+valorDos;

resta=valorUno-valorDos;

producto=valorUno*valorDos;

printf("La suma es: %0.2f.", suma);
printf("La resta es: %0.2f.", resta);
printf("El producto es: %0.2f.", producto);

system("pause");

}

