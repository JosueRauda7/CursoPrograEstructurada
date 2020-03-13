#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Apuntadores!\n");

    float val;
    float *apVal;

    apVal = &val;
    *apVal = 3.1416;

    printf("\nEl valor de la variable es: %f\n", val); //Tambien funciona con *apVal en lugar de val

    return 0;
}
