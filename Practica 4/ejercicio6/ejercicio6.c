#include <stdlib.h>
#include <stdio.h>


void main()
{

int cantidadNotas=0, decision=0;
float nota=0, suma=0;


printf("Elija una de las siguientes opciones:\n 1)Ingresar una nota.\n 2)Salir del programa.\n");
scanf("%i", &decision);

while (decision==1)
{

printf("Ingrese una nota correcta.\n");
scanf("%f", &nota);

while(nota<0||nota>10)
{
    printf("Nota invalida, ingrese una nota correcta.\n");
    scanf("%f", &nota);
}

    suma=suma+nota;
    cantidadNotas=cantidadNotas+1;

printf("Elija una de las siguientes opciones:\n 1)Ingresar una nota.\n 2)Salir del programa.\n");
scanf("%i", &decision);
}

printf("La suma de las notas es %0.2f y el promedio de las notas es %0.2f", suma, suma/cantidadNotas);


}