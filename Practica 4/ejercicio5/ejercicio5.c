#include <stdlib.h>
#include <stdio.h>


void main()

{

    int dni=38632584, dniIngresado=0, intentos=1, ingresaCorrectamente=0;
    float nota=7;

    
    
        do
        {
            printf("Ingrese el n%cmero de DNI \n",163);
            scanf("%i", &dniIngresado);

            if (dniIngresado!=dni)
            {
                printf("DNI inv%clido \n", 160);
                intentos=intentos+1;
            }
            else
            {
                ingresaCorrectamente=1;
            }
        } while(ingresaCorrectamente==0 && intentos<=3);

if(ingresaCorrectamente==1)
{
    printf("La nota del alumno es: %0.2f \n", nota);
}
else
{
    printf("Se acabaron tus intentos.");
}


}