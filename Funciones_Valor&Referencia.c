/******************************************************************************

Realizar un programa que sume 2 numeros usando funciones con paso por valor
y paso por referencia
*******************************************************************************/
#include <stdio.h>

float sumaValor(float,float);
float sumaReferencia(float*,float*);

void main()
{
    float num1,num2;
    printf("Ingrese el numero 1:");
    scanf("%f",&num1);
    printf("Ingrese el numero 2:");
    scanf("%f",&num2);
    printf("La suma es %.2f\n", sumaValor(num1,num2));
    printf("La suma es %.2f", sumaReferencia(&num1,&num2));
    
}
float sumaValor(float a,float b){
    return a+b;
}
float sumaReferencia(float *a,float *b){
    *a=6;
    float resul=0;
    resul=*a+*b;
    return resul;
}