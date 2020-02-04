#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;
    a = 5;
    b = c = 10;

    if((a < b) && (b == c))
    {
        printf("Se cumplieron las dos condiciones\n");
    }
    else
    {
        printf("No se cumplieron las dos condiciones\n");
    }

    if((a > b) || (a <= c))
    {
        printf("Se cumplieron por lo menos una de las dos condiciones\n");
    }
    else
    {
        printf("No se cumplieron las condiciones\n");
    }

    return 0;
}
