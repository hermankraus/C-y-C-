#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main(){

   int mes=0;

   printf("Escriba su n%cmero equivalente a un mes del a%co.\n", 163, 164);
   scanf("%d", &mes);

   if (mes==1)
    {
        printf("Enero");
    }
    else if (mes==2)
    {
        printf("Febrero");
    }
    else if (mes==3)
    {
        printf("Marzo");
    }
    else if (mes==4)
    {
        printf("Abril");
    }
    else if (mes==5)
    {
        printf("Mayo");
    }
    else if (mes==6)
    {
        printf("Junio");
    }
    else if (mes==7)
    {
        printf("Julio");
    }
    else if (mes==8)
    {
        printf("Agosto");
    }
    else if (mes==9)
    {
        printf("Septiembre");
    }
    else if (mes==10)
    {
        printf("Octubre");
    }
    else if (mes==11)
    {
        printf("Noviembre");
    }
    else if (mes==12)
    {
        printf("Diciembre");
    }
    else {
        printf("El n%cmero no corresponde a ning%cn mes.", 163,163);
    }
   


}