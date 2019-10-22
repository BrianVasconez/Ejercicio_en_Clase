/******************************************************************************


Realizar un programa en C que genere n numeros con for


*******************************************************************************/
#include <stdio.h>

void main()
{
    int cont,nnum;
    printf("Cuantos numeros va generar:");
    scanf("%d",&nnum);
    
    for(cont=1;cont<=nnum;cont++)
    {
        printf("%i\n",cont);   
    }
}


