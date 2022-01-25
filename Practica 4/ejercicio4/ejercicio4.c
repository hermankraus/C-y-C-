#include <stdlib.h>
#include <stdio.h>

void main(){

int cantidadALumnos=0, cantidadParciales=0; 
float sumaAlumno=0, promedioAlumno=0, sumaPromedios=0, nota=0;

    printf("Ingrese la cantidad de alumnos.\n");
    scanf("%i", &cantidadALumnos);

    printf("Ingrese la cantidad de parciales por alumno.\n");
    scanf("%i", &cantidadParciales);

    for (int i = 1; i <=cantidadALumnos; i++)
    {
        printf("Alumno %i \n", i);

        for (int j = 1; j <= cantidadParciales; j++)
        {
            do
            {
                printf("Ingrese el parcial n%cmero %i \n",163, j);
                scanf("%f", &nota);

                if (nota<0 || nota>10)
                {
                    printf("Nota inv%clida \n", 160);
                }
                else
                {
                    sumaAlumno=sumaAlumno+nota;
                }
            } while(nota<0 || nota>10);
        }
        
        promedioAlumno= sumaAlumno/cantidadParciales;
        printf("El promedio del alumno %i es %0.2f. \n", i, promedioAlumno);
        
        sumaPromedios=sumaPromedios+promedioAlumno;
        promedioAlumno=0;
        sumaAlumno=0;
        
    }

    printf("El promedio general es %0.2f: ", sumaPromedios/cantidadALumnos);
    



}