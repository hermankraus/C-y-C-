#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

float ladoUno, ladoDos, hipotenusa, perimetro, area;

printf("Ingrese primer lado:\n");
scanf("%f", &ladoUno);

printf("Ingrese segundo lado:\n");
scanf("%f", &ladoDos);

hipotenusa= sqrt(pow(ladoUno,2)+pow(ladoDos,2));

perimetro= hipotenusa+ladoDos+ladoUno;

area=(ladoUno*ladoDos)/2;

printf("La hipotenusa es: %0.2f.\n", hipotenusa);
printf("El area es: %0.2f.\n", area);
printf("El per%cmetro es: %0.2f.\n", 161, perimetro);

system("pause");

}


