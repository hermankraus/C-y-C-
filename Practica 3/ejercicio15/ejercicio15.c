/*tengo 5 alumnos, debo ingresar 3 notas de cada una. Mostrar promedio por alumno y promedio total de todas las notasde todos los parciales.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void main(){

int cantidadAlumnos=0, cantidadNotas=0, j=0, i=0;
float nota=0, sumaAlumno=0, sumaTotal=0;



printf("Ingrese la cantidad de alumnos.\n");
scanf("%i", &cantidadAlumnos);

while (cantidadAlumnos<1)
{
    printf("Ingrese una cantidad de alumnos valida.\n");
    scanf("%i", &cantidadAlumnos);
}


printf("Ingrese la cantidad de notas por alumno.\n");
scanf("%i", &cantidadNotas);

while (cantidadNotas<1)
{
    printf("Ingrese una cantidad de notas valida.\n");
    scanf("%i", &cantidadNotas);
}


for ( i=1; i <= cantidadAlumnos; i++)
{
    for ( j = 1; j<=cantidadNotas; j++)
    {
        
        printf("Ingrese la %i nota\n", j);
        scanf("%f", &nota);

        while (nota<0 || nota>10)
        {
            printf("Nota invalida, ingrese nuevamente.\n");
            scanf("%f", &nota);
        }
      sumaAlumno=sumaAlumno+nota;

    }
    
    printf("El promedio del %i alumno es: %0.2f.\n", i, (sumaAlumno/cantidadNotas));
    sumaTotal=sumaTotal+sumaAlumno;
    sumaAlumno=0;
}

    printf("El promedio de la clase es: %0.2f.\n", (sumaTotal/(cantidadAlumnos*cantidadNotas)));


}
