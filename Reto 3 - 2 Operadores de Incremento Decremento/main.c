#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val;

    printf("Ingresa un numero entero\n");
    scanf("%i", &val);

    val %= 5;

    val++;

    printf("\nSu modulo de 5 es: %i", val);

    return 0;
}
