/******************************************************************************

Realizar un programa en C que simule la facturación de dos productos

*******************************************************************************/
#include <stdio.h> //Definición de librerias


void main() //definicion de la función
{
    char cedula[10],nombre[10],descP1[20],descP2[20];
    int cantP1,cantP2;
    float precioP1,precioP2,subtotal,iva,total,pVta1,pVta2;
    printf("Ingrese el nombre:");
    scanf("%s",nombre);
    printf("Ingrese la cédula:");
    scanf("%s",cedula);
    
    printf("Datos del producto1 \n");
    printf("Ingrese la descripción del produto1:");
    scanf("%s", descP1);
    printf("Ingrese la cantidad del producto:");
    scanf("%d",&cantP1);
    printf("Ingrese el precio del producto:");
    scanf("%f",&precioP1);
    
    printf("Datos del producto2 \n");
    printf("Ingrese la descripción del producto2:");
    scanf("%s", descP2);
    printf("Ingrese la cantidad del producto:");
    scanf("%d",&cantP2);
    printf("Ingrese el precio del producto:");
    scanf("%f",&precioP2);
    
    pVta1=precioP1*cantP1;
    pVta2=precioP2*cantP2;
    subtotal=pVta1+pVta2;
    iva=subtotal*0.12;
    total=subtotal+iva;
    
    printf("********EMPRESA XYZ********\n");
    printf("cliente:%s\n",nombre);
    printf("cedula:%s\n",cedula);
    printf("descripción\t\tcantidad\t\tprecio\\precio_venta\n");
    printf("%s\t\t\t%d\t\t\%.2f\t\t%.2f\n",descP1,cantP1,precioP1,pVta1);
    printf("%s\t\t\t%d\t\t\%.2f\t\t%.2f\n",descP2,cantP2,precioP2,pVta2);
    
    printf("\t\t\t\t\t\tsubtotal:%.2f%",subtotal);
    printf("\t\t\t\t\t\tIva:%.2f%",iva);
    printf("\t\t\t\t\t\tTotal:%.2f%",total);

    return 0;
}




