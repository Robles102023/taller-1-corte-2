#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char CodigoProducto[11];
    char CodigoAlmacen[16];
    int ValorProducto;

    printf("Ingrese el codigo de barras del producto: ");
    scanf("%s", CodigoProducto);

    // Verificar si el código del producto tiene 10 dígitos
    if (strlen(CodigoProducto) != 10) {
        printf("Error: El código de barras debe tener 10 dígitos.\n");
        return 1;
    }

    printf("Ingrese el valor del producto: ");
    scanf("%d", &ValorProducto);

    printf("Ingrese el codigo del almacén: ");
    scanf("%s", CodigoAlmacen);

    // Verificar si el código del almacén tiene 15 dígitos
    if (strlen(CodigoAlmacen) != 15) {
        printf("Error: El código del almacén debe tener 15 dígitos.\n");
        return 1; 
    }

    bool productoValido = false;
    bool almacenValido = false;

    if (strcmp(CodigoProducto, "8949899430") == 0 || strcmp(CodigoProducto, "7653512593") == 0 || strcmp(CodigoProducto, "9383867373") == 0 || strcmp(CodigoProducto, "88392904209") == 0) {
        productoValido = true;
    }

    if (strcmp(CodigoAlmacen, "894985943020763") == 0 || strcmp(CodigoAlmacen, "165331255320221") == 0 || strcmp(CodigoAlmacen, "248386737320130") == 0 || strcmp(CodigoAlmacen, "183923092220561") == 0) {
        almacenValido = true;
    }

    if (productoValido && almacenValido) {
        double descuento = 0.20 * ValorProducto;
        ValorProducto -= descuento;

        printf("El producto y el almacén existen en la base de datos.\n");
        printf("Estás participando en la rifa de un vehículo 0 km.\n");
        printf("Nuevo valor del producto con descuento: %.2f\n", (double)ValorProducto);
    } else {
        printf("Error: El código de barras o el código del almacén son incorrectos.\n");
    }

    return 0;
}
