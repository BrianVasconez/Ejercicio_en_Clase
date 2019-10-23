/******************************************************************************

Realizar un programa  que permita ingresar un grupo de  numeros y sume solo los positivos

*******************************************************************************/
#include <stdio.h>

void main ()
{
  int cont=1,num=1,suma=0,cantNum;
  
  printf ("Ingrese la cantidad de numeros:");
  scanf ("%d", &cantNum);
  
  while(cont<=cantNum)
  {
    printf ("Ingrese el numero:");
    scanf ("%d", &num);
        if(num>0)
         suma=suma+num;
        cont++;
    }
   
    printf ("La suma es: %d\n",suma);
}    
  









