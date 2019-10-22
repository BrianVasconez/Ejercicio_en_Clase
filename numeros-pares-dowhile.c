/******************************************************************************

Realizar un programa en C que determine numeros pares dowhile


*******************************************************************************/
#include <stdio.h>

void main()
{
    int cont=2,nnum;
    printf("Cuantos numeros va generar:");
    scanf("%d",&nnum);
    
    do{
           
            printf("%d\n",cont);
            cont=cont+2;
    }
    while(cont<=nnum*2);       
}
    
