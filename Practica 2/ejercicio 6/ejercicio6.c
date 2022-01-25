#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main(){

    float nota=0;

    printf ("Ingrese la nota: \n", 163);
    scanf("%f", &nota);

    if (nota<0 || nota>10)
            {
                printf("La nota es inv%clida. Ingrese una nota correcta", 160);
            }

    else if (nota<4)
                    {
                        printf("El alumno fue reprobado.", nota);
                    }

    else if (nota<6)
                    {
                        printf("El alumno fue regular.", nota);
                    }
    else if (nota>=6)
                    {
                        printf("El alumno fue promocionado.", nota);
                    }    
    }
    