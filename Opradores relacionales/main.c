#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Operadores relacionales\n");

    float a, b;
    a = 5;
    b = 10;

    if(a < b)
    {
        printf("Pregunta 1: Cierto\n");
    }
    else
    {
        printf("Pregunta 1: Falso\n");
    }

    if(a <= b)
    {
        printf("Pregunta 2: Cierto\n");
    }
    else
    {
        printf("Pregunta 2: Falso\n");
    }

    if(a > b)
    {
        printf("Pregunta 3: Cierto\n");
    }
    else
    {
        printf("Pregunta 3: Falso\n");
    }

    if(a >= b)
    {
        printf("Pregunta 4: Cierto\n");
    }
    else
    {
        printf("Pregunta 4: Falso\n");
    }

    if(a == b)
    {
        printf("Pregunta 5: Cierto\n");
    }
    else
    {
        printf("Pregunta 5: Falso\n");
    }

    if(a != b)
    {
        printf("Pregunta 6: Cierto\n");
    }
    else
    {
        printf("Pregunta 6: Falso\n");
    }

    return 0;
}
