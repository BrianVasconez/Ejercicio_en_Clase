/******************************************************************************

Realizar un programa que permita ingresar n Estudiantes con N notas,
determinar promedio e indicar cual es el mejor y peor promedio

*******************************************************************************/
#include <stdio.h> 


void main() 
{
    
    int nEst,nNotas,cont=1,cont1;
    float notas,suma=0,prom=0,mayor=0,menor=9999;
    
    printf("Ingrese el numero de estudiantes:");
    scanf("%d",&nEst);
    printf("Ingrese el numero de notas:");
    scanf("%d",&nNotas);
    
    while(cont<=nEst){
        printf("Estudiante %d:\n",cont);
        cont1=1;
        while(cont1<=nNotas){
            printf("Ingrese la nota %d:",cont1);
            scanf("%f",&notas);
            suma=suma+notas;
            cont1++;
        }
        prom=suma/nNotas;
        suma=0;
        printf("El promedio es %.2f\n",prom);
        cont++;
        if(prom>mayor)
        mayor=prom;
        if(prom<menor)
        menor=prom;
    }
    printf("El estudiante con mejor promedio es %.2f\n",mayor);
    printf("El estudiante con menor promedio es %.2f\n",menor);
}
