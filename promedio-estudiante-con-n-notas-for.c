/******************************************************************************
Realizar un programa que permita obtener el promedio de un estudiantes con N notas

*******************************************************************************/
#include <stdio.h>

void main()
{
    int cont,nNotas;
    float notas,suma=0,prom=0;
    printf("Ingrese el numero de notas:");
    scanf("%d",&nNotas);
    
    for(cont=1;cont<=nNotas;cont++)
    {
        printf("Ingrese la nota %d",cont);
        scanf("%f",&notas);
        while(notas<0)
        {
            printf("Ingrese una nota positiva:");
            scanf("%f",&notas);
        }
        suma=suma+notas;
    }
    prom=suma/nNotas;
    printf("El promedio es %.2f",prom);
    
}
