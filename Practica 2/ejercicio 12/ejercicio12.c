#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(){

    float venta=0, total=0;
    int dni=0, formaPago=0, tarjeta=0, cuotas=0;
    char metodoPago[20]="", visa[20]="Visa", cabal[20]="Cabal", mercadoP[20]="Mercado Pago", efectivo[20]="Efectivo", american[20]="American Express", tarj[20]="Tarjeta";

    printf ("Ingrese el valor de la venta.\n");
    scanf("%f", &venta);

    printf ("Ingrese su DNI.\n");
    scanf("%d", &dni);

    if (dni<1000000 || dni>99999999)
    {
        printf("Los datos ingresados son incorrectos.");
        exit (-1);
    }
    else{
            printf("Ingrese la forma de pago.\n1) Efectivo\n2) Tarjeta de cr%cdito\n", 130);
            scanf("%d", &formaPago);

    }

    if (formaPago==1)
    {
        strcpy(metodoPago, efectivo);
        cuotas=1;
        total=venta; 
        printf("El res%cmen de la operaci%cn es el siguiente.\nDNI: %d.\nMedio de pago: %s\nCuotas: %d\nTotal: $%0.2f\n", 163, 162, dni, metodoPago, cuotas, total);
         exit (-1);
    }
    else if (formaPago==2)
    {
        printf("Ingrese su tarjeta de cr%cdito.\n1)Visa\n2)American Express\n3)Mercado Pago\n4)Cabal\n", 130);
        scanf("%d", &tarjeta);

        if (tarjeta==1)
        {
            strcpy(metodoPago,visa);
        }
        else if (tarjeta==2)
        {
            strcpy(metodoPago, american);        
        }
        else if (tarjeta==3)
        {
            strcpy(metodoPago, mercadoP);
        }
        else if (tarjeta==4)
        {
            strcpy(metodoPago, cabal);
        }
        else if (tarjeta!=1 || tarjeta!=2 || tarjeta!=3 || tarjeta!=4 )
        {
            printf("Ingrese una tarjeta correcta.\n");
            exit (-1);
            
        }


        printf("Ingrese las cuotas a pagar.(1, 3, 6 o 12)\n");
        scanf("%d", &cuotas);

        
    }
    
     if (cuotas==1)
    {
        total=venta;
        printf("El valor de su compra con tarjeta en una cuota sin inter%cs, es de %0.2f\n", 130, total);
        
    }
    else if (cuotas==3)
    {
        total=(venta+(venta*0.04));
      printf("El valor de su compra en tres cuotas con inter%cs, es de %0.2f\n", 130, total);
      
    }
     else if (cuotas==6)
    {
        total=(venta+(venta*0.08));
      printf("El valor de su compra en seis cuotas con inter%cs, es de %0.2f\n", 130, total);
      
    }
    else if (cuotas==12)
    {
        total=(venta+(venta*0.08));
      printf("El valor de su compra en doce cuotas con inter%cs, es de %0.2f\n", 130, total);
      
    }

    if (formaPago==2)
    {
        printf("El res%cmen de la operaci%cn es el siguiente.\nDNI: %d.\nMedio de pago: %s\nTarjeta: %s\nCuotas: %d\nTotal: $%0.2f\n", 163, 162, dni, tarj, metodoPago, cuotas, total);
    }
    
    
    





return 0;
}