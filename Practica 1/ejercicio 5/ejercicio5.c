#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

float ladoUno, ladoDos, diagonal, perimetro, area;

printf("Ingrese primer lado:\n");
scanf("%f", &ladoUno);

printf("Ingrese segundo lado:\n");
scanf("%f", &ladoDos);

diagonal= sqrt(pow(ladoUno,2)+pow(ladoDos,2));

perimetro= (ladoDos*2)+(ladoUno*2);

area=(ladoUno*ladoDos);

printf("La daigonal es: %0.2f.", diagonal);
printf("El area es: %0.2f.", area);
printf("El per%cmetro es: %0.2f.",161,  perimetro);

system("pause");

}

