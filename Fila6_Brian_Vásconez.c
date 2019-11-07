/******************************************************************************

Realizar un programa que calcule el area de un circulo, Factorial, Tabla mult,par o impar con funciones
Fila6: Determinar de n números positivos cuántos pares e impares.
*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float areaCirculo(float);//definición de prototipo de funciones
//float areaCirculo(float radio);
int factorial(int);
int tablaMult (int,int);
void parImpar(int);
int NParesImpares(int);

void main()
{
    float radio;
    int num,tabla,lim,op,cantNum;
    
    do{
        printf("\t\t\tMenu Principal\n\n");
        printf("1.Area del Circulo\n2.Factorial\n3.Tabla Multiplicar\n4.Par o Impar\n5.N Numeros Pares e Impares\n6.Salir\n");
        printf("Escoja la opción:");
        scanf("%d",&op);
        getchar();
        getchar();
        system("clear");
 
    switch(op){
        case 1:
        printf("Area del ciruclo!\n");
        printf("Ingrese el radio: ");
        scanf("%f",&radio);
        printf("El area del circulo es: %.2f\n",areaCirculo(radio));//Invocar a la función
        getchar();
        getchar();
        system("clear");
        break;
        
        case 2:
        printf("\nFactorial!\n");
        printf("Ingrese el numero:");
        scanf("%d",&num);
        printf("El factorial es %d\n",factorial(num));
        getchar();
        getchar();
        system("clear");
        break;
        
        case 3:
        printf("\nTabla de Multiplicar!\n");
        printf("Ingrese la tabla:");
        scanf("%d",&tabla);
        printf("Ingrese el limite:");
        scanf("%d",&lim);
        tablaMult(tabla,lim);
        getchar();
        getchar();
        system("clear");
        break;
        
        case 4:
        printf("Par o Impar\n");
        printf("Ingrese el numero:");
        scanf("%d",&num);
        parImpar(num);
        getchar();
        getchar();
        system("clear");
        break;
        
        case 5:
        printf("N Numeros Pares e Impares\n");
        printf("Ingrese la cantidad de numeros:");
        scanf("%d",&cantNum);
        NParesImpares(cantNum);
        getchar();
        getchar();
        system("clear");
        break;
        
        case 6:
            printf("Fin del programa\n");
            exit(0);
        break;
        
        default:
            printf("Opción Invalida");
            break;
    }    
    }while(op<=5);
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
void parImpar (int num){
    if(num%2==0 && num!=0)
        printf("Par\n");
    else if(num!=0);
        printf("Impar\n");
        
}
int NParesImpares(int cantNum){
    int cont=1,contP=0,contI=0,nnum; 
    while(cont<=cantNum)
    {
        printf("Ingrese el numero:");
        scanf("%d",&nnum);
        if(nnum%2==0 && nnum!=0)
            contP++;
        else if(nnum!=0)
            contI++;
    cont++;
    }
    printf("Hay %d Pares!\n",contP);
    printf("Hay %d Impares!\n",contI);
    return contP, contI;
}


