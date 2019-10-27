/******************************************************************************

Realizar un programa  que permita ingresar un grupo de  numeros y sume solo los positivos do while

*******************************************************************************/
#include <stdio.h>

void main ()
{
  int cont=1,num=1,suma=0,cantNum;
  
  printf ("Ingrese la cantidad de numeros:");
  scanf ("%d", &cantNum);
  
  do{
    printf ("Ingrese el numero:");
    scanf ("%d", &num);
        if(num>0)
         suma=suma+num;
        cont++;
    }
    while(cont<=cantNum);
    printf ("La suma de los positivos es: %d\n",suma);
}    
  