/******************************************************************************

Realizar un programa en C en el cual de la tabla de multiplicacion con do while


*******************************************************************************/
#include <stdio.h>

void main()
{
    int tabla,lim,mult=0,cont=1;
    
    printf("Ingrese la tabla:");
    scanf("%d",&tabla);
    printf("Ingrese el limite:");
    scanf("%d",&lim);
    do{
        mult=tabla*cont;
        printf("%d x %d = %d\n",tabla,cont,mult);
        cont++;
    }while(cont<=lim);
        

}
