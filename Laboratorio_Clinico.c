/******************************************************************************

En un laboratorio de análisis clínico, un médico determina si una persona tiene anemia o no,
lo cual depende de su nivel de hemoglobina en la sangre, de su edad y de su género. 
Si el nivel de hemoglobina que tiene una persona es menor que el rango que le corresponde, 
se determina su resultado como positivo y en caso contrario como negativo. 
La tabla en la que el medico se basa para obtener el resultado para sexo femenino es la siguiente:

EDAD        NIVEL HEMOGLOBINA
0 entre 1 mes                        entre 13 y 26 g%
> 1 y < = 6 meses                  entre 10 y 18 g%
> 6 y < = 12 meses                  entre 11 y 15 g%
> 1 y < = 5  años                        entre 11.5 y 15 g%
> 5 y < = 10 años                             entre 12.6 y 15.5 g%
> 10 y < = 15 años                           entre 13 y 15.5 g%
*******************************************************************************/
#include <stdio.h>

void main()
{
    int edad,op;
    float nivelHemo;
    printf("Menu Principal\n1.Edad en meses:\n2. Edad en años:");
    printf("\nEscoja la opción:");
    scanf("%d",&op);
    if(op==1)
    {
        printf("Ingrese su edad:");
        scanf("%d",&edad);
        printf("Ingrese el nivel de hemoglobina:");
        scanf("%f",&nivelHemo);
        if(edad>=0 && edad<=1 && nivelHemo>=13 && nivelHemo<=26)
            printf("No tiene anemia");
        else if(edad>1 && edad<=6 && nivelHemo>=10 && nivelHemo<=18) 
             printf("No tiene anemia");
        else if(edad>6 && edad<=12 && nivelHemo>=11 && nivelHemo<=15) 
             printf("No tiene anemia");     
        else
            printf("Tiene anemia");
    }
    else
    {
        printf("Ingrese su edad:");
        scanf("%d",&edad);
        printf("Ingrese el nivel de hemoglobina:");
        scanf("%f",&nivelHemo);
        if(edad>=1 && edad<=5 && nivelHemo>=11.5 && nivelHemo<=15)
            printf("No tiene anemia");
        else if(edad>5 && edad<=10 && nivelHemo>=12.6 && nivelHemo<=15.5) 
             printf("No tiene anemia");
        else if(edad>10 && edad<=15 && nivelHemo>=13 && nivelHemo<=15.5) 
             printf("No tiene anemia");     
        else
            printf("Tiene anemia");
    }        
}
