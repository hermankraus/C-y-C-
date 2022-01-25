#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

float horas, valorH, sueldo;

printf("Ingrese horas trabajadas:\n");
scanf("%f", &horas);

valorH=800;

sueldo=horas*valorH;

printf("El sueldo es: $%0.2f.", sueldo);


system("pause");

}

