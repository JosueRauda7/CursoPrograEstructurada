#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Condicion If\n");

    float a, b, c;
    a = b = 100;

    printf("Primera condicion \n");

    if(a == b)
    {
        printf("Ambos son iguales \n");
    }

    printf("Segunda condicion \n");

    if(a == b)
    {
        printf("Ambos son iguales \n");
        c = a + b;
        printf("El valor de c es: %f \n", c);
    }

    return 0;
}
