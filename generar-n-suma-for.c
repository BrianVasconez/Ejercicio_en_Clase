/******************************************************************************

Realizar un programa en C que determine n numeros y que los sume en for


*******************************************************************************/
#include <stdio.h>

void main()
{
    int cont=1,nnum,suma=0;
    printf("Cuantos numeros va generar:");
    scanf("%d",&nnum);
    
    for(cont=1;cont<=nnum;cont++)
            printf("%d\n",cont);
            suma=suma+cont;
            
    printf("La suma de %d numeros es:%d\n",nnum,suma);
}
