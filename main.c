/******************************************************************************
Realizar un programa en C qu permita determinar el area de un circulo.
Datos Entrada
real: radio, pi, area=0
Proceso
Escribir "Ingrese el radio"

*******************************************************************************/
#include <stdio.h> //Definicion de librerias
#define pi 3.146//Definicion de constantes
void main()//Definicion de la funcion principal
{
    float radio, area=0;//Declaracion de variables
    printf ("Ingrese el radio");//Impresion en pantalla
    scanf("%f",&radio);//Lectura de la variable radio
    area=pi*radio*radio;//Proceso
    printf("El area es %.2f", area);//salida del area del circulo
}

