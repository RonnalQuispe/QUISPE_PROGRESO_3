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
void imprimirDatos(struct producto *productos, int n) {// funcion imprimir datos 
     for (int i = 0; i < n; i++) {
        printf("Datos del producto %d ;", i + 1);
        printf("COD.: ");
        puts(productos[i].codigo);
        printf("NOMBRE DEL PRO. : ");
        puts(productos[i].nomproduc);
        printf("DESC. DEL PRODUC.: ");
        puts(productos[i].descproduc);
        printf("PRECIO COMPRA: %f  ", productos[i].precioCompra);
        printf("Cantidad: %d ;", productos[i].cantidad);
        printf("\n");
    }
}
int main(int argc, char const *argv[])
{
    int n;
    printf("ingrese la cantidad de productos que va registrar: ");
    scanf("%d", &n); 
    fflush(stdin); // Limpiar el buffer del teclado
    struct producto *productos  = malloc(n * sizeof(struct producto)); // asigna un bloque de memoria 
    ingresarDatos(productos, n); // llama a la funcion ingresar datos 

    return 0;
}





























