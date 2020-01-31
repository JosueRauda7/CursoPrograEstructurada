#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fh;
    float c;

    fh = c = 0;

    printf("Vamos a convertir grados Fahrenheit a Celcius");
    printf("\nIngresa los grados Fahreinheit: ");
    scanf("%f", &fh);

    c = ((fh - 32) * (5 / 9));

    printf("\nLos grados Celcius son: %f", c);
    printf(" C");

    return 0;
}
