#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


void main(){

    int i, j, num;


    printf("Ingrese un n%cmero: \n", 163);
    scanf("%i", &num);

    for(i=num; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%i ", j);
        }
        printf(" \n");
    }
    system("pause");
}
