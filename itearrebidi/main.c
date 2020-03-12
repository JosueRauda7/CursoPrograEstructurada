#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arreglos e iterados bidimensionales!\n");

    int integerArray[4][5];

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            integerArray[i][j] = (((i + j) * 100) + j);
            printf("\nValor en (%i, %i):\t %i", i, j, integerArray[i][j]);
        }
    }

    return 0;
}
