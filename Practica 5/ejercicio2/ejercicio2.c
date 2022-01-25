#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

int array[5]={1, 2, 3, 4, 5};
int suma=0, promedio=0;

for (int i = 0; i < 5; i++)
{
    suma=suma+array[i];    
}
promedio=suma/5;

printf("La suma es %i y el promedio es %i\n", suma, promedio);


}