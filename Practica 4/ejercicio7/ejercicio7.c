#include <stdlib.h>
#include <stdio.h>


void main()
{


float num=0;
int decision=0, cantidad=0;


printf("Desea ingresar un numero?\n 1)SI\n 2)NO\n");
scanf("%i", &decision);

while (decision==1)
{

printf("Ingrese un numero.\n");
scanf("%f", &num);

while(num==0)
{
    printf("Ingreso 0, fin del programa.\n");
    exit(-1);
}
    cantidad=cantidad+1;

printf("Desea ingresar un numero?\n 1)SI\n 2)NO\n");
scanf("%i", &decision);
}
printf("La cantidad de numeros es: %i", cantidad);
}
