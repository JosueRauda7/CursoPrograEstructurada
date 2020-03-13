#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    printf("\n\nEntra a la funcion factoria, n vale: %i", n);

    if(n > 1)
    {
        printf("\nLa funcion se llamara a si misma, otra vez\n");
        return (n * factorial(n - 1));
    }
    else
    {
        printf("\nn es igual a 1. Termina la recursividad\n");
        return 1;
    }
}

int main()
{
    printf("Recursividad!\n");

    int result = factorial(5);

    printf("\n\nEl resultado es: %i", result);

    return 0;
}
