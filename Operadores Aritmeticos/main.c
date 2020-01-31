#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rSum;
    float rRes;
    float rDiv;
    float rMult;
    int rMod;

    rSum = 7 + 3;
    rRes = 7.1 - 3.1;
    rDiv = 7.0 / 3.0;
    rMult = 7 * 3;
    rMod = 7 % 3;

    printf("Resultado de sumar 7 + 3 = %i", rSum, "\nResultado de restar 7.1 - 3.1 = %f", rRes);
    printf("\nResultado de dividir 7.0 / 3.0 = %f", rDiv);
    printf("\nResultado de multiplicar 7 * 3 = %f", rMult);
    printf("\nResultado del módulo de 7.0 / 3.0 = %i", rMod);

    return 0;
}
