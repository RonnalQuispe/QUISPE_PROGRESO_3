#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Definimos  la estructura producto
struct producto {
    char codigo[25];
    char nomproduc[50];
    char descproduc[50];
    int cantidad;
    float precioCompra//
};
void ingresarDatos(struct producto *productos, int n) {// funcion ingresar datos 
    for (int i = 0; i < n; i++) {
        printf("ingrese los datos del producto  %d:\n", i + 1);// ingresa  los dats del producto #
        

        printf("codigo  del producto: ");
        gets(productos[i].codigo);
        fflush(stdin);// Limpiar el buffer del teclado

        printf("Nombre del producto: ");
        gets(productos[i].nomproduc);
        fflush(stdin);// Limpiar el buffer del teclado

        printf("Descuento de producto: ");
        gets(productos[i].descproduc);
        fflush(stdin);// Limpiar el buffer del teclado


        printf("precio compra: ");
        scanf("%f", &(productos[i].precioCompra));
        fflush(stdin);// Limpiar el buffer del teclado

        printf("cantidad: ");
        scanf("%d", &(productos[i].cantidad));
        fflush(stdin); // Limpiar el buffer del teclado
    }
}




























