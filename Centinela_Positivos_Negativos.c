/******************************************************************************

Realizar un porograma que per,mita determinar cuantos numeros positivos, negativos
y cero tiene el programa

*******************************************************************************/
#include <stdio.h>

void main()
{
    int num,contP=0,contN=0;
    
   
    
    while(num<0 ||num>0)
    {
        printf("Ingrese el numero:");
        scanf("%d",&num);
        if(num>0)
            contP++;
        else if(num<0)
            contN++;
    }
    printf("\tNumeros positivos: %d\n",contP);
    printf("\tNumeros negativos: %d\n",contN);
    
}
