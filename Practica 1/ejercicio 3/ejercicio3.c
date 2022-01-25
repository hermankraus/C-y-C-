#include <stdio.h>
#include <stdlib.h>

int main() {

float ladoUno, ladoDos, perimetro, ladoTres;

printf("Ingrese primer lado:\n");
scanf("%f", &ladoUno);

printf("Ingrese segundo lado:\n");
scanf("%f", &ladoDos);

printf("Ingrese tercer lado:\n");
scanf("%f", &ladoTres);

perimetro=ladoDos+ladoUno+ladoTres;

printf("El per%cmetro es: %0.2f.",161,  perimetro);

system("pause");

}



