#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void main(){

int cantidad_ventas=0, dni=0, i=0, tarjeta=0, medio_de_pago=0, cuotas=0;
float venta=0, total=0, ventas_totales=0;

printf("Ingrese la cantidad de ventas.\n");
scanf("%i", &cantidad_ventas);

while (cantidad_ventas<1)
{
    printf("Ingrese una cantidad de ventas v%clida.\n", 160);
    scanf("%i", &cantidad_ventas);
}

for ( i = 1; i <= cantidad_ventas; i++)
{
   
    printf("Ingrese el DNI de la venta %i cliente.\n", i);
    scanf("%i", &dni);

    while (dni<1000000 || dni>99999999) 
    {
        printf("Ingrese un DNI v%clido.\n", 160);
        scanf("%i", &dni);
    }

printf("Ingrese el monto de la venta %i.\n", i);
scanf("%f", &venta);

printf("Ingrese el medio de pago.\n 1)Efectivo\n 2)Tarjeta de cr%cdito\n", 130);
scanf("%i", &medio_de_pago);

while (medio_de_pago!=1 && medio_de_pago!=2)
{
    printf("Ingrese un medio de pago v%clido.\n", 160);
    scanf("%i", &medio_de_pago);
}

    if (medio_de_pago==1)
    {
        total=venta;
    }
    
switch (medio_de_pago)
{
case 1:

    printf("DNI: %i\n", dni);
    printf("Medio de pago: Efectivo.\n");
    printf("Total: $%0.2f\n", total);
    printf(" \n");

        break;
case 2:
    
    printf("Elija la tarjeta a utilizar.\n 1)Visa\n 2)American Express\n 3)Mercado Pago\n 4)Cabal\n");
    scanf("%i", &tarjeta);

    while (tarjeta!=1 && tarjeta!=2 && tarjeta!=3 && tarjeta!=4)
    {
        printf("Ingrese una tarjeta correcta.\n");
        scanf("%i", &tarjeta);
    }

    printf("Elija las cuotas a pagar: 1, 3, 6 o 12.\n");
    scanf("%i", &cuotas);

    while (cuotas!=1 && cuotas!=3 && cuotas!=6 && cuotas!=12)
    {
        printf("Ingrese una cantidad de cuotas correcta.\n");
        scanf("%i", &cuotas);
    }


    if (cuotas==3)
    {
        total= venta+(venta*0.04);
    }
    else if (cuotas== 6 || cuotas==12)
    {
        total= venta+(venta*0.08);
    }
    else
    {
        total=venta;
    }

        switch (tarjeta)
        {
        case 1:

            printf("DNI: %i\n", dni);
            printf("Medio de pago: Tarjeta de cr%cdito.\n", 130);
            printf("Tarjeta: Visa\n");
            printf("Cuotas: %i\n", cuotas);
            printf("Total: $%0.2f\n", total);
            printf(" \n");
            break;
        case 2:

            printf("DNI: %i\n", dni);
            printf("Medio de pago: Tarjeta de cr%cdito.\n", 130);
            printf("Tarjeta: American Express\n");
            printf("Cuotas: %i\n", cuotas);
            printf("Total: $%0.2f\n", total);
            printf(" \n");
            break;
        case 3:
            
            printf("DNI: %i\n", dni);
            printf("Medio de pago: Tarjeta de cr%cdito.\n", 130);
            printf("Tarjeta: Mercado Pago\n");
            printf("Cuotas: %i\n", cuotas);
            printf("Total: $%0.2f\n", total);
            printf(" \n");
            break;
        case 4:

            printf("DNI: %i\n", dni);
            printf("Medio de pago: Tarjeta de cr%cdito.\n", 130);
            printf("Tarjeta: Cabal\n");
            printf("Cuotas: %i\n", cuotas);
            printf("Total: $%0.2f\n", total);
            printf(" \n");
            break;
        }
    
    break;

}
ventas_totales=ventas_totales+total;



}

printf("La suma de ventas ingresadas es: $%0.2f\n", ventas_totales);

system ("pause");
    
}
