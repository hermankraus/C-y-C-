#include <stdio.h>
#include <stdlib.h>

int main() {

float numUno, numDos, suma, numTres;

printf("Ingrese primer numero:\n");
scanf("%f", &numUno);

printf("Ingrese segundo numero:\n");
scanf("%f", &numDos);

printf("Ingrese tercer numero:\n");
scanf("%f", &numTres);

suma=numDos+numUno+numTres;

printf("La suma es: %0.2f.", suma);

system("pause");

}



