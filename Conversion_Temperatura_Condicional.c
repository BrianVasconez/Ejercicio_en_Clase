/******************************************************************************

Realizar un programa que permita convertir grados centigrados  fahrenheit o viceversa.

*******************************************************************************/
#include <stdio.h>

void main()
{
    float cent,fahr,gradoscent=0,gradosFahr=0;
    int op;
    printf("Menu Principal\n1.Grados fahrenheit a centigrados\n2.Grados centigrado a fahrenheit\n");
    printf("Escoja la opción:");
    scanf("%d",&op);
    if(op==1)
    {
        printf("Ingrese los grados fahrenheit:");
        scanf("%f",&fahr);
        gradoscent=((fahr-32)*5)/9;
        printf("Grados centigrados %.2f", gradoscent);
    }
    else
    {
        printf("Ingrese los grados centigrados:");
        scanf("%f",&cent);
        gradosFahr=(((cent*9)/5)+32);
        printf("Grados fahrenheit %.2f", gradosFahr);
    }
    


 
}
