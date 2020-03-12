#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Iteradores For :D\n");
/*
    int upperLim, bottomLim;

    printf("Imprimir en orden descendiente\n");
    printf("Ingresar limite superior:\n");
    scanf("%i", &upperLim);

    printf("\nIngresar limite inferior:\n");
    scanf("%i", &bottomLim);

    for(int i = upperLim; i >= bottomLim; i--)
    {
        printf("Numero: %i \n", i);
    }
*/
    printf("Serie fibonnacci\n");

    int aux = 0;

    for(int j = 1; j <= 9; j++)
    {
        printf("%i ", (aux + j));
        if(j > 2)
            aux = j;
    }

    return 0;
}
