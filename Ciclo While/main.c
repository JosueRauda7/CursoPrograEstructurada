#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Iterador While\n");

    int limit;

    scanf("%i", &limit);

    int i = 1;

    while(i <= limit)
    {
        printf("El numero es igual a: %i \n", i);
        i++;
    }

    i = 0;

    while(i < 5)
    {
        printf("#\n");
        i++;
    }

    return 0;
}
