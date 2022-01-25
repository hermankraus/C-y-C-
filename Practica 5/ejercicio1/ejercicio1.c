#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

int array[5]={1, 2, 3, 4, 5};

printf("En el orden ingresado \n");

for (int i = 0; i < 5; i++)
{
    printf("Indice: %d Valor: %d \n", i, array[i]);
}

printf("En el orden contrario al ingresado \n");

for (int i = 4; i >=0; i--)
{
    printf("Indice: %d Valor: %d \n", i, array[i]);
}

}