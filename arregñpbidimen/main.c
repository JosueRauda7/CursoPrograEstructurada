#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arreglos bidimensionales!\n");

    int bidimensionalArray[4][4];

    bidimensionalArray[0][0] = 11;
    bidimensionalArray[0][1] = 12;
    bidimensionalArray[0][2] = 13;
    bidimensionalArray[0][3] = 14;

    bidimensionalArray[1][0] = 21;
    bidimensionalArray[1][1] = 22;
    bidimensionalArray[1][2] = 23;
    bidimensionalArray[1][3] = 24;

    bidimensionalArray[2][0] = 31;
    bidimensionalArray[2][1] = 32;
    bidimensionalArray[2][2] = 33;
    bidimensionalArray[2][3] = 34;

    bidimensionalArray[3][0] = 41;
    bidimensionalArray[3][1] = 42;
    bidimensionalArray[3][2] = 43;
    bidimensionalArray[3][3] = 44;

    printf("Valor en (0, 0): %i \n", bidimensionalArray[0][0]);
    printf("Valor en (0, 1): %i \n", bidimensionalArray[0][1]);
    printf("Valor en (0, 2): %i \n", bidimensionalArray[0][2]);
    printf("Valor en (0, 3): %i \n", bidimensionalArray[0][3]);

    return 0;
}
