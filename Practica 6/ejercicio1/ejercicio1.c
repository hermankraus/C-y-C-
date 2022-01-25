#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 


void main(){

char cadena1[20]="";
char cadena2[20]=""; 
char cadena3[20]="";

printf("Ingrese la primer cadena.\n");
scanf("%s", &cadena1);

printf("Ingrese la segunda cadena.\n");
scanf("%s", &cadena2);

printf("Ingrese la tercer cadena.\n");
scanf("%s", &cadena3);



printf("La longitud de la primer cadena es: %d \n", strlen(cadena1));
printf("La longitud de la segunda cadena es: %d \n", strlen(cadena2));
printf("La longitud de la tercer cadena es: %d \n", strlen(cadena3));




}