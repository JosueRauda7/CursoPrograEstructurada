#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var1;
    int var2;
    int varAuxiliar;

    //Se pide la primer variable
    printf("Ingresa el valor de x: ");
    scanf("%i", &var1);

    //Se pide la segunda variable
    printf("Ingresa el valor de y: ");
    scanf("%i", &var2);

    //Proceso de intercambio
    varAuxiliar = var1;
    var1 = var2;
    var2 = varAuxiliar;

    //Presentación de las variables intercambiadas
    printf("\n\nEl valor de x es: %i", var1);
    printf("\nEl valor de y es: %i", var2);

    return 0;
}
