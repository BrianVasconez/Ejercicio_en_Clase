/******************************************************************************

Realizar un porograma que per,mita determinar cuantos numeros positivos, negativos
y cero tiene el programa

*******************************************************************************/
#include <stdio.h>

void main()
{
    int cont=1,cantNum,num,contP=0,contN=0,contCero=0;
    
    printf("Ingrese la cantidad de numeros:\n");
    scanf("%d",&cantNum);
    
    while(cont<=cantNum)
    {
        printf("Ingrese el numero:");
        scanf("%d",&num);
        if(num>0)
            contP++;
        else if(num<0)
            contN++;
        else
            contCero++;
    cont++;        
    }
    printf("\tNumeros positivos: %d\n",contP);
    printf("\tNumeros negativos: %d\n",contN);
    printf("\tNumeros cero: %d\n",contCero);
}

