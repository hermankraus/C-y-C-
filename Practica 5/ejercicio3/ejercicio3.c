#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

int array[5];
int contador=0;

for (int i = 0; i < 5; i++)
{
    printf("Ingrese el numero %i \n", i+1);
    scanf("%i", &array[i]);

    if (array[i]==5)
    {
        contador++;
    }
    
}
printf("El numero cinco se repite %i veces. \n", contador);

contador=0;
}