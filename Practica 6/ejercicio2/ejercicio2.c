#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 


void main(){

char nombre1[20]="", nombre2[20]= "";


printf("Ingrese el primer nombre.\n");
scanf("%s", &nombre1);

printf("Ingrese el segundo nombre.\n");
scanf("%s", &nombre2);


if (strcmp(nombre1, nombre2)==0)
{
    printf("Los nombres son iguales.\n");
}

if (strcmp(nombre1, nombre2) < 0)
{
    printf("El primer nombre precede alfabeticamente al segundo.\n");
}

if (strcmp(nombre2, nombre1) < 0)
{
    printf("El segundo nombre precede alfabeticamente al primero.\n");
}


}