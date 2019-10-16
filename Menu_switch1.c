/******************************************************************************
Realizar un programa en C con un menu que contenga las siguientes opciones.


*******************************************************************************/
#include <stdio.h>
#include <math.h>


void main()
{
    int opcion;
    float a,b,c,x1=0,x2=0,base,altura,area=0;
    int tanios=0,tmeses=0,anioN,anioA,mesN,mesA,tdias=0,diaN,diaA;
    
    printf("Menu Principal\n1.Ecuación Cuadrática\n2.Área del Triangulo\n3.Edad\n");
    printf("Escoja la opción:");
    scanf("%d",&opcion);
    
    switch(opcion)
    {
        case 1:
        printf("Ingrese el coeficiente a:");
        scanf("%f",&a);
        printf("Ingrese el coeficiente b:");
        scanf("%f",&b);
        printf("Ingrese el coeficiente c:");
        scanf("%f",&c);
        x1=(-b+(sqrt(pow(b,2))-(4*a*c)))/2*a;
        x2=(-b-(sqrt(pow(b,2))-(4*a*c)))/2*a;
        printf("El resultado de x1 es %.2f\n",x1);
        printf("El resultado de x2 es %.2f\n",x2);
        break;
    
        case 2:
        printf("Ingrese la base:");
        scanf("%f",&base);
        printf("Ingrese la altura:");
        scanf("%f",&altura);
        area=(base*altura)/2;
        printf("El area del triangulo es:%.2f",area);
        break;
        
        case 3:
        printf("Ingrese el año de nacimiento y el año actual:");
        scanf("%d %d",&anioN,&anioA);
        printf("Ingrese el mes de nacimiento y el mes actual:");
        scanf("%d %d",&mesN,&mesA);
        printf("Ingrese su dia de nacimiento y el dia actual:");
        scanf("%d %d",&diaN,&diaA);
        if (mesA>mesN)
        {
            tmeses=mesA-mesN;
        }
        else if (mesN>mesA){
            tmeses=(mesA+12)-mesN;
            tanios=((anioA-1)-anioN);
        }
        if (diaA>diaN){
            tdias=diaA-diaN;
        }
        else if (diaN>diaA){
            tmeses=(mesA-1)-mesN;
            tdias=((diaA+30)-diaN);
        }
        tanios=anioA-anioN;
        printf("Su edad en años, meses, y días es:%d %d %d",tanios,tmeses,tdias);
        break;
        
        
        default:
            printf("Opcion invalida");
        break;    
        
    }
    
}


