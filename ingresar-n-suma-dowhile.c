/******************************************************************************

Realizar un programa en C para ingresar n y luego los sume dowhile


*******************************************************************************/
#include <stdio.h>

void main()
{
    int cont=1,nnum,suma=0,num;
    printf("Cuantos numeros va generar:");
    scanf("%d",&nnum);
    
    do{
            printf("Ingrese el numero:");
            scanf("%d",&num);
            suma=suma+num;
            cont++;
    }        
    while(cont<=nnum);        

    printf("La suma de %d numeros es:%d\n",nnum,suma);
}


