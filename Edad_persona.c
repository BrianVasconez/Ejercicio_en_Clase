/******************************************************************************
Realizar un programa en C que determine si una persona es mayor o menor de edad.
Datos Entrada:
Entero edad
Proceso:
Escribir "Ingrese su edad"
Leer edad
    si (edad>=18) 
    Escribir "Mayor de edad"
    sino
    Escribir"Menor de edad"
    Finsi
Salida
Mayor o menor de edad

*******************************************************************************/
#include <stdio.h>

void main()
{
    int edad;
    char nombre[10];
    
    printf("Ingrese su nombre:");
    scanf("%s",nombre);
    printf("Ingrese su edad:");
    scanf("%d",&edad);
    if(edad>=18)
        printf("%s es mayor de edad",nombre);
    else
        printf("%s es menor de edad",nombre);
    
}
