#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main(){

    float venta=0;

    printf ("Ingrese el valor de la venta: \n");
    scanf("%f", &venta);

    if (venta<=0)
                {
                  printf("La venta es inv%clida. Ingrese un valor correcto", 160);
                }

    else if (venta>=100000)
                          {
                            printf("El valor de la venta final es %0.2f: ", venta-(venta*0.15));
                          }
    else if (venta<100000)
                          {
                            printf("El valor de la venta final es %0.2f: ", venta-(venta*0.10));
                          }


}
    