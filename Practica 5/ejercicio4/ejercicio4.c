#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

int array[6]={10, 20, 5, 15, 30, 20};
int total=0, mayor=0, veinte=0;

printf("En el orden ingresado \n");

for (int i = 0; i < 6; i++)
{
    printf("Indice: %d Valor: %d \n", i, array[i]);
    
    total=total+array[i];

    if (mayor<array[i])
    {
        mayor=array[i];
    }
    if (array[i]==20)
    {
        veinte++;
    }
    
}

printf("El total del vector es %i.\n", total);
total=0;

for (int j = 1; j < 6; j+=2)
{
    printf("El contenido de las posiciones impares es: %i \n", array[j]);
}

for (int k = 0; k < 6; k++)
{
    if (array[k]%2!=0)
    {
        printf("La posicion %i, contiene un numero impar.\n",k);
    }
    
}

printf("El mayor numero es: %i \n", mayor);
mayor=0;

printf("El numero veinte se repite %i veces. \n", veinte);
veinte=0;










}