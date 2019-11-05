/******************************************************************************

Realizar un programa que calcule el area de un circulo

*******************************************************************************/
#include <stdio.h>
#include <math.h>

float areaCirculo(float);//definición de prototipo de funciones
//float areaCirculo(float radio);
int factorial(int);
int tablaMult (int,int);

void main()
{
 float radio;
 int num,tabla,lim;
 
 printf("Area del ciruclo!\n");
 printf("Ingrese el radio: ");
 scanf("%f",&radio);
 printf("El area del circulo es: %.2f\n",areaCirculo(radio));//Invocar a la función
 printf("\nFactorial!\n");
 printf("Ingrese el numero:");
 scanf("%d",&num);
 printf("El factorial es %d\n",factorial(num));
 printf("\nTabla de Multiplicar!\n");
 printf("Ingrese la tabla:");
 scanf("%d",&tabla);
 printf("Ingrese el limite:");
 scanf("%d",&lim);
tablaMult(tabla,lim);
 
}
float areaCirculo(float radio){
    float area=0,pi=3.1416;
    area=pi*pow(radio,2);
    return area;
}
int factorial(int num){
    int fact=1,cont=1;
    while(cont<=num){
        fact=fact*cont;
        cont++;
    }
    return fact;
}
int tablaMult (int tabla, int lim){
    int mult=1,cont=1;
    while(cont<=lim){
        mult=tabla*cont;
        printf("%d X %d = %d\n",tabla,cont,mult);
        cont++;
    }
    return mult;
}


