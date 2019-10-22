/******************************************************************************

Realizar un programa de un grupo de numeros positivos que permita verificar si es par o impar

*******************************************************************************/
#include <stdio.h>

void main ()
{
  int num=1;
  
  while(num>0)
  {
    printf ("Ingrese el numero:");
    scanf ("%d", &num);
    while(num<0)
    {
    printf ("Ingrese un numero positivo:");
    scanf ("%d", &num);
    }

    if (num %2==0&&num!=0)
	    printf ("Par\n");
    else
        printf("Impar\n");

    }
}