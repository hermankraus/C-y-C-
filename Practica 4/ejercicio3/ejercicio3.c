#include <stdlib.h>
#include <stdio.h>


void main()

{

    float nro=0, suma=0;


    for (int i = 1; i <= 10; i++)
    {
        do
        {
            printf("Ingrese el n%cmero %i \n",163, i);
            scanf("%f", &nro);

            if (nro<=0)
            {
                printf("N%cmero inv%clido \n",163, 160);
            }
            else
            {
                suma=suma+nro;
            }
        } while(nro<=0);
    }




}