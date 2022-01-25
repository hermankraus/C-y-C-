#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

    float uno=0, dos=0;
    int operacion=0;

    printf ("Ingrese el primer n%cmero. \n", 163);
    scanf("%f", &uno);

    printf ("Ingrese el segundo n%cmero. \n", 163);
    scanf("%f", &dos);

    printf ("Ingrese la operaci%cn a realizar.\n1. Informar su suma.\n2. Informar su resta.\n3. Informar su multiplicaci%cn.\n4. Informar su divisi%cn\n5. Salir\n", 162, 162, 162);
    scanf("%d", &operacion);


    switch (operacion)
    {
    case 1:
        printf("El resultado de la suma es: %0.2f", (uno+dos));
        break;
    case 2:
        printf("El resultado de la resta es: %0.2f", (uno-dos));
        break;
    case 3:
        printf("El resultado de la multiplicaci%cn es: %0.2f", 162, (uno*dos));
        break;
    case 4:
        if (dos==0)
        {
            printf("No se puede realizar una divisi%cn de un n%cmero por cero.", 162, 163);
        }
        else{
        printf("El resultado de la divisi%cn es: %0.2f", 162, (uno/dos));
        }
        
        break;
    case 5:
        printf("Fin del programa");
        break;
    default:
        printf("Opci%cn incorrecta.", 162);
        break;
    }
}   